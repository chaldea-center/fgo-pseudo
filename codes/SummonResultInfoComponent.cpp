void SummonResultInfoComponent___ctor(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SummonResultInfoComponent__OnClickSvt(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct GachaInfos_o *resultData; // x8
  struct SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x9

  if ( (byte_4D2CE41 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SummonResultInfoComponent_OnClickSvt__);
    byte_4D2CE41 = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    v3 = Method_SummonResultInfoComponent_OnClickSvt__;
    if ( (*((_BYTE *)Method_SummonResultInfoComponent_OnClickSvt__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SummonResultInfoComponent_OnClickSvt__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0 )
      sub_1C93D2C(v5, v6);
    ((void (__fastcall *)(intptr_t, int64_t, intptr_t))clickCallbackFunc->fields.invoke_impl)(
      clickCallbackFunc->fields.method_code,
      resultData->fields.userSvtId,
      clickCallbackFunc->fields.method);
  }
}


void SummonResultInfoComponent__setResultData(
        SummonResultInfoComponent_o *this,
        GachaInfos_o *data,
        bool isOverlap,
        SummonResultInfoComponent_ClickDelegate_o *callback,
        int64_t befQp,
        int32_t befMana,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v22; // x23
  bool isNew; // w24
  int32_t type; // w25
  Il2CppObject *v25; // x0
  UserCommandCodeEntity_o *v26; // x26
  int32_t v27; // w25
  struct DataMasterBase_array *datalist; // x25
  __int64 v29; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v30; // x26
  struct System_Collections_Generic_List_string__o *masterCheckName; // x25
  __int64 v32; // x27
  int32_t v33; // w0
  int32_t fakeValue; // w4
  int32_t v35; // w2
  UIButton_o *iconBtn; // x24
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  int32_t svtCoinNum; // [xsp+54h] [xbp-6Ch] BYREF
  Il2CppObject *v40; // [xsp+58h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4D2CE40 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SvtCoinMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_12565/*"SUMMON_RESULT_COIN_FORMAT"*/);
    byte_4D2CE40 = 1;
  }
  entity = 0;
  v40 = 0;
  this->fields.resultData = data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.resultData,
    (int32_t)data,
    isOverlap,
    (int32_t)callback,
    (System_String_o *)befQp,
    befMana,
    (int64_t)method,
    v7);
  this->fields.clickCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_49;
  v22 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v29 = *(_QWORD *)&Instance->fields._DispLog;
    datalist = Instance->fields.datalist;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v42.fields.currentCryptoKey = v29;
    *(_QWORD *)&v42.fields.fakeValue = datalist;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v42, 0);
    goto LABEL_24;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0);
  if ( !v22 )
    goto LABEL_49;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v22,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v30 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v32 = *(_QWORD *)&Instance->fields.lastFrameTime;
    masterCheckName = Instance->fields.masterCheckName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v32;
    *(_QWORD *)&v43.fields.fakeValue = masterCheckName;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v43, 0);
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v30[6], 0);
    fakeValue = v30[18].fields.fakeValue;
    v35 = v33;
    goto LABEL_25;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  v25 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_3465A24 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v25 || (v26 = (UserCommandCodeEntity_o *)v25, !SvtType__IsCommandCode(type, 0)) )
  {
    v27 = 0;
LABEL_24:
    v35 = 0;
    fakeValue = 0;
LABEL_25:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_49;
    ServantFaceIconComponent__Set_41813152(
      (ServantFaceIconComponent_o *)Instance,
      v27,
      v35,
      -1,
      fakeValue,
      0,
      0,
      2,
      isNew,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    goto LABEL_27;
  }
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__Set_41820936((ServantFaceIconComponent_o *)Instance, v26, isNew, 0, 0, 0);
  v27 = 0;
LABEL_27:
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_49;
  iconBtn = this->fields.iconBtn;
  Instance = (DataManager_o *)ServantFaceIconComponent__GetFaceSpriteName((ServantFaceIconComponent_o *)Instance, 0);
  if ( !iconBtn )
    goto LABEL_49;
  UIButton__set_normalSprite(iconBtn, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.autoSaleInfo;
  if ( !Instance )
    goto LABEL_49;
  AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)Instance, 0);
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
      0);
  }
  Instance = (DataManager_o *)this->fields.addRoot;
  if ( !Instance )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v27,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_49:
    sub_1C93D2C(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v22,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v40,
              v27,
              (const MethodInfo_34632C0 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( v40 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v40[1].monitor, -1, 1, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12565/*"SUMMON_RESULT_COIN_FORMAT"*/, 0);
            svtCoinNum = data->fields.svtCoinNum;
            v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum);
            Instance = (DataManager_o *)System_String__Format(v37, v38, 0);
            if ( this->fields.addNumLabel )
            {
              UILabel__set_text(this->fields.addNumLabel, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
}


void SummonResultInfoComponent_ClickDelegate___ctor(
        SummonResultInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC4A4C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC4A04;
}


System_IAsyncResult_o *SummonResultInfoComponent_ClickDelegate__BeginInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int64_t v10; // [xsp+18h] [xbp-38h] BYREF

  v10 = usrSvtId;
  if ( (byte_4D2CE42 & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D2CE42 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void SummonResultInfoComponent_ClickDelegate__Invoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int64_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    usrSvtId,
    this->fields.method);
}