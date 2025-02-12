void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BCBABE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1411/*"1B2FA5"*/, method);
    sub_1C1ABD4(&StringLiteral_1406/*"11814B"*/, v9);
    sub_1C1ABD4(&StringLiteral_1970/*"A51B1B"*/, v10);
    byte_4BCBABE = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_BFAA80;
  v11 = StringLiteral_1970/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1970/*"A51B1B"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_1411/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1411/*"1B2FA5"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_1406/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1406/*"11814B"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Action_object__o *v34; // x21
  const MethodInfo *v35; // x1

  if ( (byte_4BCBAB6 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_EventFortificationDetailEntity__TypeInfo, eventFortificationDetailEntities);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v8);
    sub_1C1ABD4(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v9);
    sub_1C1ABD4(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v10);
    sub_1C1ABD4(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v11);
    byte_4BCBAB6 = 1;
  }
  v12 = sub_1C1AE20(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = onClick;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)onClick, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.servantItemList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Action_object__o *)sub_1C1AE20(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v34,
    (Il2CppObject *)v12,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0LL);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1C1AE30(v13, v14);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v34,
    (const MethodInfo_363D2D0 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v35);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventFortificationWorkItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v8; // w21

  if ( (byte_4BCBAB8 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, *(_QWORD *)&index);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v5);
    byte_4BCBAB8 = 1;
  }
  result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    do
    {
      result = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 v8,
                                                 (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.position == index )
        return result;
      if ( m_CancellationTokenSource == ++v8 )
        return 0LL;
      result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1C1AE30(result, *(_QWORD *)&index);
  }
  return 0LL;
}


void __fastcall EventFortificationWorkManager__ModifyItem(
        EventFortificationWorkManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w25
  int32_t v14; // w23
  EventFortificationWorkItem_o *v15; // x24
  System_Action_int__o *v16; // x23
  const MethodInfo *v17; // x5

  if ( (byte_4BCBABA & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int__TypeInfo, userServantEntity);
    sub_1C1ABD4(&Method_EventFortificationWorkManager_OnClickItem__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v11);
    byte_4BCBABA = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C1AE30(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v14,
                                                                       (const MethodInfo_363C5C0 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      v15 = (EventFortificationWorkItem_o *)servantItemList;
      if ( servantItemList[3].fields._size == index )
        break;
      if ( size == ++v14 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_10;
    }
    v16 = (System_Action_int__o *)sub_1C1AE20(System_Action_int__TypeInfo);
    System_Action_int____ctor(v16, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
    EventFortificationWorkItem__SetServantInfo(v15, userServantEntity, eventId, index, v16, v17);
  }
}


void __fastcall EventFortificationWorkManager__ModifyItems(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  Il2CppObject *MasterData_object; // x21
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v24; // x21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  struct SetSvtInfo_array *setSvtInfos; // x27
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x22
  unsigned int v30; // w20
  SetSvtInfo_o *v31; // x25
  UserServantEntity_o *v32; // x23
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v38; // x0
  __int64 v39; // x1
  Il2CppObject v40; // q0
  Il2CppObject *v41; // x24
  int32_t svtId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // kr00_16
  EventFortificationSvtEntity_o *v44; // x8
  Il2CppObject *v45; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // kr10_16
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  Il2CppObject *v49; // x0
  __int64 v50; // x1
  Il2CppObject *v51; // x24
  UserServantEntity_o *v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t iconLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // kr20_16
  Il2CppObject *v57; // x8
  __int64 v58; // x23
  __int64 v59; // x1
  NetworkManager_c *v60; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v62; // x0
  __int64 v63; // x1
  __int128 v64; // q0
  Il2CppObject *v65; // x24
  int32_t v66; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // kr30_16
  Il2CppObject *v68; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // kr40_16
  Il2CppObject *v70; // x23
  int32_t eventId; // w24
  int32_t position; // w25
  System_Action_int__o *v73; // x26
  const MethodInfo *v74; // x5
  const MethodInfo *v75; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v78; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v79; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BCBAB9 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int__TypeInfo, method);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v3);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v4);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1C1ABD4(&DataManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v12);
    sub_1C1ABD4(&Method_EventFortificationWorkManager_OnClickItem__, v13);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v14);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v15);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C1ABD4(&UserServantEntity_TypeInfo, v19);
    byte_4BCBAB9 = 1;
  }
  entity = 0LL;
  memset(&v80, 0, sizeof(v80));
  v78 = 0LL;
  v79 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v21);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( !eventFortificationEntity || !MasterData_object )
    goto LABEL_93;
  if ( !UserEventFortificationMaster__TryGetEntity(
          (UserEventFortificationMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.eventId,
          eventFortificationEntity->fields.idx,
          0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_93:
    sub_1C1AE30(Instance, v21);
  }
  v24 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v80.fields._list = *(_OWORD *)&v77.fields.currentCryptoKey;
  v80.fields._current = (Il2CppObject *)v77.fields.fakeValue;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v25 )
      break;
    if ( !entity )
      sub_1C1AE30(v25, v26);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1C1AE30(v25, v26);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v80.fields._current;
      v30 = 0;
LABEL_23:
      if ( v30 >= max_length )
        sub_1C1AE38(v25, v26);
      v31 = setSvtInfos->m_Items[v30];
      if ( !v31 )
        sub_1C1AE30(v25, v26);
      if ( !current )
        sub_1C1AE30(v25, v26);
      if ( v31->fields.position != current->fields.position )
        goto LABEL_69;
      v32 = (UserServantEntity_o *)sub_1C1AE20(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v32, 0LL);
      v79 = (Il2CppObject *)v32;
      if ( v31->fields.type )
      {
        v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v33 )
          sub_1C1AE30(0LL, v34);
        v35 = DataManager__GetMasterData_object_(
                (DataManager_o *)v33,
                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1C1AE30(v35, v36);
        if ( !v35 )
          sub_1C1AE30(0LL, v36);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v35,
               &v78,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v31->fields.position,
               0LL) )
        {
          v37 = v79;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v76, 0LL, 0LL);
          v77 = v76;
          if ( !v37 )
            sub_1C1AE30(v38, v39);
          v40 = *(Il2CppObject *)&v77.fields.fakeValue;
          v37[3] = *(Il2CppObject *)&v77.fields.currentCryptoKey;
          v37[4] = v40;
          v41 = v79;
          svtId = v31->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v41 )
            sub_1C1AE30(*(_QWORD *)&v43.fields.currentCryptoKey, *(_QWORD *)&v43.fields.fakeValue);
          v41[5] = (Il2CppObject)v43;
          v44 = v78;
          if ( !v78 )
            sub_1C1AE30(*(_QWORD *)&v43.fields.currentCryptoKey, *(_QWORD *)&v43.fields.fakeValue);
          v45 = v79;
          if ( !v79 )
            sub_1C1AE30(*(_QWORD *)&v43.fields.currentCryptoKey, *(_QWORD *)&v43.fields.fakeValue);
          LODWORD(v79[16].klass) = v78->fields.lv;
          v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v44->fields.limitCount, 0LL);
          v45[6] = (Il2CppObject)v46;
          if ( !v79 )
            sub_1C1AE30(*(_QWORD *)&v46.fields.currentCryptoKey, *(_QWORD *)&v46.fields.fakeValue);
          LODWORD(v79[18].monitor) = 0;
        }
      }
      else
      {
        v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v47 )
          sub_1C1AE30(0LL, v48);
        v49 = DataManager__GetMasterData_object_(
                (DataManager_o *)v47,
                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v49 )
          sub_1C1AE30(0LL, v50);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v49,
          &v79,
          v31->fields.userSvtId,
          (const MethodInfo_324AC20 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v24 || !EventEntity__IsEventPeriod(v24, 0LL, 0LL) )
        {
          v51 = v79;
          if ( v79 )
          {
            v52 = (UserServantEntity_o *)sub_1C1AE20(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_41414804(v52, (UserServantEntity_o *)v51, 0LL);
            v79 = (Il2CppObject *)v52;
            if ( !v52 )
              sub_1C1AE30(v53, v54);
            v52->fields.lv = v31->fields.lv;
            iconLimitCount = v31->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v52->fields.iconLimitCount = v56;
            v57 = v79;
            if ( !v79 )
              sub_1C1AE30(*(_QWORD *)&v56.fields.currentCryptoKey, *(_QWORD *)&v56.fields.fakeValue);
          }
          else
          {
            if ( !v31->fields.svtId )
              goto LABEL_68;
            v58 = sub_1C1AE20(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v58, 0LL);
            v79 = (Il2CppObject *)v58;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BC2585 )
            {
              sub_1C1ABD4(&NetworkManager_TypeInfo, v59);
              byte_4BC2585 = 1;
            }
            v60 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v60 = NetworkManager_TypeInfo;
            }
            userIdNumber = v60->static_fields->userIdNumber;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v76, userIdNumber, 0LL);
            v77 = v76;
            if ( !v58 )
              sub_1C1AE30(v62, v63);
            v64 = *(_OWORD *)&v77.fields.fakeValue;
            *(_OWORD *)(v58 + 48) = *(_OWORD *)&v77.fields.currentCryptoKey;
            *(_OWORD *)(v58 + 64) = v64;
            v65 = v79;
            v66 = v31->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v66, 0LL);
            if ( !v65 )
              sub_1C1AE30(*(_QWORD *)&v67.fields.currentCryptoKey, *(_QWORD *)&v67.fields.fakeValue);
            v65[5] = (Il2CppObject)v67;
            v68 = v79;
            if ( !v79 )
              sub_1C1AE30(*(_QWORD *)&v67.fields.currentCryptoKey, *(_QWORD *)&v67.fields.fakeValue);
            LODWORD(v79[16].klass) = v31->fields.lv;
            v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v31->fields.iconLimitCount, 0LL);
            v68[10] = (Il2CppObject)v69;
            v57 = v79;
            if ( !v79 )
              sub_1C1AE30(*(_QWORD *)&v69.fields.currentCryptoKey, *(_QWORD *)&v69.fields.fakeValue);
          }
          LODWORD(v57[18].monitor) = v31->fields.exceedCount;
        }
      }
LABEL_68:
      v70 = v79;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v73 = (System_Action_int__o *)sub_1C1AE20(System_Action_int__TypeInfo);
      System_Action_int____ctor(v73, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v70, eventId, position, v73, v74);
LABEL_69:
      max_length = setSvtInfos->max_length;
      if ( (int)++v30 >= max_length )
        continue;
      goto LABEL_23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v75);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4BCBAB7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ActionExtensions_Call_EventFortificationWorkItem___, *(_QWORD *)&index);
    byte_4BCBAB7 = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_2EF1C9C *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void __fastcall EventFortificationWorkManager__OnClickItemIcon(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v7; // x1
  struct FortificationOrganizationPanelComponent_o *v8; // x8
  struct ItemIconComponent_o *v9; // x20
  System_Action_o *v10; // x21
  System_Action_o *v11; // x2

  if ( (byte_4BCBABC & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BCBABC = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v11 = 0LL;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C1AE30(itemIcon, v7);
  }
  v8 = this->fields.orgPanel;
  if ( !v8 )
    goto LABEL_12;
  v8->fields.isTouchEnabled = 0;
  v9 = this->fields.itemIcon;
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v9 )
    goto LABEL_12;
  itemIcon = v9;
  v11 = v10;
LABEL_11:
  ItemIconComponent__OnClickItem(itemIcon, 0LL, v11, 0LL);
}


void __fastcall EventFortificationWorkManager__SerializeFieldNotNullCheck(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationWorkManager__SetPointText(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v13; // w23
  const MethodInfo *v14; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v17; // x20
  System_String_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x19
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *v30; // x0
  int v31; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-58h] BYREF
  int v33; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4BCBABD & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v4);
    sub_1C1ABD4(&int_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v6);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_6622/*"FORTIFICATION_POINT_INFO"*/, v9);
    byte_4BCBABD = 1;
  }
  memset(&v32, 0, sizeof(v32));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      servantItemList,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v13 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1C1AE30(0LL, v14);
      v13 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v32.fields._current, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v17 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6622/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint, v19, v20, v21);
    v33 = maxFortificationPoint;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v23, v24, v25);
    v31 = v13;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v27, v28, v29);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_63054808(
                                                                     v18,
                                                                     v22,
                                                                     v26,
                                                                     v30,
                                                                     0LL);
    if ( !v17 )
