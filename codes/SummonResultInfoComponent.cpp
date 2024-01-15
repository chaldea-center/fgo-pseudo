void __fastcall SummonResultInfoComponent___ctor(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultInfoComponent__OnClickSvt(SummonResultInfoComponent_o *this, const MethodInfo *method)
{
  struct GachaInfos_o *resultData; // x8
  SummonResultInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40FD4BB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD4BB = 1;
  }
  if ( this->fields.clickCallbackFunc )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    resultData = this->fields.resultData;
    if ( !resultData || (clickCallbackFunc = this->fields.clickCallbackFunc) == 0LL )
      sub_B170D4();
    SummonResultInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, resultData->fields.userSvtId, 0LL);
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
  System_Int32_array *v7; // x7
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
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WebViewManager_o *Instance; // x0
  DataManager_o *v34; // x23
  bool isNew; // w24
  int32_t type; // w25
  bool IsCommandCode; // w0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v38; // x0
  UserServantEntity_o *v39; // x0
  UserCommandCodeEntity_o *v40; // x26
  ServantFaceIconComponent_o *v41; // x0
  int32_t v42; // w25
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v44; // x0
  struct System_String_o *longName; // x25
  struct System_String_o *name; // x26
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v47; // x0
  UserServantEntity_o *v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v49; // x26
  __int64 v50; // x25
  __int64 v51; // x27
  int32_t v52; // w0
  int32_t fakeValue; // w4
  int32_t v54; // w2
  ServantFaceIconComponent_o *svtFaceInfo; // x0
  ServantFaceIconComponent_o *v56; // x0
  UIButton_o *iconBtn; // x24
  System_String_o *FaceSpriteName; // x0
  AutoSellInfoComponent_o *autoSaleInfo; // x0
  int32_t sellMana; // w1
  AutoSellInfoComponent_o *v61; // x0
  UnityEngine_GameObject_o *addRoot; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  ItemIconComponent_o *addIcon; // x0
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  int32_t svtCoinNum; // [xsp+44h] [xbp-5Ch] BYREF
  WarEntity_o *v71; // [xsp+48h] [xbp-58h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_40FD4BA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_SvtCoinMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B16FFC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v17);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v21);
    sub_B16FFC(&int_TypeInfo, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&StringLiteral_12407/*"SUMMON_RESULT_COIN_FORMAT"*/, v26);
    byte_40FD4BA = 1;
  }
  entity = 0LL;
  v71 = 0LL;
  this->fields.resultData = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultData,
    (System_Int32_array **)data,
    (System_String_array **)isOverlap,
    (System_String_array **)callback,
    *(System_Boolean_array ***)&befQp,
    *(System_Int32_array ***)&befMana,
    (System_Int32_array *)method,
    v7);
  this->fields.clickCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_53;
  v34 = (DataManager_o *)Instance;
  isNew = data->fields.isNew && !isOverlap;
  if ( !data->fields.userSvtId )
  {
    if ( !Instance )
      goto LABEL_53;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_53;
    v44 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            MasterData_WarQuestSelectionMaster,
            data->fields.objectId,
            (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !v44 )
      goto LABEL_53;
    name = v44->fields.name;
    longName = v44->fields.longName;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v73.fields.currentCryptoKey = name;
    *(_QWORD *)&v73.fields.fakeValue = longName;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
    goto LABEL_26;
  }
  type = data->fields.type;
  IsCommandCode = SvtType__IsCommandCode(type, 0LL);
  if ( !v34 )
    goto LABEL_53;
  if ( !IsCommandCode )
  {
    v47 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                   v34,
                                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !v47 )
      goto LABEL_53;
    v48 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
            v47,
            data->fields.userSvtId,
            (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !v48 )
      goto LABEL_53;
    v49 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v48;
    v51 = *(_QWORD *)&v48->fields.svtId.fields.currentCryptoKey;
    v50 = *(_QWORD *)&v48->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v74.fields.currentCryptoKey = v51;
    *(_QWORD *)&v74.fields.fakeValue = v50;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v74, 0LL);
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v49[6], 0LL);
    fakeValue = v49[18].fields.fakeValue;
    v54 = v52;
    goto LABEL_27;
  }
  v38 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 v34,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !v38 )
    goto LABEL_53;
  v39 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
          v38,
          data->fields.userSvtId,
          (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  if ( !v39 || (v40 = (UserCommandCodeEntity_o *)v39, !SvtType__IsCommandCode(type, 0LL)) )
  {
    v42 = 0;
LABEL_26:
    v54 = 0;
    fakeValue = 0;
LABEL_27:
    svtFaceInfo = this->fields.svtFaceInfo;
    if ( !svtFaceInfo )
      goto LABEL_53;
    ServantFaceIconComponent__Set_30702780(
      svtFaceInfo,
      v42,
      v54,
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
    goto LABEL_29;
  }
  v41 = this->fields.svtFaceInfo;
  if ( !v41 )
    goto LABEL_53;
  ServantFaceIconComponent__Set_30713160(v41, v40, isNew, 0LL, 0LL, 0LL);
  v42 = 0;
LABEL_29:
  v56 = this->fields.svtFaceInfo;
  if ( !v56 )
    goto LABEL_53;
  iconBtn = this->fields.iconBtn;
  FaceSpriteName = ServantFaceIconComponent__GetFaceSpriteName(v56, 0LL);
  if ( !iconBtn )
    goto LABEL_53;
  UIButton__set_normalSprite(iconBtn, FaceSpriteName, 0LL);
  autoSaleInfo = this->fields.autoSaleInfo;
  if ( !autoSaleInfo )
    goto LABEL_53;
  AutoSellInfoComponent__Clear(autoSaleInfo, 0LL);
  sellMana = data->fields.sellMana;
  if ( sellMana || data->fields.sellQp )
  {
    v61 = this->fields.autoSaleInfo;
    if ( !v61 )
      goto LABEL_53;
    AutoSellInfoComponent__SetData(v61, sellMana, data->fields.sellQp, befMana, befQp, 0LL);
  }
  addRoot = this->fields.addRoot;
  if ( !addRoot )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(addRoot, 0, 0LL);
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         v34,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v63 )
    goto LABEL_53;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v63,
          &entity,
          v42,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return;
  if ( !entity )
LABEL_53:
    sub_B170D4();
  if ( ServantEntity__get_IsServant((ServantEntity_o *)entity, 0LL) && data->fields.svtCoinNum >= 1 )
  {
    v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v34,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SvtCoinMaster___);
    if ( v64 )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              v64,
              &v71,
              v42,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__TryGetEntity__) )
        return;
      v65 = this->fields.addRoot;
      if ( v65 )
      {
        UnityEngine_GameObject__SetActive(v65, 1, 0LL);
        if ( v71 )
        {
          addIcon = this->fields.addIcon;
          if ( addIcon )
          {
            ItemIconComponent__SetItem(addIcon, (int32_t)v71->fields.age, -1, 0LL);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v67 = LocalizationManager__Get((System_String_o *)StringLiteral_12407/*"SUMMON_RESULT_COIN_FORMAT"*/, 0LL);
            svtCoinNum = data->fields.svtCoinNum;
            v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &svtCoinNum);
            v69 = System_String__Format(v67, v68, 0LL);
            if ( this->fields.addNumLabel )
            {
              UILabel__set_text(this->fields.addNumLabel, v69, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_53;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultInfoComponent_ClickDelegate___ctor(
        SummonResultInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall SummonResultInfoComponent_ClickDelegate__BeginInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int64_t v10; // [xsp+18h] [xbp-28h] BYREF

  v10 = usrSvtId;
  if ( (byte_40F7A97 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, usrSvtId);
    byte_40F7A97 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(long_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__EndInvoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall SummonResultInfoComponent_ClickDelegate__Invoke(
        SummonResultInfoComponent_ClickDelegate_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SummonResultInfoComponent_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, int64_t, _QWORD); // x0
  SummonResultInfoComponent_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(int64_t, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  SummonResultInfoComponent_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SummonResultInfoComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(int64_t, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, usrSvtId, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(usrSvtId, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, int64_t, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, usrSvtId, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, int64_t, _QWORD))v14)(v19, usrSvtId, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, int64_t, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            usrSvtId,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, int64_t, __int64))v21)(v19, usrSvtId, v20);
    goto LABEL_37;
  }
}