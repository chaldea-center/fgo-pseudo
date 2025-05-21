void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B48DB2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1337/*"1B2FA5"*/, method);
    sub_1BDB878(&StringLiteral_1331/*"11814B"*/, v5);
    sub_1BDB878(&StringLiteral_1860/*"A51B1B"*/, v6);
    byte_4B48DB2 = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_BEB430;
  v7 = StringLiteral_1860/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1860/*"A51B1B"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.colorCodeMilitsry, v7, v2, v3);
  v8 = StringLiteral_1337/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1337/*"1B2FA5"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.colorCodeInternal, v8, v9, v10);
  v11 = StringLiteral_1331/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1331/*"11814B"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.colorCodeFarmming, v11, v12, v13);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_object__o *v22; // x21
  const MethodInfo *v23; // x1

  if ( (byte_4B48DAA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_EventFortificationDetailEntity__TypeInfo, eventFortificationDetailEntities);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v9);
    sub_1BDB878(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v10);
    sub_1BDB878(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v11);
    byte_4B48DAA = 1;
  }
  v12 = sub_1BDBAC4(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = onClick;
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)onClick, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantItemList, (int32_t)v19, v20, v21);
  v22 = (System_Action_object__o *)sub_1BDBAC4(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0LL);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1BDBAD4(v13, v14);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v22,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v23);
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

  if ( (byte_4B48DAC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v5);
    byte_4B48DAC = 1;
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
                                                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
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
    sub_1BDBAD4(result, *(_QWORD *)&index);
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

  if ( (byte_4B48DAE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, userServantEntity);
    sub_1BDB878(&Method_EventFortificationWorkManager_OnClickItem__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v11);
    byte_4B48DAE = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1BDBAD4(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v14,
                                                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
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
    v16 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
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
  __int64 v27; // x2
  struct SetSvtInfo_array *setSvtInfos; // x27
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x22
  unsigned int v31; // w20
  SetSvtInfo_o *v32; // x25
  UserServantEntity_o *v33; // x23
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  Il2CppObject *v38; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v39; // x0
  __int64 v40; // x1
  Il2CppObject v41; // q0
  Il2CppObject *v42; // x24
  int32_t svtId; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // kr00_16
  EventFortificationSvtEntity_o *v45; // x8
  Il2CppObject *v46; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // kr10_16
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  Il2CppObject *v50; // x0
  __int64 v51; // x1
  Il2CppObject *v52; // x24
  UserServantEntity_o *v53; // x23
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t iconLimitCount; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // kr20_16
  Il2CppObject *v58; // x8
  __int64 v59; // x23
  __int64 v60; // x1
  NetworkManager_c *v61; // x0
  int64_t userIdNumber; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v63; // x0
  __int64 v64; // x1
  __int128 v65; // q0
  Il2CppObject *v66; // x24
  int32_t v67; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // kr30_16
  Il2CppObject *v69; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // kr40_16
  Il2CppObject *v71; // x23
  int32_t eventId; // w24
  int32_t position; // w25
  System_Action_int__o *v74; // x26
  const MethodInfo *v75; // x5
  const MethodInfo *v76; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v77; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v79; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v80; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B48DAD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v12);
    sub_1BDB878(&Method_EventFortificationWorkManager_OnClickItem__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v14);
    sub_1BDB878(&NetworkManager_TypeInfo, v15);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BDB878(&UserServantEntity_TypeInfo, v19);
    byte_4B48DAD = 1;
  }
  entity = 0LL;
  memset(&v81, 0, sizeof(v81));
  v79 = 0LL;
  v80 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v21);
    byte_4B3ED56 = 1;
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_93:
    sub_1BDBAD4(Instance, v21);
  }
  v24 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v81.fields._list = *(_OWORD *)&v78.fields.currentCryptoKey;
  v81.fields._current = (Il2CppObject *)v78.fields.fakeValue;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v25 )
      break;
    if ( !entity )
      sub_1BDBAD4(v25, v26);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1BDBAD4(v25, v26);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v81.fields._current;
      v31 = 0;
LABEL_23:
      if ( v31 >= max_length )
        sub_1BDBADC(v25, v26, v27);
      v32 = setSvtInfos->m_Items[v31];
      if ( !v32 )
        sub_1BDBAD4(v25, v26);
      if ( !current )
        sub_1BDBAD4(v25, v26);
      if ( v32->fields.position != current->fields.position )
        goto LABEL_69;
      v33 = (UserServantEntity_o *)sub_1BDBAC4(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v33, 0LL);
      v80 = (Il2CppObject *)v33;
      if ( v32->fields.type )
      {
        v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v34 )
          sub_1BDBAD4(0LL, v35);
        v36 = DataManager__GetMasterData_object_(
                (DataManager_o *)v34,
                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1BDBAD4(v36, v37);
        if ( !v36 )
          sub_1BDBAD4(0LL, v37);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v36,
               &v79,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v32->fields.position,
               0LL) )
        {
          v38 = v80;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v77, 0LL, 0LL);
          v78 = v77;
          if ( !v38 )
            sub_1BDBAD4(v39, v40);
          v41 = *(Il2CppObject *)&v78.fields.fakeValue;
          v38[3] = *(Il2CppObject *)&v78.fields.currentCryptoKey;
          v38[4] = v41;
          v42 = v80;
          svtId = v32->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v42 )
            sub_1BDBAD4(*(_QWORD *)&v44.fields.currentCryptoKey, *(_QWORD *)&v44.fields.fakeValue);
          v42[5] = (Il2CppObject)v44;
          v45 = v79;
          if ( !v79 )
            sub_1BDBAD4(*(_QWORD *)&v44.fields.currentCryptoKey, *(_QWORD *)&v44.fields.fakeValue);
          v46 = v80;
          if ( !v80 )
            sub_1BDBAD4(*(_QWORD *)&v44.fields.currentCryptoKey, *(_QWORD *)&v44.fields.fakeValue);
          LODWORD(v80[16].klass) = v79->fields.lv;
          v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v45->fields.limitCount, 0LL);
          v46[6] = (Il2CppObject)v47;
          if ( !v80 )
            sub_1BDBAD4(*(_QWORD *)&v47.fields.currentCryptoKey, *(_QWORD *)&v47.fields.fakeValue);
          LODWORD(v80[18].monitor) = 0;
        }
      }
      else
      {
        v48 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v48 )
          sub_1BDBAD4(0LL, v49);
        v50 = DataManager__GetMasterData_object_(
                (DataManager_o *)v48,
                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v50 )
          sub_1BDBAD4(0LL, v51);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v50,
          &v80,
          v32->fields.userSvtId,
          (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v24 || !EventEntity__IsEventPeriod(v24, 0LL, 0LL) )
        {
          v52 = v80;
          if ( v80 )
          {
            v53 = (UserServantEntity_o *)sub_1BDBAC4(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_42095292(v53, (UserServantEntity_o *)v52, 0LL);
            v80 = (Il2CppObject *)v53;
            if ( !v53 )
              sub_1BDBAD4(v54, v55);
            v53->fields.lv = v32->fields.lv;
            iconLimitCount = v32->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v53->fields.iconLimitCount = v57;
            v58 = v80;
            if ( !v80 )
              sub_1BDBAD4(*(_QWORD *)&v57.fields.currentCryptoKey, *(_QWORD *)&v57.fields.fakeValue);
          }
          else
          {
            if ( !v32->fields.svtId )
              goto LABEL_68;
            v59 = sub_1BDBAC4(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v59, 0LL);
            v80 = (Il2CppObject *)v59;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4B3ED56 )
            {
              sub_1BDB878(&NetworkManager_TypeInfo, v60);
              byte_4B3ED56 = 1;
            }
            v61 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v61 = NetworkManager_TypeInfo;
            }
            userIdNumber = v61->static_fields->userIdNumber;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v77, userIdNumber, 0LL);
            v78 = v77;
            if ( !v59 )
              sub_1BDBAD4(v63, v64);
            v65 = *(_OWORD *)&v78.fields.fakeValue;
            *(_OWORD *)(v59 + 48) = *(_OWORD *)&v78.fields.currentCryptoKey;
            *(_OWORD *)(v59 + 64) = v65;
            v66 = v80;
            v67 = v32->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v67, 0LL);
            if ( !v66 )
              sub_1BDBAD4(*(_QWORD *)&v68.fields.currentCryptoKey, *(_QWORD *)&v68.fields.fakeValue);
            v66[5] = (Il2CppObject)v68;
            v69 = v80;
            if ( !v80 )
              sub_1BDBAD4(*(_QWORD *)&v68.fields.currentCryptoKey, *(_QWORD *)&v68.fields.fakeValue);
            LODWORD(v80[16].klass) = v32->fields.lv;
            v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v32->fields.iconLimitCount, 0LL);
            v69[10] = (Il2CppObject)v70;
            v58 = v80;
            if ( !v80 )
              sub_1BDBAD4(*(_QWORD *)&v70.fields.currentCryptoKey, *(_QWORD *)&v70.fields.fakeValue);
          }
          LODWORD(v58[18].monitor) = v32->fields.exceedCount;
        }
      }
LABEL_68:
      v71 = v80;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v74 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
      System_Action_int____ctor(v74, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v71, eventId, position, v74, v75);
LABEL_69:
      max_length = setSvtInfos->max_length;
      if ( (int)++v31 >= max_length )
        continue;
      goto LABEL_23;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v76);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4B48DAB & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_EventFortificationWorkItem___, *(_QWORD *)&index);
    byte_4B48DAB = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_2F82FCC *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
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

  if ( (byte_4B48DB0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v3);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v4);
    byte_4B48DB0 = 1;
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
    sub_1BDBAD4(itemIcon, v7);
  }
  v8 = this->fields.orgPanel;
  if ( !v8 )
    goto LABEL_12;
  v8->fields.isTouchEnabled = 0;
  v9 = this->fields.itemIcon;
  v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
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

  if ( (byte_4B48DB1 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v4);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_6509/*"FORTIFICATION_POINT_INFO"*/, v9);
    byte_4B48DB1 = 1;
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
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v13 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v32.fields._current )
        sub_1BDBAD4(0LL, v14);
      v13 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v32.fields._current, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v17 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6509/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint, v19, v20, v21);
    v33 = maxFortificationPoint;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v23, v24, v25);
    v31 = v13;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v27, v28, v29);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_62613620(
                                                                     v18,
                                                                     v22,
                                                                     v26,
                                                                     v30,
                                                                     0LL);
    if ( !v17 )