LABEL_18:
      sub_1C1AE30(servantItemList, v11);
    UILabel__set_text(v17, (System_String_o *)servantItemList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__SetServantFortificationWork(
        EventFortificationWorkManager_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        int32_t eventId,
        System_Action_EventFortificationWorkItem__o *onClick,
        FortificationOrganizationPanelComponent_o *orgPanel,
        UIAtlas_o *terminalAtlas,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v52; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v53; // x23
  System_Action_int__o *v54; // x24
  const MethodInfo *v55; // x3
  DataManager_o *v56; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v58; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v60; // x8
  System_String_o **v61; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v64; // s0
  UnityEngine_Object_o *v65; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  UISprite_o *v70; // x22
  Il2CppObject *v71; // x23
  Il2CppObject *v72; // x0
  System_String_o *v73; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  UISprite_o *v79; // x22
  Il2CppObject *v80; // x23
  Il2CppObject *v81; // x0
  System_String_o *v82; // x23
  int32_t size; // w10
  int32_t v84; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v87; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v89; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v91; // x1
  UISprite_o *v92; // x21
  int32_t v93; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4BCBAB5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_int__TypeInfo, eventFortificationEntity);
    sub_1C1ABD4(&AtlasManager_TypeInfo, v14);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v15);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_GiftMaster___, v16);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v17);
    sub_1C1ABD4(&Method_EventFortificationWorkManager_OnClickItem__, v18);
    sub_1C1ABD4(&int_TypeInfo, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v20);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v21);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v22);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C1ABD4(&StringLiteral_5083/*"D2"*/, v24);
    sub_1C1ABD4(&StringLiteral_23843/*"spot_info_gauge_l"*/, v25);
    sub_1C1ABD4(&StringLiteral_23841/*"spot_info_gauge_base"*/, v26);
    sub_1C1ABD4(&StringLiteral_20488/*"icon_event_{0}{1}"*/, v27);
    sub_1C1ABD4(&StringLiteral_19519/*"event_organizationbg_{0}{1}"*/, v28);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v29);
    sub_1C1ABD4(&StringLiteral_23845/*"spot_info_window"*/, v30);
    sub_1C1ABD4(&StringLiteral_20831/*"img_terminal_itembg"*/, v31);
    byte_4BCBAB5 = 1;
  }
  entities = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.eventFortificationEntity,
    (int64_t)eventFortificationEntity,
    *(int64_t *)&eventId,
    (int32_t)onClick,
    (System_String_o *)orgPanel,
    (BattleSetupInfo_o *)terminalAtlas,
    (FollowerInfo_o *)method,
    v7);
  this->fields.onClick = onClick;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onClick, (int64_t)onClick, v33, v34, v35, v36, v37, v38);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.orgPanel, (int64_t)orgPanel, v39, v40, v41, v42, v43, v44);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.terminalAtlas,
    (int64_t)terminalAtlas,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_104;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v53 = entities;
  v54 = (System_Action_int__o *)sub_1C1AE20(System_Action_int__TypeInfo);
  System_Action_int____ctor(v54, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
  EventFortificationWorkManager__CreateItem(this, v53, v54, v55);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0LL);
  if ( !Instance )
    goto LABEL_104;
  v56 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  if ( !*(_QWORD *)&Instance->fields._DispLog )
    goto LABEL_34;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_34;
  if ( !LODWORD(v56->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  v58 = *(int32_t **)&v56->fields._DispLog;
  if ( !v58 )
    goto LABEL_104;
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_104;
  ItemIconComponent__SetGift_39340176((ItemIconComponent_o *)Instance, v58[5], v58[6], v58[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( LODWORD(v56->fields.m_CancellationTokenSource) )
    {
      v60 = *(_QWORD *)&v56->fields._DispLog;
      if ( !v60 )
        goto LABEL_104;
      if ( *(_DWORD *)(v60 + 20) != 1 )
        goto LABEL_31;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0LL, 0LL) )
      {
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        UISprite__set_atlas((UISprite_o *)Instance, terminalAtlas, 0LL);
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v61 = (System_String_o **)&StringLiteral_20831/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v61 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v61, 0LL);
      goto LABEL_34;
    }
LABEL_105:
    sub_1C1AE38(Instance, v52);
  }
LABEL_34:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v52);
    byte_4BC2585 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_104;
  Instance = (DataManager_o *)UserEventFortificationMaster__TryGetEntity(
                                (UserEventFortificationMaster_o *)MasterData_object,
                                &entity,
                                *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                eventId,
                                eventFortificationEntity->fields.idx,
                                0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_104;
    this->fields.nowPoint = entity->fields.totalFortificationPoint;
    pointSlider = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(pointSlider, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_104;
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v64 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_55;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v65 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v64 = 0.0;
LABEL_55:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v64, 0LL);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0LL, 0LL) )
  {
    v70 = this->fields.workTypeIcon;
    v93 = eventId;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v67, v68, v69);
    v72 = (Il2CppObject *)System_Int32__ToString_63845976(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_5083/*"D2"*/,
                            0LL);
    v73 = System_String__Format_63054740((System_String_o *)StringLiteral_20488/*"icon_event_{0}{1}"*/, v71, v72, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39058000(eventId, v70, v73, 0LL);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.teamNameLabel;
    if ( !Instance )
      goto LABEL_104;
    UILabel__set_text((UILabel_o *)Instance, eventFortificationEntity->fields.name, 0LL);
  }
  EventFortificationWorkManager__SetPointText(this, v52);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v79 = this->fields.bgSprite;
    v93 = eventId;
    v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93, v76, v77, v78);
    v81 = (Il2CppObject *)System_Int32__ToString_63845976(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_5083/*"D2"*/,
                            0LL);
    v82 = System_String__Format_63054740((System_String_o *)StringLiteral_19519/*"event_organizationbg_{0}{1}"*/, v80, v81, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetEventUI_39058000(eventId, v79, v82, 0LL);
    if ( !entities )
      goto LABEL_104;
    size = entities->fields._size;
    if ( size <= 2 )
    {
      Instance = (DataManager_o *)this->fields.bgSprite;
      if ( !Instance )
        goto LABEL_104;
      bgSpriteWidth = this->fields.bgSpriteWidth;
    }
    else
    {
      Instance = (DataManager_o *)this->fields.bgSprite;
      v84 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v84;
      }
      else
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = v84 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_90;
  v87 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39058000(eventId, v87, (System_String_o *)StringLiteral_23845/*"spot_info_window"*/, 0LL);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          0LL) )
    goto LABEL_90;
  Instance = (DataManager_o *)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_104:
    sub_1C1AE30(Instance, v52);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0LL);
