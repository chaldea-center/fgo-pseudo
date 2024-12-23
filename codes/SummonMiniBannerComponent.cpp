void __fastcall SummonMiniBannerComponent___ctor(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.SCALING_SIZE = 0x431B00003F666666LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall SummonMiniBannerComponent__GetBannerIndex(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bannerIdx;
}


VaildGachaInfo_o *__fastcall SummonMiniBannerComponent__GetBannerSummonInfo(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.info;
}


int32_t __fastcall SummonMiniBannerComponent__GetMoveBannerIndex(
        SummonMiniBannerComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveBannerIdx;
}


void __fastcall SummonMiniBannerComponent__OnClickBanner(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  struct SummonMiniBannerComponent_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)this->fields.moveBannerIdx,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent__SetBannerInfo(
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
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UIAtlas_o *Component_object; // x0
  __int64 v31; // x1

  if ( (byte_4B6335A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, info);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v17);
    byte_4B6335A = 1;
  }
  this->fields.info = info;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.info,
    (int64_t)info,
    *(int64_t *)&idx,
    moveIdx,
    (System_String_o *)bannerAtlas,
    (BattleSetupInfo_o *)imgName,
    (FollowerInfo_o *)callback,
    (PartyListViewItem_o *)parent);
  this->fields.bannerIdx = idx;
  this->fields.moveBannerIdx = moveIdx;
  this->fields.callbackFunc = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
  this->fields.scrollPanel = parent;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.scrollPanel, (int64_t)parent, v24, v25, v26, v27, v28, v29);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bannerImg)
      || (UISprite__set_atlas(this->fields.bannerImg, Component_object, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.bannerImg) == 0LL) )
    {
      sub_1BE4D28(Component_object, v31);
    }
    UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent__SetEnableCollider(
        SummonMiniBannerComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4B6335B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_Collider___, isEnable);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6335B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v7 )
  {
    if ( !Component_object )
      sub_1BE4D28(v7, v8);
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0LL);
  }
}


void __fastcall SummonMiniBannerComponent__Update(SummonMiniBannerComponent_o *this, const MethodInfo *method)
{
  struct UIPanel_o *scrollPanel; // x8
  float x; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  float v6; // s0
  float v7; // s8
  UnityEngine_GameObject_o *v8; // x0

  scrollPanel = this->fields.scrollPanel;
  if ( !scrollPanel )
    sub_1BE4D28(this, method);
  x = scrollPanel->fields.mClipOffset.fields.x;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v6 = vabds_f32(x, GameObjectExtensions__GetLocalPositionX(gameObject, 0LL));
  v7 = 1.0;
  if ( v6 > 0.1 )
    v7 = 1.0 - (float)(v6 * (float)((float)(1.0 - this->fields.SCALING_SIZE) / this->fields.SCALING_POS));
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34488972(v8, v7, v7, 0LL);
}


void __fastcall SummonMiniBannerComponent__add_callbackFunc(
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

  if ( (byte_4B63358 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, value);
    byte_4B63358 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonMiniBannerComponent_CallbackFunc_c *)v8->klass != SummonMiniBannerComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  SummonMiniBannerComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SummonMiniBannerComponent__remove_callbackFunc(
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

  if ( (byte_4B63359 & 1) == 0 )
  {
    sub_1BE4ACC(&SummonMiniBannerComponent_CallbackFunc_TypeInfo, value);
    byte_4B63359 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SummonMiniBannerComponent_CallbackFunc_c *)v8->klass != SummonMiniBannerComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  SummonMiniBannerComponent__SetBannerInfo(v11, v12, v13, v14, v15, v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonMiniBannerComponent_CallbackFunc___ctor(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A22EB4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A22E5C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SummonMiniBannerComponent_CallbackFunc__BeginInvoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        int32_t moveIndex,
        bool isPlaySe,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  char v15[4]; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v16 = moveIndex;
  v15[0] = isPlaySe;
  if ( (byte_4B6335C & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, *(_QWORD *)&moveIndex);
    sub_1BE4ACC(&int_TypeInfo, v9);
    byte_4B6335C = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v16, isPlaySe, callback, object);
  v14[1] = j_il2cpp_value_box_0(bool_TypeInfo, v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall SummonMiniBannerComponent_CallbackFunc__EndInvoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall SummonMiniBannerComponent_CallbackFunc__Invoke(
        SummonMiniBannerComponent_CallbackFunc_o *this,
        int32_t moveIndex,
        bool isPlaySe,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    moveIndex,
    isPlaySe,
    *(_QWORD *)&this->fields.extra_arg);
}