LABEL_18:
      sub_1BDBAD4(servantItemList, v11);
    UILabel__set_text(v17, (System_String_o *)servantItemList, 0LL);
  }
}


void __fastcall EventFortificationWorkManager__SetServantFortificationWork(
        EventFortificationWorkManager_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        int32_t eventId,
        System_Action_EventFortificationWorkItem__o *onClick,
        FortificationOrganizationPanelComponent_o *orgPanel,
        UIAtlas_o *terminalAtlas,
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v40; // x23
  System_Action_int__o *v41; // x24
  const MethodInfo *v42; // x3
  __int64 v43; // x2
  DataManager_o *v44; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v46; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v48; // x8
  System_String_o **v49; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v52; // s0
  UnityEngine_Object_o *v53; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  UISprite_o *v58; // x22
  Il2CppObject *v59; // x23
  Il2CppObject *v60; // x0
  System_String_o *v61; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  UISprite_o *v67; // x22
  Il2CppObject *v68; // x23
  Il2CppObject *v69; // x0
  System_String_o *v70; // x23
  int32_t size; // w10
  int32_t v72; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v75; // x22
  const MethodInfo *v76; // x6
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v78; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v80; // x1
  UISprite_o *v81; // x21
  int32_t v82; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B48DA9 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, eventFortificationEntity);
    sub_1BDB878(&AtlasManager_TypeInfo, v13);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v16);
    sub_1BDB878(&Method_EventFortificationWorkManager_OnClickItem__, v17);
    sub_1BDB878(&int_TypeInfo, v18);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v19);
    sub_1BDB878(&NetworkManager_TypeInfo, v20);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v21);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BDB878(&StringLiteral_4990/*"D2"*/, v23);
    sub_1BDB878(&StringLiteral_23637/*"spot_info_gauge_l"*/, v24);
    sub_1BDB878(&StringLiteral_23635/*"spot_info_gauge_base"*/, v25);
    sub_1BDB878(&StringLiteral_20216/*"icon_event_{0}{1}"*/, v26);
    sub_1BDB878(&StringLiteral_19226/*"event_organizationbg_{0}{1}"*/, v27);
    sub_1BDB878(&StringLiteral_1/*""*/, v28);
    sub_1BDB878(&StringLiteral_23639/*"spot_info_window"*/, v29);
    sub_1BDB878(&StringLiteral_20601/*"img_terminal_itembg"*/, v30);
    byte_4B48DA9 = 1;
  }
  entities = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.eventFortificationEntity,
    (int32_t)eventFortificationEntity,
    eventId,
    (const MethodInfo *)onClick);
  this->fields.onClick = onClick;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)onClick, v32, v33);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.orgPanel, (int32_t)orgPanel, v34, v35);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.terminalAtlas, (int32_t)terminalAtlas, v36, v37);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_104;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v40 = entities;
  v41 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v41, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
  EventFortificationWorkManager__CreateItem(this, v40, v41, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_104;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0LL);
  if ( !Instance )
    goto LABEL_104;
  v44 = Instance;
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
  if ( !LODWORD(v44->fields.m_CancellationTokenSource) )
    goto LABEL_105;
  v46 = *(int32_t **)&v44->fields._DispLog;
  if ( !v46 )
    goto LABEL_104;
  Instance = (DataManager_o *)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_104;
  ItemIconComponent__SetGift_39935088((ItemIconComponent_o *)Instance, v46[5], v46[6], v46[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( LODWORD(v44->fields.m_CancellationTokenSource) )
    {
      v48 = *(_QWORD *)&v44->fields._DispLog;
      if ( !v48 )
        goto LABEL_104;
      if ( *(_DWORD *)(v48 + 20) != 1 )
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
        v49 = (System_String_o **)&StringLiteral_20601/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (DataManager_o *)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_104;
        v49 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v49, 0LL);
      goto LABEL_34;
    }
LABEL_105:
    sub_1BDBADC(Instance, v39, v43);
  }
