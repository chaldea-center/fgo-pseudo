void LinkableSprite___ctor(LinkableSprite_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LinkableSprite__MakePixelPerfect(LinkableSprite_o *this, const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *mUiSprite; // x0
  struct UISprite_o *v4; // x8
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  mUiSprite = (UnityEngine_BoxCollider_o *)this->fields.mUiSprite;
  if ( !mUiSprite
    || (mUiSprite = (UnityEngine_BoxCollider_o *)((__int64 (__fastcall *)(UnityEngine_BoxCollider_o *, void *))mUiSprite->klass[2]._1.parent)(
                                                   mUiSprite,
                                                   mUiSprite->klass[2]._1.generic_class),
        (v4 = this->fields.mUiSprite) == 0)
    || (mUiSprite = this->fields.mCollider) == 0 )
  {
    sub_1C93D2C(mUiSprite, method);
  }
  v5.fields.y = (float)v4->fields.mHeight;
  v5.fields.x = (float)v4->fields.mWidth;
  v5.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size(mUiSprite, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void LinkableSprite__SetSize(LinkableSprite_o *this, int32_t w, int32_t h, const MethodInfo *method)
{
  UIWidget_o *mUiSprite; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  mUiSprite = (UIWidget_o *)this->fields.mUiSprite;
  if ( !mUiSprite
    || (UIWidget__set_width(mUiSprite, w, 0), (mUiSprite = (UIWidget_o *)this->fields.mUiSprite) == 0)
    || (UIWidget__set_height(mUiSprite, h, 0), (mUiSprite = (UIWidget_o *)this->fields.mCollider) == 0) )
  {
    sub_1C93D2C(mUiSprite, *(_QWORD *)&w);
  }
  v8.fields.y = (float)h;
  v8.fields.x = (float)w;
  v8.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mUiSprite, v8, 0);
}


void LinkableSprite__SetUp(LinkableSprite_o *this, int32_t lnkType, System_String_o *lnkUrl, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_linkUrl,
    (int32_t)lnkUrl,
    (int32_t)lnkUrl,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}