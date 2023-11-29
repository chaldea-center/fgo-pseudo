void __fastcall LotteryShopResultItem___ctor(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LotteryShopResultItem__EndShowServantEquipStatusDialog(
        LotteryShopResultItem_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x19
  LotteryShopResultItem___c_c *v11; // x8
  struct LotteryShopResultItem___c_StaticFields *static_fields; // x9
  System_Action_o *_9__5_0; // x20
  Il2CppObject *v14; // x21
  struct LotteryShopResultItem___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8E0B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, v4);
    sub_B16FFC(&LotteryShopResultItem___c_TypeInfo, v5);
    byte_40F8E0B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = LotteryShopResultItem___c_TypeInfo;
  if ( (BYTE3(LotteryShopResultItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LotteryShopResultItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LotteryShopResultItem___c_TypeInfo);
    v11 = LotteryShopResultItem___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = LotteryShopResultItem___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
    System_Action___ctor(_9__5_0, v14, Method_LotteryShopResultItem___c__EndShowServantEquipStatusDialog_b__5_0__, 0LL);
    v15 = LotteryShopResultItem___c_TypeInfo->static_fields;
    v15->__9__5_0 = _9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, _9__5_0, 0LL);
}


void __fastcall LotteryShopResultItem__OnClickDetail(LotteryShopResultItem_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  int32_t v8; // w22
  CommonUI_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  EquipTargetInfo_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ServantStatusDialog_EndDelegate_o *v19; // x22

  if ( (byte_40F8E0A & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B16FFC(&EquipTargetInfo_TypeInfo, v3);
    sub_B16FFC(&Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F8E0A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = *(_DWORD *)&this->fields.isNew;
  v9 = (CommonUI_o *)Instance;
  v14 = (EquipTargetInfo_o *)sub_B170CC(EquipTargetInfo_TypeInfo, v10, v11, v12, v13);
  EquipTargetInfo___ctor_29330048(v14, v8, 0, 1, 0, 0LL);
  v19 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16, v17, v18);
  ServantStatusDialog_EndDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_LotteryShopResultItem_EndShowServantEquipStatusDialog__,
    0LL);
  if ( !v9 )
    sub_B170D4();
  CommonUI__OpenServantEquipStatusDialog_18252676(v9, 11, v14, v19, 0LL, 0LL);
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
    sub_B170D4();
  ServantFaceIconComponent__Set_30702780(iconComp, svtId, 0, 0, 0, 0LL, 0LL, 2, !isGet, 0, 0LL, 0, 0, 0, 0, 0LL);
}


void __fastcall LotteryShopResultItem___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F690E & 1) == 0 )
  {
    sub_B16FFC(&LotteryShopResultItem___c_TypeInfo, v1);
    byte_40F690E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(LotteryShopResultItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)LotteryShopResultItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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