LABEL_34:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_104;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v39);
    byte_4B3ED56 = 1;
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
      v52 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_55;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v53 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v53, 0LL, 0LL) )
    {
      Instance = (DataManager_o *)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_104;
      v52 = 0.0;
LABEL_55:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v52, 0LL);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0LL, 0LL) )
  {
    v58 = this->fields.workTypeIcon;
    v82 = eventId;
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v55, v56, v57);
    v60 = (Il2CppObject *)System_Int32__ToString_64087256(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4990/*"D2"*/,
                            0LL);
    v61 = System_String__Format_62613552((System_String_o *)StringLiteral_20216/*"icon_event_{0}{1}"*/, v59, v60, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39626228(eventId, v58, v61, 0LL);
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
  EventFortificationWorkManager__SetPointText(this, v39);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v67 = this->fields.bgSprite;
    v82 = eventId;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v64, v65, v66);
    v69 = (Il2CppObject *)System_Int32__ToString_64087256(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4990/*"D2"*/,
                            0LL);
    v70 = System_String__Format_62613552((System_String_o *)StringLiteral_19226/*"event_organizationbg_{0}{1}"*/, v68, v69, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (DataManager_o *)AtlasManager__SetEventUI_39626228(eventId, v67, v70, 0LL);
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
      v72 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v72;
      }
      else
      {
        if ( !Instance )
          goto LABEL_104;
        bgSpriteWidth = v72 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_90;
  v75 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39626228(eventId, v75, (System_String_o *)StringLiteral_23639/*"spot_info_window"*/, 0LL);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          v76) )
    goto LABEL_90;
  Instance = (DataManager_o *)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_104:
    sub_1BDBAD4(Instance, v39);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0LL);
