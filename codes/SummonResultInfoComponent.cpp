void __fastcall SummonResultInfoComponent___ctor(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultInfoComponent__OnClickSvt(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct GachaInfos_o *resultData; // x8
  struct SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x9

  if ( (byte_4B129FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonResultInfoComponent_OnClickSvt__, method, v2);
    byte_4B129FE = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    v4 = Method_SummonResultInfoComponent_OnClickSvt__;
    if ( (*((_BYTE *)Method_SummonResultInfoComponent_OnClickSvt__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SummonResultInfoComponent_OnClickSvt__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0LL )
      sub_1BCAA3C(v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int64_t, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      resultData->fields.userSvtId,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultInfoComponent__setResultData(
        SummonResultInfoComponent_o *this,
        GachaInfos_o *data,
        bool isOverlap,
        SummonResultInfoComponent_ClickDelegate_o *callback,
        int32_t befQp,
        int32_t befMana,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  DataManager_o *Instance; // x0
  __int64 sellMana; // x1
  DataManager_o *v48; // x23
  bool isNew; // w24
  int32_t type; // w25
  Il2CppObject *v51; // x0
  UserCommandCodeEntity_o *v52; // x26
  int32_t v53; // w25
  struct DataMasterBase_array *datalist; // x25
  __int64 v55; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v56; // x26
  struct System_Collections_Generic_List_string__o *masterCheckName; // x25
  __int64 v58; // x27
  int32_t v59; // w0
  int32_t fakeValue; // w4
  int32_t v61; // w2
  UIButton_o *iconBtn; // x24
  __int64 v63; // x1
  System_String_o *v64; // x21
  Il2CppObject *v65; // x0
  int32_t svtCoinNum; // [xsp+44h] [xbp-6Ch] BYREF
  Il2CppObject *v67; // [xsp+48h] [xbp-68h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_4B129FD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, data, isOverlap);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SvtCoinMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v24, v25);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v26, v27);
    sub_1BCA7E0(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v28, v29);
    sub_1BCA7E0(&int_TypeInfo, v30, v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37);
    sub_1BCA7E0(&StringLiteral_12526/*"SUMMON_RESULT_COIN_FORMAT"*/, v38, v39);
    byte_4B129FD = 1;
  }
  entity = 0LL;
  v67 = 0LL;
  this->fields.resultData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resultData,
    (int64_t)data,
    isOverlap,
    (int32_t)callback,
    *(System_String_o **)&befQp,
    *(BattleSetupInfo_o **)&befMana,
    (FollowerInfo_o *)method,
    v7);
  this->fields.clickCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallbackFunc,
    (int64_t)callback,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_49;
  v48 = Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.objectId,
                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v55 = *(_QWORD *)&Instance->fields._DispLog;
    datalist = Instance->fields.datalist;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sellMana);
    *(_QWORD *)&v69.fields.currentCryptoKey = v55;
    *(_QWORD *)&v69.fields.fakeValue = datalist;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
    goto LABEL_24;
  }
  type = data->fields.type;
  Instance = (DataManager_o *)SvtType__IsCommandCode(type, 0LL);
  if ( !v48 )
    goto LABEL_49;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v48,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_49;
    Instance = (DataManager_o *)DataMasterBase_object__object__long___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                  data->fields.userSvtId,
                                  (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !Instance )
      goto LABEL_49;
    v56 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)Instance;
    v58 = *(_QWORD *)&Instance->fields.lastFrameTime;
    masterCheckName = Instance->fields.masterCheckName;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, sellMana);
    *(_QWORD *)&v70.fields.currentCryptoKey = v58;
    *(_QWORD *)&v70.fields.fakeValue = masterCheckName;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v70, 0LL);
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v56[6], 0LL);
    fakeValue = v56[18].fields.fakeValue;
    v61 = v59;
    goto LABEL_25;
  }
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                v48,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_49;
  v51 = DataMasterBase_object__object__long___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          data->fields.userSvtId,
          (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v51 || (v52 = (UserCommandCodeEntity_o *)v51, !SvtType__IsCommandCode(type, 0LL)) )
  {
    v53 = 0;
LABEL_24:
    v61 = 0;
    fakeValue = 0;
LABEL_25:
    Instance = (DataManager_o *)this->fields.svtFaceInfo;
    if ( !Instance )
      goto LABEL_49;
    ServantFaceIconComponent__Set_38928428(
      (ServantFaceIconComponent_o *)Instance,
      v53,
      v61,
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
  ServantFaceIconComponent__Set_38939452((ServantFaceIconComponent_o *)Instance, v52, isNew, 0LL, 0LL, 0LL);
  v53 = 0;
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
                                v48,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_49;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          v53,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_49:
    sub_1BCAA3C(Instance, sellMana);
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) && data->fields.svtCoinNum >= 1 )
  {
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  v48,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( Instance )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              &v67,
              v53,
              (const MethodInfo_31B2E94 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      Instance = (DataManager_o *)this->fields.addRoot;
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( v67 )
        {
          Instance = (DataManager_o *)this->fields.addIcon;
          if ( Instance )
          {
            ItemIconComponent__SetItem((ItemIconComponent_o *)Instance, (int32_t)v67[1].monitor, -1, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12526/*"SUMMON_RESULT_COIN_FORMAT"*/, 0LL);
            svtCoinNum = data->fields.svtCoinNum;
            v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum);
            Instance = (DataManager_o *)System_String__Format(v64, v65, 0LL);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09138;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A090F0;
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
  if ( (byte_4B129FF & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, usrSvtId, callback);
    byte_4B129FF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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