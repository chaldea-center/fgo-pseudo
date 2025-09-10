void SummonMiniBannerComponent___ctor(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.SCALING_SIZE = 0x431B00003F666666LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t SummonMiniBannerComponent__GetBannerIndex(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.bannerIdx;
}


VaildGachaInfo_o *SummonMiniBannerComponent__GetBannerSummonInfo(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


int32_t SummonMiniBannerComponent__GetMoveBannerIndex(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  return this->fields.moveBannerIdx;
}


void SummonMiniBannerComponent__OnClickBanner(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  struct SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)this->fields.moveBannerIdx,
      1,
      callbackFunc->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void SummonMiniBannerComponent__SetBannerInfo(
        SummonMiniBannerComponent_o *this,
        VaildGachaInfo_o *info,
        int32_t idx,
        int32_t moveIdx,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        SummonMiniBannerComponent_CallbackFunc_o *callback,
        UIPanel_o *parent,
        const MethodInfo *method)
{
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UIAtlas_o *Component_object; // x0
  __int64 v22; // x1

  if ( (byte_4C238E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C238E3 = 1;
  }
  this->fields.info = info;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.info, (int32_t)info, idx, *(const MethodInfo **)&moveIdx);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
  this->fields.scrollPanel = parent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scrollPanel, (int32_t)parent, v19, v20);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bannerImg)
      || (UISprite__set_atlas(this->fields.bannerImg, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.bannerImg) == 0) )
    {
      sub_1C2D6EC(Component_object, v22);
    }
    UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0);
  }
}


void SummonMiniBannerComponent__SetEnableCollider(
        SummonMiniBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C238E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C238E4 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v6 )
  {
    if ( !Component_object )
      sub_1C2D6EC(v6, v7);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
}


void SummonMiniBannerComponent__Update(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollPanel; // x8
  float x; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v6; // s0
  float v7; // s8
  UnityEngine_GameObject_o *v8; // x0

  scrollPanel = this->fields.scrollPanel;
  if ( !scrollPanel )
    sub_1C2D6EC(this, method);
  x = scrollPanel->fields.mClipOffset.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = vabds_f32(x, GameObjectExtensions__GetLocalPositionX(gameObject, 0));
  v7 = 1.0;
  if ( v6 > 0.1 )
    v7 = 1.0 - (float)(v6 * (float)((float)(1.0 - this->fields.SCALING_SIZE) / this->fields.SCALING_POS));
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_35920564(v8, v7, v7, 0);
}


void SummonMiniBannerComponent__add_callbackFunc(
        SummonMiniBannerComponent_o *this,
        SummonMiniBannerComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonMiniBannerComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonMiniBannerComponent_o *v11; // x0
  SummonMiniBannerComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C238E1 & 1) == 0 )
  {
    sub_1C2D490(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    byte_4C238E1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SummonMiniBannerComponent_CallbackFunc_c *)v8->klass != SummonMiniBannerComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SummonMiniBannerComponent__remove_callbackFunc(v11, v12, v13);
}


void SummonMiniBannerComponent__remove_callbackFunc(
        SummonMiniBannerComponent_o *this,
        SummonMiniBannerComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SummonMiniBannerComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SummonMiniBannerComponent_o *v11; // x0
  VaildGachaInfo_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *v15; // x4
  System_String_o *v16; // x5
  SummonMiniBannerComponent_CallbackFunc_o *v17; // x6
  UIPanel_o *v18; // x7
  const MethodInfo *v19; // [xsp+30h] [xbp+0h]

  if ( (byte_4C238E2 & 1) == 0 )
  {
    sub_1C2D490(&SummonMiniBannerComponent_CallbackFunc_TypeInfo);
    byte_4C238E2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SummonMiniBannerComponent_CallbackFunc_c *)v8->klass != SummonMiniBannerComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SummonMiniBannerComponent__SetBannerInfo(v11, v12, v13, v14, v15, v16, v17, v18, v19);
}


void SummonMiniBannerComponent_CallbackFunc___ctor(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E34C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E2F4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *SummonMiniBannerComponent_CallbackFunc__BeginInvoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        int32_t moveIndex,
        bool isPlaySe,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v14[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = moveIndex;
  v14[0] = isPlaySe;
  if ( (byte_4C238E5 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C238E5 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15, isPlaySe, callback, object);
  v13[1] = j_il2cpp_value_box_0(bool_TypeInfo, v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void SummonMiniBannerComponent_CallbackFunc__EndInvoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void SummonMiniBannerComponent_CallbackFunc__Invoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        int32_t moveIndex,
        bool isPlaySe,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    moveIndex,
    isPlaySe,
    this->fields.method);
}