LABEL_90:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v89 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39058000(eventId, v89, (System_String_o *)StringLiteral_23843/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v92 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39058000(eventId, v92, (System_String_o *)StringLiteral_23841/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v91);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *workTypeIcon; // x20
  UnityEngine_Object_o *teamNameLabel; // x20
  UnityEngine_Object_o *bgSprite; // x20
  UnityEngine_Object_o *titleRootObj; // x20
  __int64 v7; // x1
  __int64 gameObject; // x0
  int v9; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v12; // w21
  float v13; // s8
  unsigned int v14; // s0
  int v15; // w22
  float v16; // s9
  unsigned int v17; // s0
  float v18; // s10
  float v19; // s1
  float v20; // s11
  float v21; // s8
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BCBABB & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBABB = 1;
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(workTypeIcon, 0LL, 0LL) )
  {
    teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(teamNameLabel, 0LL, 0LL) )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
      {
        titleRootObj = (UnityEngine_Object_o *)this->fields.titleRootObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(titleRootObj, 0LL, 0LL) )
        {
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          v9 = *(_DWORD *)(gameObject + 168);
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.teamNameLabel;
          if ( !gameObject )
            goto LABEL_40;
          addWidthForIcon = this->fields.addWidthForIcon;
          v12 = *(_DWORD *)(gameObject + 168);
          v13 = *(float *)&localScale;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v14 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v15 = *(_DWORD *)(gameObject + 168);
          v16 = *(float *)&v14;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v17 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v18 = *(float *)&v17;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v20 = v19;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v21 = (float)(v13 * (float)v9) + (float)addWidthForIcon;
          v23.fields.x = -(float)((float)((float)(v18 * (float)v15) * 0.5)
                                - (float)((float)((float)(v18 * (float)v15) - (float)(v21 + (float)(v16 * (float)v12)))
                                        * 0.5));
          v23.fields.z = 0.0;
          v23.fields.y = v20;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0LL);
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v22 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4BC2141 )
          {
            gameObject = sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v7);
            byte_4BC2141 = 1;
          }
          if ( !v22
            || (UnityEngine_Transform__set_localPosition(
                  v22,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL),
                (gameObject = (__int64)this->fields.teamNameLabel) == 0)
            || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0
            || (gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL)) == 0 )
          {
LABEL_40:
            sub_1C1AE30(gameObject, v7);
          }
          v24.fields.x = v21;
          v24.fields.y = 0.0;
          v24.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0LL);
        }
      }
    }
  }
}


