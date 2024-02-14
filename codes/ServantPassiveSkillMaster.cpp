void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42169F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v5);
    byte_42169F4 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                       System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v6,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v6;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    13,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__GetEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42169F2 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_42169F2 = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266A024 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillMaster__TryGetEntity(
        ServantPassiveSkillMaster_o *this,
        ServantPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42169F3 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_42169F3 = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getEntityListFromIdNum(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster_o *v6; // x20
  System_String_o *PriorityKey; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42169F8 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_42169F8 = 1;
  }
  value = 0LL;
  PriorityKey = ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B0D97C(PriorityKey);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
  {
    return (ServantPassiveSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall ServantPassiveSkillMaster__getPassiveSkillInfo(
        ServantPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        const MethodInfo *method)
{
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  DataManager_o *Instance; // x0
  int32_t v25; // w24
  ServantEntity_o *v26; // x22
  bool IsServantEquip; // w25
  BalanceConfig_c *v28; // x0
  __int64 v29; // x22
  ServantPassiveSkillEntity_array *UseEntityList; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  MethodInfo *v35; // x6
  System_Int32_array *v36; // x7
  bool v37; // w8
  BattleServantConfConponent_o *v38; // x25
  ServantPassiveSkillEntity_o **m_Items; // x27
  ServantPassiveSkillEntity_array *v40; // x23
  unsigned __int64 v41; // x28
  unsigned int v42; // w26
  __int64 v43; // x24
  System_Int32_array *v44; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v46; // x10
  System_Int32_array *v47; // x8
  System_String_array *v48; // x8
  __int64 v49; // x10
  int v50; // w9
  System_String_array **v51; // x27
  unsigned int *v52; // x20
  unsigned __int64 v53; // x8
  unsigned int *v54; // x9
  System_Int32_array **v55; // x25
  unsigned int *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array *v63; // x20
  unsigned __int64 max_length; // x8
  Il2CppClass **v65; // x9
  System_Int32_array **v66; // x25
  Il2CppClass **v67; // x0
  System_Int32_array *v68; // x8
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array *v75; // x8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x0
  const MethodInfo *v90; // [xsp+8h] [xbp-88h]
  ServantPassiveSkillEntity_o **v92; // [xsp+28h] [xbp-68h]
  System_String_array **titleLista; // [xsp+30h] [xbp-60h]
  bool v94; // [xsp+3Ch] [xbp-54h]

  if ( (byte_42169FA & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, idList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B0D8A4(&int___TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_42169FA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (titleLista = titleList,
        v25 = svtId,
        (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_59:
    sub_B0D97C(Instance);
  }
  v26 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v26, idList, titleLista, explanationList, 0LL);
  v28 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  v29 = sub_B0D8BC(int___TypeInfo, (unsigned int)v28->static_fields->SvtPassiveSkillListMax);
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    v25,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    v90);
  v37 = IsServantEquip;
  v38 = (BattleServantConfConponent_o *)titleLista;
  m_Items = UseEntityList->m_Items;
  v40 = UseEntityList;
  v41 = 0LL;
  v42 = 0;
  v43 = 32LL;
  v94 = v37;
  v92 = UseEntityList->m_Items;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v41 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      break;
    if ( !v40 )
      goto LABEL_59;
    if ( v41 >= v40->max_length )
      goto LABEL_58;
    Instance = (DataManager_o *)m_Items[v41];
    v44 = *idList;
    if ( Instance )
    {
      if ( !v44 )
        goto LABEL_59;
      if ( v42 >= v44->max_length )
        goto LABEL_58;
      v44->m_Items[v42 + 1] = HIDWORD(Instance->fields.datalist);
      if ( !v29 )
        goto LABEL_59;
      klass = v38->klass;
      if ( !v38->klass )
        goto LABEL_59;
      v46 = *explanationList;
      if ( !*explanationList )
        goto LABEL_59;
      if ( v42 >= *(_DWORD *)(v29 + 24) || v42 >= LODWORD(klass->_1.namespaze) || v42 >= v46->max_length )
        goto LABEL_58;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v29 + 4LL * (int)v42 + 32),
        (System_String_o **)&klass->_1.byval_arg.data + (int)v42,
        &v46->m_Items[v42],
        0,
        v94,
        v35);
      if ( v41 != v42 )
      {
        v47 = *idList;
        if ( !*idList )
          goto LABEL_59;
        if ( v41 >= v47->max_length )
          goto LABEL_58;
        v47->m_Items[v41 + 1] = 0;
        v48 = (System_String_array *)v38->klass;
        if ( !v38->klass )
          goto LABEL_59;
        goto LABEL_46;
      }
      goto LABEL_50;
    }
    if ( !v44 )
      goto LABEL_59;
    v49 = *(_QWORD *)&v44->max_length;
    if ( v41 >= (unsigned int)v49 )
      goto LABEL_58;
    v50 = v44->m_Items[v41 + 1];
    if ( v50 >= 1 )
    {
      if ( v41 != v42 )
      {
        if ( v42 >= (unsigned int)v49 )
          goto LABEL_58;
        v44->m_Items[v42 + 1] = v50;
        v51 = explanationList;
        v52 = (unsigned int *)v38->klass;
        if ( !v38->klass )
          goto LABEL_59;
        v53 = v52[6];
        if ( v41 >= v53 )
          goto LABEL_58;
        v54 = &v52[2 * v41];
        v55 = (System_Int32_array **)*((_QWORD *)v54 + 4);
        if ( v55 )
        {
          Instance = (DataManager_o *)sub_B0D964(*((_QWORD *)v54 + 4), *(_QWORD *)(*(_QWORD *)v52 + 64LL));
          if ( !Instance )
            goto LABEL_60;
          v53 = *((_QWORD *)v52 + 3);
        }
        if ( v42 >= (unsigned int)v53 )
          goto LABEL_58;
        v56 = &v52[2 * v42];
        *((_QWORD *)v56 + 4) = v55;
        sub_B0D840((BattleServantConfConponent_o *)(v56 + 8), v55, v31, v32, v33, v34, (System_Int32_array *)v35, v36);
        v63 = *v51;
        if ( !*v51 )
          goto LABEL_59;
        max_length = v63->max_length;
        if ( v41 >= max_length )
          goto LABEL_58;
        v65 = &v63->obj.klass + v41;
        v66 = (System_Int32_array **)v65[4];
        if ( v66 )
        {
          Instance = (DataManager_o *)sub_B0D964(v65[4], v63->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_60:
            v89 = sub_B0D99C(Instance);
            sub_B0D948(v89, 0LL);
          }
          max_length = *(_QWORD *)&v63->max_length;
        }
        if ( v42 >= (unsigned int)max_length )
          goto LABEL_58;
        v67 = &v63->obj.klass + (int)v42;
        v67[4] = (Il2CppClass *)v66;
        sub_B0D840((BattleServantConfConponent_o *)(v67 + 4), v66, v57, v58, v59, v60, v61, v62);
        v68 = *idList;
        if ( !*idList )
          goto LABEL_59;
        v38 = (BattleServantConfConponent_o *)titleLista;
        if ( v41 >= v68->max_length )
        {
LABEL_58:
          v88 = sub_B0D9A8(Instance);
          sub_B0D948(v88, 0LL);
        }
        v68->m_Items[v41 + 1] = 0;
        explanationList = v51;
        v48 = *titleLista;
        m_Items = v92;
        if ( !*titleLista )
          goto LABEL_59;
LABEL_46:
        if ( v41 >= v48->max_length )
          goto LABEL_58;
        v48->m_Items[v41] = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)((char *)v48 + v43),
          0LL,
          v31,
          v32,
          v33,
          v34,
          (System_Int32_array *)v35,
          v36);
        v75 = *explanationList;
        if ( !*explanationList )
          goto LABEL_59;
        if ( v41 >= v75->max_length )
          goto LABEL_58;
        v75->m_Items[v41] = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)((char *)v75 + v43), 0LL, v69, v70, v71, v72, v73, v74);
      }
LABEL_50:
      ++v42;
    }
    ++v41;
    v43 += 8LL;
  }
  if ( !v42 )
  {
    *idList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)idList, 0LL, v31, v32, v33, v34, (System_Int32_array *)v35, v36);
    v38->klass = 0LL;
    sub_B0D840(v38, 0LL, v76, v77, v78, v79, v80, v81);
    *explanationList = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)explanationList, 0LL, v82, v83, v84, v85, v86, v87);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillMaster__getPriorityKey(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = svtId;
  v7 = num;
  if ( (byte_42169F5 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1232/*":"*/, *(_QWORD *)&svtId);
    byte_42169F5 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43852188(v4, (System_String_o *)StringLiteral_1232/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_42169F7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    sub_B0D8A4(&ServantPassiveSkillEntity_TypeInfo, v10);
    byte_42169F7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
        }
      }
      if ( ++v16 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v15 )
    goto LABEL_16;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
}


ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__getUseEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *EntityListFromIdNum; // x0
  ServantPassiveSkillEntity_array *v17; // x24
  int i; // w28
  Il2CppClass **v19; // x8
  ServantPassiveSkillEntity_o *v20; // x27
  __int64 v22; // x0
  const MethodInfo *v23; // [xsp+0h] [xbp-60h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v17 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v17->max_length )
      {
        v22 = sub_B0D9A8(EntityListFromIdNum);
        sub_B0D948(v22, 0LL);
      }
      v19 = &v17->obj.klass + i;
      v20 = (ServantPassiveSkillEntity_o *)v19[4];
      if ( !v20 )
        sub_B0D97C(EntityListFromIdNum);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v19[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 v23);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v20;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getUseEntityList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        const MethodInfo *method)
{
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  ServantPassiveSkillEntity_array *v16; // x27
  signed __int64 v17; // x19
  BattleServantConfConponent_o *i; // x22
  signed __int64 v19; // x19
  ServantPassiveSkillEntity_o *UseEntity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x20
  unsigned __int64 v28; // x19
  BalanceConfig_c *v29; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  const MethodInfo *v33; // [xsp+10h] [xbp-70h]

  if ( (byte_42169F9 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B0D8A4(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_42169F9 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_B0D8BC(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  v17 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v16->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v29->static_fields->SvtPassiveSkillListMax )
      break;
    v19 = v17 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  v19,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  v33);
    if ( !v16 )
      sub_B0D97C(UseEntity);
    v27 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_B0D964(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_B0D99C(0LL);
        sub_B0D948(v32, 0LL);
      }
    }
    v28 = v19 - 1;
    if ( v28 >= v16->max_length )
    {
      v31 = sub_B0D9A8(UseEntity);
      sub_B0D948(v31, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v27;
    sub_B0D840(i, v27, v21, v22, v23, v24, v25, v26);
    v17 = v28 + 1;
  }
  return v16;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v33; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x0
  const MethodInfo *v44; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x22
  __int64 v46; // x9
  System_String_o *PriorityKey; // x0
  System_Xml_XmlQualifiedName_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x24
  System_Xml_Schema_XmlSchemaObject_o *v52; // x2
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  ServantPassiveSkillMaster___c_c *v59; // x0
  Il2CppObject *v60; // x21
  Il2CppObject *key; // x22
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v64; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *v72; // x23
  System_Xml_Schema_XmlSchemaObject_o *v73; // x0
  int v74; // w21
  ServantPassiveSkillMaster_o *v76; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v77; // [xsp+18h] [xbp-B8h] BYREF
  int v78[2]; // [xsp+40h] [xbp-90h]
  int v79; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v80; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42169F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Comparison_ServantPassiveSkillEntity___ctor__, v3);
    sub_B0D8A4(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v11);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v15);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v19);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v25);
    sub_B0D8A4(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v26);
    sub_B0D8A4(&ServantPassiveSkillEntity_TypeInfo, v27);
    sub_B0D8A4(&Method_ServantPassiveSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B0D8A4(&ServantPassiveSkillMaster___c_TypeInfo, v29);
    byte_42169F6 = 1;
  }
  value = 0LL;
  memset(&v80, 0, sizeof(v80));
  v79 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v33 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v33,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v76 = this;
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v39 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v41 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_17:
      v42 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(
            Enumerator,
            *(_QWORD *)(v42 + 8));
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)v43;
    if ( !v43 )
      sub_B0D97C(0LL);
    v46 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v43 + 300LL) < (unsigned int)v46
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v43 + 200LL) + 8 * v46 - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_B0DC70(v43);
LABEL_52:
      sub_B0D97C(v59);
    }
    PriorityKey = ServantPassiveSkillMaster__getPriorityKey(
                    (ServantPassiveSkillMaster_o *)v43,
                    *(_DWORD *)(v43 + 16),
                    *(_DWORD *)(v43 + 20),
                    v44);
    if ( !v33 )
      sub_B0D97C(PriorityKey);
    v48 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v33,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v49, v50);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v51,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v51;
      v52 = (System_Xml_Schema_XmlSchemaObject_o *)v51;
      this = v76;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v33,
        v48,
        v52,
        (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v45,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
  }
  v78[0] = 117;
  v79 = 1;
  v53 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = &v53->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      ++v54;
      v55 += 4;
      if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v56 = (__int64)&v53->vtable[*v55].method;
  }
  else
  {
LABEL_31:
    v56 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v56 + 8));
  v79 = 0;
  if ( !v33 )
LABEL_57:
    sub_B0D97C(listCache);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v77,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v33,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v80 = v77;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v80,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v59 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v80.fields.current.fields.key;
    v60 = v80.fields.current.fields.value;
    if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v59 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                            System_Comparison_ServantPassiveSkillEntity__TypeInfo,
                                                                            v57,
                                                                            v58);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v64,
        Method_ServantPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_2412E90 *)Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
      v65 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v65->__9__5_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__5_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v65->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      this = v76;
    }
    if ( !v60 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v60,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v72 = this->fields.listCache;
    v73 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v60,
                                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v72 )
      sub_B0D97C(v73);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v72,
      (System_Xml_XmlQualifiedName_o *)key,
      v73,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v60,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
  }
  v78[0] = 240;
  v74 = ++v79;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v80,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  if ( v74 && v78[v74 - 1] == 240 )
    v79 = v74 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v33,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212243 & 1) == 0 )
  {
    sub_B0D8A4(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_4212243 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantPassiveSkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantPassiveSkillMaster___c___ctor(ServantPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__5_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}