void __fastcall LinkableTexture___ctor(LinkableTexture_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LinkableTexture__MakePixelPerfect(LinkableTexture_o *this, const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *mUiTexture; // x0
  struct UITexture_o *v4; // x8
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  mUiTexture = (UnityEngine_BoxCollider_o *)this->fields.mUiTexture;
  if ( !mUiTexture
    || (mUiTexture = (UnityEngine_BoxCollider_o *)((__int64 (__fastcall *)(UnityEngine_BoxCollider_o *, void *))mUiTexture->klass[2]._1.typeMetadataHandle)(
                                                    mUiTexture,
                                                    mUiTexture->klass[2]._1.interopData),
        (v4 = this->fields.mUiTexture) == 0LL)
    || (mUiTexture = this->fields.mCollider) == 0LL )
  {
    sub_1B4D1EC(mUiTexture, method);
  }
  v5.fields.y = (float)v4->fields.mHeight;
  v5.fields.x = (float)v4->fields.mWidth;
  v5.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size(mUiTexture, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkableTexture__SetSize(LinkableTexture_o *this, int32_t w, int32_t h, const MethodInfo *method)
{
  UIWidget_o *mUiTexture; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  mUiTexture = (UIWidget_o *)this->fields.mUiTexture;
  if ( !mUiTexture
    || (UIWidget__set_width(mUiTexture, w, 0LL), (mUiTexture = (UIWidget_o *)this->fields.mUiTexture) == 0LL)
    || (UIWidget__set_height(mUiTexture, h, 0LL), (mUiTexture = (UIWidget_o *)this->fields.mCollider) == 0LL) )
  {
    sub_1B4D1EC(mUiTexture, *(_QWORD *)&w);
  }
  v8.fields.y = (float)h;
  v8.fields.x = (float)w;
  v8.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mUiTexture, v8, 0LL);
}


void __fastcall LinkableTexture__SetTexture(
        LinkableTexture_o *this,
        UnityEngine_Texture_o *tex,
        const MethodInfo *method)
{
  struct UITexture_o *mUiTexture; // x0

  mUiTexture = this->fields.mUiTexture;
  if ( !mUiTexture )
    sub_1B4D1EC(0LL, tex);
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, Il2CppMethodPointer))mUiTexture->klass->vtable._27_set_mainTexture.method)(
    mUiTexture,
    tex,
    mUiTexture->klass->vtable._28_get_shader.methodPtr);
}


void __fastcall LinkableTexture__SetUp(
        LinkableTexture_o *this,
        int32_t lnkType,
        System_String_o *lnkUrl,
        const MethodInfo *method)
{
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_1B4CF34((CGThumbnailListItem_o *)p_linkUrl, (int32_t)lnkUrl, (int32_t)lnkUrl, method);
}