void __fastcall EventFortificationWorkManager___OnClickItemIcon_b__36_0(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *orgPanel; // x8

  orgPanel = this->fields.orgPanel;
  if ( !orgPanel )
    sub_1C1AE30(this, method);
  orgPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationWorkManager___c__DisplayClass29_0___ctor(
        EventFortificationWorkManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationWorkManager___c__DisplayClass29_0___CreateItem_b__0(
        EventFortificationWorkManager___c__DisplayClass29_0_o *this,
        EventFortificationDetailEntity_o *ent,
        const MethodInfo *method)
{
  EventFortificationWorkManager___c__DisplayClass29_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventFortificationWorkManager_o *_4__this; // x8
  Il2CppObject *eventFortificationWorkItemObj; // x20
  const MethodInfo *v10; // x3
  struct EventFortificationWorkManager_o *v11; // x8
  EventFortificationWorkItem_o *v12; // x20
  const MethodInfo *v13; // x5
  struct EventFortificationWorkManager_o *v14; // x8
  struct EventFortificationWorkManager_o *v15; // x8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct EventFortificationWorkManager_o *v22; // x8
  struct EventFortificationWorkManager_o *v23; // x8
  _QWORD *v24; // x9
  __int64 onClick_low; // x10
  EventFortificationWorkManager_c **v26; // x8

  v4 = this;
  if ( (byte_4BCBABF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___, ent);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v5);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    byte_4BCBABF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_3024F48 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_19;
  v12 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_19;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v11->fields.orgPanel, v10);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_19;
  if ( !ent )
    goto LABEL_19;
  EventFortificationWorkItem__SetServantInfo(
    v12,
    0LL,
    v14->fields.eventId,
    ent->fields.position,
    v4->fields.onClick,
    v13);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v12,
                                                                    0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_19;
  GameObjectExtensions__SetParent_34762136((UnityEngine_GameObject_o *)this, v15->fields.ItemObjRoot, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v12,
                                                                    0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v22 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v22->fields.servantItemList) == 0LL
    || (v23 = this->fields.__4__this,
        v24 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++HIDWORD(this->fields.onClick),
        !v23) )
  {
LABEL_19:
    sub_1C1AE30(this, ent);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v23->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v12,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v26[4] = (EventFortificationWorkManager_c *)v12;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v12, v16, v17, v18, v19, v20, v21);
  }
}