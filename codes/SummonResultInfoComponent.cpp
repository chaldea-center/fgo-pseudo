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
  struct GachaInfos_o *resultData; // x9
  struct SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_596CBCD & 1) == 0 )
  {
    sub_2213A60(&Method_SummonResultInfoComponent_OnClickSvt__);
    byte_596CBCD = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    v3 = Method_SummonResultInfoComponent_OnClickSvt__;
    if ( (*((_BYTE *)Method_SummonResultInfoComponent_OnClickSvt__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SummonResultInfoComponent_OnClickSvt__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0 )
      sub_2213CDC(v5, v6);
    ((void (__fastcall *)(intptr_t, int64_t, intptr_t))clickCallbackFunc->fields.invoke_impl)(
      clickCallbackFunc->fields.method_code,
      resultData->fields.userSvtId,
      clickCallbackFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonResultInfoComponent__setResultData(
        SummonResultInfoComponent_o *this,
        GachaInfos_o *data,
        bool isOverlap,
        SummonResultInfoComponent_ClickDelegate_o *callback,
        int64_t befQp,
        int32_t befMana,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v22; // x23
  bool isNew; // w24
  int32_t type; // w25
  Il2CppObject *v25; // x0
  UserCommandCodeEntity_o *v26; // x26
  int32_t v27; // w25
  __int64 v28; // x2
  __int64 v29; // x25
  struct DataMasterBase_array *datalist; // x26
  __int64 v31; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v32; // x26
  __int64 v33; // x25
  struct System_Collections_Generic_List_string__o *masterCheckName; // x27
  int32_t v35; // w0
  int32_t fakeValue; // w4
  int32_t v37; // w2
  UIButton_o *iconBtn; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  int32_t svtCoinNum; // [xsp+64h] [xbp-6Ch] BYREF
  Il2CppObject *v44; // [xsp+68h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_596CBCC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SvtCoinMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_12997/*"SUMMON_RESULT_COIN_FORMAT"*/);
    byte_596CBCC = 1;
  }
  entity = 0;
  v44 = 0;
  this->fields.resultData = data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultData,
    (int32_t)data,
    (System_String_o *)isOverlap,
    (System_String_o *)callback,
    befQp,
    befMana,
    (bool)method,
    v7);
  this->fields.clickCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_50;
  v22 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_50;
    v29 = *(_QWORD *)&Instance->fields._DispLog;
    datalist = Instance->fields.datalist;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sellMana, v28);
    *(_QWORD *)&v46.fields.currentCryptoKey = v29;
    *(_QWORD *)&v46.fields.fakeValue = datalist;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v46, 0);
    goto LABEL_25;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v22 )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v22,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_50;
    v32 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v33 = *(_QWORD *)&Instance->fields.lastFrameTime;
    masterCheckName = Instance->fields.masterCheckName;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sellMana, v31);
    *(_QWORD *)&v47.fields.currentCryptoKey = v33;
    *(_QWORD *)&v47.fields.fakeValue = masterCheckName;
    v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32[6], 0);
    fakeValue = v32[27].fields.fakeValue;
    v37 = v35;
    goto LABEL_26;
  }
  if ( !v22 )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_50;
  v25 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v25 || (v26 = (UserCommandCodeEntity_o *)v25, !SvtType__IsCommandCode(type, 0)) )
  {
    v27 = 0;
LABEL_25:
    v37 = 0;
    fakeValue = 0;
LABEL_26:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_50;
    ServantFaceIconComponent__Set_48052592(
      (ServantFaceIconComponent_o *)Instance,
      v27,
      v37,
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
      1,
      0);
    goto LABEL_28;
  }
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_50;
  ServantFaceIconComponent__Set_48058564((ServantFaceIconComponent_o *)Instance, v26, isNew, 0, 0, 0);
  v27 = 0;
LABEL_28:
  Instance = (DataManager_o *)this->fields.svtFaceInfo;
  if ( !Instance )
    goto LABEL_50;
  iconBtn = this->fields.iconBtn;
  Instance = (DataManager_o *)ServantFaceIconComponent__GetFaceSpriteName((ServantFaceIconComponent_o *)Instance, 0);
  if ( !iconBtn )
    goto LABEL_50;
  UIButton__set_normalSprite(iconBtn, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.autoSaleInfo;
  if ( !Instance )
    goto LABEL_50;
  AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)Instance, 0);
  sellMana = (unsigned int)data->fields.sellMana;
  if ( *(_QWORD *)&data->fields.sellQp )
  {
    Instance = (DataManager_o *)this->fields.autoSaleInfo;
    if ( !Instance )
      goto LABEL_50;
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
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v22,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_50;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v27,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_50:
    sub_2213CDC(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v22,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v44,
              v27,
              (const MethodInfo_3F10B80 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( v44 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v44[1].monitor, -1, 1, 0);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
            v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12997/*"SUMMON_RESULT_COIN_FORMAT"*/, 0);
            svtCoinNum = data->fields.svtCoinNum;
            v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &svtCoinNum);
            Instance = (DataManager_o *)System_String__Format(v41, v42, 0);
            if ( this->fields.addNumLabel )
            {
              UILabel__set_text(this->fields.addNumLabel, (System_String_o *)Instance, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_50;
  }
}


void SummonResultInfoComponent_ClickDelegate___ctor(
        SummonResultInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2006E34;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2006DEC;
}


System_IAsyncResult_o *SummonResultInfoComponent_ClickDelegate__BeginInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int64_t v10; // [xsp+18h] [xbp-28h] BYREF

  v9[1] = 0;
  v10 = usrSvtId;
  v9[0] = j_il2cpp_value_box_0(qword_5984368, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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