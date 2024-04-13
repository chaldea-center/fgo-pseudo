void __fastcall LotteryShopResultItem___ctor(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LotteryShopResultItem__EndShowServantEquipStatusDialog(
        LotteryShopResultItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  CommonUI_o *v15; // x19
  LotteryShopResultItem___c_c *v16; // x8
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v19; // x21
  struct LotteryShopResultItem___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E7269 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v7, v8, v9);
    sub_B5D5C4(&LotteryShopResultItem___c_TypeInfo, v10, v11, v12);
    byte_42E7269 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)Instance;
  v16 = LotteryShopResultItem___c_TypeInfo;
  if ( (BYTE3(LotteryShopResultItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v16 = LotteryShopResultItem___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__5_0, v19, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    v20 = LotteryShopResultItem___c_TypeInfo->static_fields;
    v20->__9__5_0 = _9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v20->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v15 )
    sub_B5D69C(Instance, v14);
  CommonUI__CloseServantEquipStatusDialog(v15, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  WebViewManager_o *Instance; // x0
  int32_t v18; // w22
  CommonUI_o *v19; // x20
  EquipTargetInfo_o *v20; // x21
  ServantStatusDialog_EndDelegate_o *v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_42E7268 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EquipTargetInfo_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E7268 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = *(_DWORD *)&this->fields.isNew;
  v19 = (CommonUI_o *)Instance;
  v20 = (EquipTargetInfo_o *)sub_B5D694(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_30730304(v20, v18, 0, 1, 0, 0LL);
  v21 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v19 )
    sub_B5D69C(v22, v23);
  CommonUI__OpenServantEquipStatusDialog_18217320(v19, 11, v20, v21, 0LL, 0LL);
}


void __fastcall LotteryShopResultItem__Set(
        LotteryShopResultItem_o *this,
        int32_t svtId,
        bool isGet,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *iconComp; // x0

  iconComp = this->fields.iconComp;
  *(_DWORD *)&this->fields.isNew = svtId;
  *(&this->fields.isNew + 4) = !isGet;
  if ( !iconComp )
    sub_B5D69C(0LL, svtId);
  ServantFaceIconComponent__Set_30846632(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EE1 & 1) == 0 )
  {
    sub_B5D5C4(&LotteryShopResultItem___c_TypeInfo, v1, v2, v3);
    byte_42E5EE1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(LotteryShopResultItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LotteryShopResultItem___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall LotteryShopResultItem___c___ctor(LotteryShopResultItem___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LotteryShopResultItem___c___EndShowServantEquipStatusDialog_b__5_0(
        LotteryShopResultItem___c_o *this,
        const MethodInfo *method)
{
  ;
}