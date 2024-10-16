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

  if ( (byte_4AB2592 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SummonResultInfoComponent_OnClickSvt__, method);
    byte_4AB2592 = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    v3 = Method_SummonResultInfoComponent_OnClickSvt__;
    if ( (*((_BYTE *)Method_SummonResultInfoComponent_OnClickSvt__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BAB434(Method_SummonResultInfoComponent_OnClickSvt__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BAB400(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0LL )
      sub_1BAB678(v5, v6);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  char v26; // w2
  int32_t v27; // w3
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v30; // x23
  bool isNew; // w24
  int32_t type; // w25
  Il2CppObject *v33; // x0
  UserCommandCodeEntity_o *v34; // x26
  int32_t v35; // w25
  struct DataMasterBase_array *datalist; // x25
  __int64 v37; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v38; // x26
  struct System_Collections_Generic_List_string__o *masterCheckName; // x25
  __int64 v40; // x27
  int32_t v41; // w0
  int32_t fakeValue; // w4
  int32_t v43; // w2
  UIButton_o *iconBtn; // x24
  System_String_o *v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  int32_t svtCoinNum; // [xsp+44h] [xbp-6Ch] BYREF
  Il2CppObject *v51; // [xsp+48h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_4AB2591 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, data);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SvtCoinMaster___, v13);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v14);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserServantMaster___, v15);
    sub_1BAB41C(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v16);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_1BAB41C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v18);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v19);
    sub_1BAB41C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v20);
    sub_1BAB41C(&int_TypeInfo, v21);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v22);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BAB41C(&StringLiteral_12397/*"SUMMON_RESULT_COIN_FORMAT"*/, v25);
    byte_4AB2591 = 1;
  }
  entity = 0LL;
  v51 = 0LL;
  this->fields.resultData = data;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.resultData,
    (int32_t)data,
    isOverlap,
    (int32_t)callback);
  this->fields.clickCallbackFunc = callback;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.clickCallbackFunc, (int32_t)callback, v26, v27);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_49;
  v30 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v37 = *(_QWORD *)&Instance->fields._DispLog;
    datalist = Instance->fields.datalist;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v53.fields.currentCryptoKey = v37;
    *(_QWORD *)&v53.fields.fakeValue = datalist;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v53, 0LL);
    goto LABEL_24;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0LL);
  if ( !v30 )
    goto LABEL_49;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v30,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_3163F3C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v38 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v40 = *(_QWORD *)&Instance->fields.lastFrameTime;
    masterCheckName = Instance->fields.masterCheckName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v54.fields.currentCryptoKey = v40;
    *(_QWORD *)&v54.fields.fakeValue = masterCheckName;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v54, 0LL);
    v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v38[6], 0LL);
    fakeValue = v38[18].fields.fakeValue;
    v43 = v41;
    goto LABEL_25;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v30,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  v33 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_3163F3C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v33 || (v34 = (UserCommandCodeEntity_o *)v33, !SvtType__IsCommandCode(type, 0LL)) )
  {
    v35 = 0;
LABEL_24:
    v43 = 0;
    fakeValue = 0;
LABEL_25:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_49;
    ServantFaceIconComponent__Set_38597804(
      (ServantFaceIconComponent_o *)Instance,
      v35,
      v43,
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
  ServantFaceIconComponent__Set_38608828((ServantFaceIconComponent_o *)Instance, v34, isNew, 0LL, 0LL, 0LL);
  v35 = 0;
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
                                v30,
                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v35,
          (const MethodInfo_3163DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_49:
    sub_1BAB678(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v30,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v51,
              v35,
              (const MethodInfo_3163DE4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( v51 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v51[1].monitor, -1, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v45 = LocalizationManager__Get((System_String_o *)StringLiteral_12397/*"SUMMON_RESULT_COIN_FORMAT"*/, 0LL);
            svtCoinNum = data->fields.svtCoinNum;
            v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum, v46, v47, v48);
            Instance = (DataManager_o *)System_String__Format(v45, v49, 0LL);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19EB170;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19EB128;
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
  if ( (byte_4AB2593 & 1) == 0 )
  {
    sub_1BAB41C(&long_TypeInfo, usrSvtId);
    byte_4AB2593 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, v9, callback, object);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
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