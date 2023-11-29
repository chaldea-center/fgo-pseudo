void __fastcall LinkableSprite___ctor(LinkableSprite_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LinkableSprite__MakePixelPerfect(LinkableSprite_o *this, const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_o *mCollider; // x0
  struct UnityEngine_BoxCollider_o *v4; // x8
  UnityEngine_BoxCollider_o *klass; // x0
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (((void (__fastcall *)(struct UnityEngine_BoxCollider_o *, void *))mCollider->klass[2]._1.typeMetadataHandle)(
          mCollider,
          mCollider->klass[2]._1.interopData),
        (v4 = this->fields.mCollider) == 0LL)
    || (klass = (UnityEngine_BoxCollider_o *)this[1].klass) == 0LL )
  {
    sub_B170D4();
  }
  v6.fields.y = (float)*((int *)&v4[6].fields + 1);
  v6.fields.x = (float)v4[6].fields.m_CachedPtr;
  v6.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size(klass, v6, 0LL);
}


void __fastcall LinkableSprite__SetSize(LinkableSprite_o *this, int32_t w, int32_t h, const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_o *mCollider; // x0
  struct UnityEngine_BoxCollider_o *v8; // x0
  UnityEngine_BoxCollider_o *klass; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  mCollider = this->fields.mCollider;
  if ( !mCollider
    || (UIWidget__set_width((UIWidget_o *)mCollider, w, 0LL), (v8 = this->fields.mCollider) == 0LL)
    || (UIWidget__set_height((UIWidget_o *)v8, h, 0LL), (klass = (UnityEngine_BoxCollider_o *)this[1].klass) == 0LL) )
  {
    sub_B170D4();
  }
  v10.fields.y = (float)h;
  v10.fields.x = (float)w;
  v10.fields.z = 1.0;
  UnityEngine_BoxCollider__set_size(klass, v10, 0LL);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)p_mUiSprite,
    (System_Int32_array **)lnkUrl,
    (System_String_array **)lnkUrl,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
}