LABEL_90:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v78 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39626228(eventId, v78, (System_String_o *)StringLiteral_23637/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v81 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39626228(eventId, v81, (System_String_o *)StringLiteral_23635/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v80);
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

  if ( (byte_4B48DAF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48DAF = 1;
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
          if ( !byte_4B3E911 )
          {
            gameObject = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v7);
            byte_4B3E911 = 1;
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
            sub_1BDBAD4(gameObject, v7);
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
    sub_1BDBAD4(this, method);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct EventFortificationWorkManager_o *v18; // x8
  struct EventFortificationWorkManager_o *v19; // x8
  _QWORD *v20; // x9
  __int64 onClick_low; // x10
  EventFortificationWorkManager_c **v22; // x8

  v4 = this;
  if ( (byte_4B48DB3 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___, ent);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B48DB3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
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
  GameObjectExtensions__SetParent_35216820((UnityEngine_GameObject_o *)this, v15->fields.ItemObjRoot, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v12,
                                                                    0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v18 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v18->fields.servantItemList) == 0LL
    || (v19 = this->fields.__4__this,
        v20 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++HIDWORD(this->fields.onClick),
        !v19) )
  {
LABEL_19:
    sub_1BDBAD4(this, ent);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v19->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v12,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v22[4] = (EventFortificationWorkManager_c *)v12;
    sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
  }
}