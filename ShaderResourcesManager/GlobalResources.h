#pragma once

struct ID3D11BlendState;
struct ID3D11DepthStencilState;
struct ID3D11RasterizerState;
struct ID3D11SamplerState;

class GlobalResources {
public:
	static GlobalResources* gInstance;

	GlobalResources();
	ID3D11BlendState* TransparentBlendState() { return mTransparentBS; }
	ID3D11DepthStencilState* DisableDepthTest() { return mDisableDepthTest; }
	ID3D11SamplerState* MinMagMipPointSampler() { return mMinMagMipPointSS; }
	ID3D11RasterizerState* NoCullRS() { return mNoCullRS; }
private:
	ID3D11BlendState* mTransparentBS;
	ID3D11SamplerState* mMinMagMipPointSS;
	ID3D11DepthStencilState* mDisableDepthTest;
	ID3D11RasterizerState* mNoCullRS;
};