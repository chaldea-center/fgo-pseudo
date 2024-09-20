void __fastcall SummonResultInfoComponent___ctor(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultInfoComponent__OnClickSvt(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct GachaInfos_o *resultData; // x8
  struct SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x9

  if ( (byte_4A57A71 & 1) == 0 )
  {
    sub_1B885B0(&Method_SummonResultInfoComponent_OnClickSvt__);
    byte_4A57A71 = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    v3 = Method_SummonResultInfoComponent_OnClickSvt__;
    if ( (*((_BYTE *)Method_SummonResultInfoComponent_OnClickSvt__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SummonResultInfoComponent_OnClickSvt__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0LL )
      sub_1B8880C(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int64_t, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      resultData->fields.userSvtId,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
  }
}


void __fastcall SummonResultInfoComponent__setResultData(
        SummonResultInfoComponent_o *this,
        GachaInfos_o *data,
        bool isOverlap,
        SummonResultInfoComponent_ClickDelegate_o *callback,
        int32_t befQp,
        int32_t befMana,
        const MethodInfo *method)
{
  char v13; // w2
  int32_t v14; // w3
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v17; // x23
  bool isNew; // w24
  int32_t type; // w25
  Il2CppObject *v20; // x0
  UserCommandCodeEntity_o *v21; // x26
  int32_t v22; // w25
  struct DataMasterBase_array *datalist; // x25
  __int64 v24; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v25; // x26
  struct System_Collections_Generic_List_string__o *masterCheckName; // x25
  __int64 v27; // x27
  int32_t v28; // w0
  int32_t fakeValue; // w4
  int32_t v30; // w2
  UIButton_o *iconBtn; // x24
  System_String_o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  int32_t svtCoinNum; // [xsp+44h] [xbp-6Ch] BYREF
  Il2CppObject *v38; // [xsp+48h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A57A70 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SvtCoinMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12370/*"SUMMON_RESULT_COIN_FORMAT"*/);
    byte_4A57A70 = 1;
  }
  entity = 0LL;
  v38 = 0LL;
  this->fields.resultData = data;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultData,
    (int32_t)data,
    isOverlap,
    (int32_t)callback);
  this->fields.clickCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallbackFunc, (int32_t)callback, v13, v14);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_49;
  v17 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v24 = *(_QWORD *)&Instance->fields._DispLog;
    datalist = Instance->fields.datalist;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v24;
    *(_QWORD *)&v40.fields.fakeValue = datalist;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
    goto LABEL_24;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0LL);
  if ( !v17 )
    goto LABEL_49;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v17,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v27 = *(_QWORD *)&Instance->fields.lastFrameTime;
    masterCheckName = Instance->fields.masterCheckName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v27;
    *(_QWORD *)&v41.fields.fakeValue = masterCheckName;
    v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v41, 0LL);
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25[6], 0LL);
    fakeValue = v25[18].fields.fakeValue;
    v30 = v28;
    goto LABEL_25;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  v20 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v20 || (v21 = (UserCommandCodeEntity_o *)v20, !SvtType__IsCommandCode(type, 0LL)) )
  {
    v22 = 0;
LABEL_24:
    v30 = 0;
    fakeValue = 0;
LABEL_25:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_49;
    ServantFaceIconComponent__Set_38217436(
      (ServantFaceIconComponent_o *)Instance,
      v22,
      v30,
      -1,
      fakeValue,
      0LL,
      0LL,
      2,
      isNew,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
    goto LABEL_27;
  }
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__Set_38227772((ServantFaceIconComponent_o *)Instance, v21, isNew, 0LL, 0LL, 0LL);
  v22 = 0;
LABEL_27:
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_49;
  iconBtn = this->fields.iconBtn;
  Instance = (DataManager_o *)ServantFaceIconComponent__GetFaceSpriteName((ServantFaceIconComponent_o *)Instance, 0LL);
  if ( !iconBtn )
    goto LABEL_49;
  UIButton__set_normalSprite(iconBtn, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.autoSaleInfo;
  if ( !Instance )
    goto LABEL_49;
  AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)Instance, 0LL);
  sellMana = (unsigned int)data->fields.sellMana;
  if ( *(_QWORD *)&data->fields.sellQp )
  {
    Instance = (DataManager_o *)this->fields.autoSaleInfo;
    if ( !Instance )
      goto LABEL_49;
    AutoSellInfoComponent__SetData(
      (AutoSellInfoComponent_o *)Instance,
      sellMana,
      data->fields.sellQp,
      befMana,
      befQp,
      0LL);
  }
  Instance = (DataManager_o *)this->fields.addRoot;
  if ( !Instance )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v17,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v22,
          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_49:
    sub_1B8880C(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v17,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v38,
              v22,
              (const MethodInfo_311D988 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( v38 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v38[1].monitor, -1, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12370/*"SUMMON_RESULT_COIN_FORMAT"*/, 0LL);
            svtCoinNum = data->fields.svtCoinNum;
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum, v33, v34, v35);
            Instance = (DataManager_o *)System_String__Format(v32, v36, 0LL);
            if ( this->fields.addNumLabel )
            {
              UILabel__set_text(this->fields.addNumLabel, (System_String_o *)Instance, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultInfoComponent_ClickDelegate___ctor(
        SummonResultInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19CAE1C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CADD4;
}


System_IAsyncResult_o *__fastcall SummonResultInfoComponent_ClickDelegate__BeginInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int64_t v10; // [xsp+18h] [xbp-38h] BYREF

  v10 = usrSvtId;
  if ( (byte_4A57A72 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A57A72 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__Invoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int64_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    usrSvtId,
    *(_QWORD *)&this->fields.extra_arg);
}