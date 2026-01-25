void LinkableTexture___ctor(LinkableTexture_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LinkableTexture__MakePixelPerfect(LinkableTexture_o *this, const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *mUiTexture; // x0
  struct UITexture_o *v4; // x8
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  mUiTexture = (UnityEngine_BoxCollider_o *)this->fields.mUiTexture;
  if ( !mUiTexture
    || (mUiTexture = (UnityEngine_BoxCollider_o *)((__int64 (__fastcall *)(UnityEngine_BoxCollider_o *, void *))mUiTexture->klass[2]._1.parent)(
                                                    mUiTexture,
                                                    mUiTexture->klass[2]._1.generic_class),
        (v4 = this->fields.mUiTexture) == 0)
    || (mUiTexture = this->fields.mCollider) == 0 )
  {
    sub_1C7BD40(mUiTexture, method);
  }
  v5.fields.y = (float)v4->fields.mHeight;
  v5.fields.x = (float)v4->fields.mWidth;
  v5.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size(mUiTexture, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void LinkableTexture__SetSize(LinkableTexture_o *this, int32_t w, int32_t h, const MethodInfo *method)
{
  UIWidget_o *mUiTexture; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  mUiTexture = (UIWidget_o *)this->fields.mUiTexture;
  if ( !mUiTexture
    || (UIWidget__set_width(mUiTexture, w, 0), (mUiTexture = (UIWidget_o *)this->fields.mUiTexture) == 0)
    || (UIWidget__set_height(mUiTexture, h, 0), (mUiTexture = (UIWidget_o *)this->fields.mCollider) == 0) )
  {
    sub_1C7BD40(mUiTexture, *(_QWORD *)&w);
  }
  v8.fields.y = (float)h;
  v8.fields.x = (float)w;
  v8.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mUiTexture, v8, 0);
}


void LinkableTexture__SetTexture(LinkableTexture_o *this, UnityEngine_Texture_o *tex, const MethodInfo *method)
{
  struct UITexture_o *mUiTexture; // x0

  mUiTexture = this->fields.mUiTexture;
  if ( !mUiTexture )
    sub_1C7BD40(0, tex);
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Texture_o *, const MethodInfo *))mUiTexture->klass->vtable._27_set_mainTexture.methodPtr)(
    mUiTexture,
    tex,
    mUiTexture->klass->vtable._27_set_mainTexture.method);
}


void LinkableTexture__SetUp(
        LinkableTexture_o *this,
        int32_t lnkType,
        System_String_o *lnkUrl,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)p_linkUrl,
    (int32_t)lnkUrl,
    (int32_t)lnkUrl,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}