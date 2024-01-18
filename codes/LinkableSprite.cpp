void __fastcall LinkableSprite___ctor(LinkableSprite_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LinkableSprite__MakePixelPerfect(LinkableSprite_o *this, const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *mCollider; // x0
  struct UnityEngine_BoxCollider_o *v4; // x8
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4

  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (mCollider = (UnityEngine_BoxCollider_o *)((__int64 (__fastcall *)(UnityEngine_BoxCollider_o *, void *))mCollider->klass[2]._1.typeMetadataHandle)(
                                                   mCollider,
                                                   mCollider->klass[2]._1.interopData),
        (v4 = this->fields.mCollider) == 0LL)
    || (mCollider = (UnityEngine_BoxCollider_o *)this[1].klass) == 0LL )
  {
    sub_B2C434(mCollider, method);
  }
  v5.fields.y = (float)*((int *)&v4[6].fields + 1);
  v5.fields.x = (float)v4[6].fields.m_CachedPtr;
  v5.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size(mCollider, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LinkableSprite__SetSize(LinkableSprite_o *this, int32_t w, int32_t h, const MethodInfo *method)
{
  UIWidget_o *mCollider; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  mCollider = (UIWidget_o *)this->fields.mCollider;
  if ( !mCollider
    || (UIWidget__set_width(mCollider, w, 0LL), (mCollider = (UIWidget_o *)this->fields.mCollider) == 0LL)
    || (UIWidget__set_height(mCollider, h, 0LL), (mCollider = (UIWidget_o *)this[1].klass) == 0LL) )
  {
    sub_B2C434(mCollider, *(_QWORD *)&w);
  }
  v8.fields.y = (float)h;
  v8.fields.x = (float)w;
  v8.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)mCollider, v8, 0LL);
}


void __fastcall LinkableSprite__SetUp(
        LinkableSprite_o *this,
        int32_t lnkType,
        System_String_o *lnkUrl,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UISprite_o **p_mUiSprite; // x0

  this->fields.mUiSprite = (struct UISprite_o *)lnkUrl;
  p_mUiSprite = &this->fields.mUiSprite;
  *((_DWORD *)p_mUiSprite - 2) = lnkType;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_mUiSprite,
    (System_Int32_array **)lnkUrl,
    (System_String_array **)lnkUrl,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}