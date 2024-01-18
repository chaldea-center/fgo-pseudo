void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4189BA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v4);
    byte_4189BA2 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v5,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    13,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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

  if ( (byte_4189BA0 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4189BA0 = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_4189BA1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4189BA1 = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  __int64 v8; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4189BA6 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_4189BA6 = 1;
  }
  value = 0LL;
  PriorityKey = ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B2C434(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  __int64 v25; // x1
  int32_t v26; // w24
  ServantEntity_o *v27; // x22
  bool IsServantEquip; // w25
  BalanceConfig_c *v29; // x0
  __int64 v30; // x22
  ServantPassiveSkillEntity_array *UseEntityList; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  MethodInfo *v36; // x6
  System_Int32_array *v37; // x7
  bool v38; // w8
  BattleServantConfConponent_o *v39; // x25
  ServantPassiveSkillEntity_o **m_Items; // x27
  ServantPassiveSkillEntity_array *v41; // x23
  unsigned __int64 v42; // x28
  unsigned int v43; // w26
  __int64 v44; // x24
  System_Int32_array *v45; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v47; // x10
  System_Int32_array *v48; // x8
  System_String_array *v49; // x8
  __int64 v50; // x10
  int v51; // w9
  System_String_array **v52; // x27
  unsigned int *v53; // x20
  unsigned __int64 v54; // x8
  unsigned int *v55; // x9
  System_Int32_array **v56; // x25
  unsigned int *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array *v64; // x20
  unsigned __int64 max_length; // x8
  Il2CppClass **v66; // x9
  System_Int32_array **v67; // x25
  Il2CppClass **v68; // x0
  System_Int32_array *v69; // x8
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array *v76; // x8
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x0
  __int64 v90; // x0
  const MethodInfo *v91; // [xsp+8h] [xbp-88h]
  ServantPassiveSkillEntity_o **v93; // [xsp+28h] [xbp-68h]
  System_String_array **titleLista; // [xsp+30h] [xbp-60h]
  bool v95; // [xsp+3Ch] [xbp-54h]

  if ( (byte_4189BA8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, idList);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B2C35C(&int___TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_4189BA8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (titleLista = titleList,
        v26 = svtId,
        (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_59:
    sub_B2C434(Instance, v25);
  }
  v27 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v27, idList, titleLista, explanationList, 0LL);
  v29 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = sub_B2C374(int___TypeInfo, (unsigned int)v29->static_fields->SvtPassiveSkillListMax);
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    v26,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    v91);
  v38 = IsServantEquip;
  v39 = (BattleServantConfConponent_o *)titleLista;
  m_Items = UseEntityList->m_Items;
  v41 = UseEntityList;
  v42 = 0LL;
  v43 = 0;
  v44 = 32LL;
  v95 = v38;
  v93 = UseEntityList->m_Items;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v42 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      break;
    if ( !v41 )
      goto LABEL_59;
    if ( v42 >= v41->max_length )
      goto LABEL_58;
    Instance = (DataManager_o *)m_Items[v42];
    v45 = *idList;
    if ( Instance )
    {
      if ( !v45 )
        goto LABEL_59;
      if ( v43 >= v45->max_length )
        goto LABEL_58;
      v45->m_Items[v43 + 1] = HIDWORD(Instance->fields.datalist);
      if ( !v30 )
        goto LABEL_59;
      klass = v39->klass;
      if ( !v39->klass )
        goto LABEL_59;
      v47 = *explanationList;
      if ( !*explanationList )
        goto LABEL_59;
      if ( v43 >= *(_DWORD *)(v30 + 24) || v43 >= LODWORD(klass->_1.namespaze) || v43 >= v47->max_length )
        goto LABEL_58;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v30 + 4LL * (int)v43 + 32),
        (System_String_o **)&klass->_1.byval_arg.data + (int)v43,
        &v47->m_Items[v43],
        0,
        v95,
        v36);
      if ( v42 != v43 )
      {
        v48 = *idList;
        if ( !*idList )
          goto LABEL_59;
        if ( v42 >= v48->max_length )
          goto LABEL_58;
        v48->m_Items[v42 + 1] = 0;
        v49 = (System_String_array *)v39->klass;
        if ( !v39->klass )
          goto LABEL_59;
        goto LABEL_46;
      }
      goto LABEL_50;
    }
    if ( !v45 )
      goto LABEL_59;
    v50 = *(_QWORD *)&v45->max_length;
    if ( v42 >= (unsigned int)v50 )
      goto LABEL_58;
    v51 = v45->m_Items[v42 + 1];
    if ( v51 >= 1 )
    {
      if ( v42 != v43 )
      {
        if ( v43 >= (unsigned int)v50 )
          goto LABEL_58;
        v45->m_Items[v43 + 1] = v51;
        v52 = explanationList;
        v53 = (unsigned int *)v39->klass;
        if ( !v39->klass )
          goto LABEL_59;
        v54 = v53[6];
        if ( v42 >= v54 )
          goto LABEL_58;
        v55 = &v53[2 * v42];
        v56 = (System_Int32_array **)*((_QWORD *)v55 + 4);
        if ( v56 )
        {
          Instance = (DataManager_o *)sub_B2C41C(*((_QWORD *)v55 + 4), *(_QWORD *)(*(_QWORD *)v53 + 64LL));
          if ( !Instance )
            goto LABEL_60;
          v54 = *((_QWORD *)v53 + 3);
        }
        if ( v43 >= (unsigned int)v54 )
          goto LABEL_58;
        v57 = &v53[2 * v43];
        *((_QWORD *)v57 + 4) = v56;
        sub_B2C2F8((BattleServantConfConponent_o *)(v57 + 8), v56, v32, v33, v34, v35, (System_Int32_array *)v36, v37);
        v64 = *v52;
        if ( !*v52 )
          goto LABEL_59;
        max_length = v64->max_length;
        if ( v42 >= max_length )
          goto LABEL_58;
        v66 = &v64->obj.klass + v42;
        v67 = (System_Int32_array **)v66[4];
        if ( v67 )
        {
          Instance = (DataManager_o *)sub_B2C41C(v66[4], v64->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_60:
            v90 = sub_B2C454(Instance);
            sub_B2C400(v90, 0LL);
          }
          max_length = *(_QWORD *)&v64->max_length;
        }
        if ( v43 >= (unsigned int)max_length )
          goto LABEL_58;
        v68 = &v64->obj.klass + (int)v43;
        v68[4] = (Il2CppClass *)v67;
        sub_B2C2F8((BattleServantConfConponent_o *)(v68 + 4), v67, v58, v59, v60, v61, v62, v63);
        v69 = *idList;
        if ( !*idList )
          goto LABEL_59;
        v39 = (BattleServantConfConponent_o *)titleLista;
        if ( v42 >= v69->max_length )
        {
LABEL_58:
          v89 = sub_B2C460(Instance);
          sub_B2C400(v89, 0LL);
        }
        v69->m_Items[v42 + 1] = 0;
        explanationList = v52;
        v49 = *titleLista;
        m_Items = v93;
        if ( !*titleLista )
          goto LABEL_59;
LABEL_46:
        if ( v42 >= v49->max_length )
          goto LABEL_58;
        v49->m_Items[v42] = 0LL;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)((char *)v49 + v44),
          0LL,
          v32,
          v33,
          v34,
          v35,
          (System_Int32_array *)v36,
          v37);
        v76 = *explanationList;
        if ( !*explanationList )
          goto LABEL_59;
        if ( v42 >= v76->max_length )
          goto LABEL_58;
        v76->m_Items[v42] = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v76 + v44), 0LL, v70, v71, v72, v73, v74, v75);
      }
LABEL_50:
      ++v43;
    }
    ++v42;
    v44 += 8LL;
  }
  if ( !v43 )
  {
    *idList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)idList, 0LL, v32, v33, v34, v35, (System_Int32_array *)v36, v37);
    v39->klass = 0LL;
    sub_B2C2F8(v39, 0LL, v77, v78, v79, v80, v81, v82);
    *explanationList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)explanationList, 0LL, v83, v84, v85, v86, v87, v88);
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
  if ( (byte_4189BA3 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1225/*":"*/, *(_QWORD *)&svtId);
    byte_4189BA3 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44307816(v4, (System_String_o *)StringLiteral_1225/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  int32_t v14; // w23
  __int64 v15; // x10

  v3 = svtId;
  if ( (byte_4189BA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    sub_B2C35C(&ServantPassiveSkillEntity_TypeInfo, v10);
    byte_4189BA5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v15 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
  __int64 v17; // x1
  ServantPassiveSkillEntity_array *v18; // x24
  int i; // w28
  Il2CppClass **v20; // x8
  ServantPassiveSkillEntity_o *v21; // x27
  __int64 v23; // x0
  const MethodInfo *v24; // [xsp+0h] [xbp-60h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v18 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v18->max_length )
      {
        v23 = sub_B2C460(EntityListFromIdNum);
        sub_B2C400(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantPassiveSkillEntity_o *)v20[4];
      if ( !v21 )
        sub_B2C434(EntityListFromIdNum, v17);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v20[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v21;
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
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x20
  unsigned __int64 v29; // x19
  BalanceConfig_c *v30; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  const MethodInfo *v34; // [xsp+10h] [xbp-70h]

  if ( (byte_4189BA7 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_4189BA7 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_B2C374(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  v17 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v16->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v30->static_fields->SvtPassiveSkillListMax )
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
                  v34);
    if ( !v16 )
      sub_B2C434(UseEntity, v21);
    v28 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_B2C41C(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v33 = sub_B2C454(0LL);
        sub_B2C400(v33, 0LL);
      }
    }
    v29 = v19 - 1;
    if ( v29 >= v16->max_length )
    {
      v32 = sub_B2C460(UseEntity);
      sub_B2C400(v32, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v28;
    sub_B2C2F8(i, v28, v22, v23, v24, v25, v26, v27);
    v17 = v29 + 1;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v39; // x3
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x9
  System_String_o *PriorityKey; // x0
  __int64 v50; // x1
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x24
  System_Xml_Schema_XmlSchemaObject_o *v54; // x2
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  ServantPassiveSkillMaster___c_c *v60; // x0
  Il2CppObject *v61; // x21
  Il2CppObject *key; // x22
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v65; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *v73; // x23
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  __int64 v75; // x1
  int v76; // w21
  ServantPassiveSkillMaster_o *v78; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v79; // [xsp+18h] [xbp-B8h] BYREF
  int v80[2]; // [xsp+40h] [xbp-90h]
  int v81; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v82; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_4189BA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Comparison_ServantPassiveSkillEntity___ctor__, v3);
    sub_B2C35C(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v15);
    sub_B2C35C(&System_IDisposable_TypeInfo, v16);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v19);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v25);
    sub_B2C35C(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v26);
    sub_B2C35C(&ServantPassiveSkillEntity_TypeInfo, v27);
    sub_B2C35C(&Method_ServantPassiveSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B2C35C(&ServantPassiveSkillMaster___c_TypeInfo, v29);
    byte_4189BA4 = 1;
  }
  value = 0LL;
  memset(&v82, 0, sizeof(v82));
  v81 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v78 = this;
  if ( !Enumerator )
    sub_B2C434(0LL, v32);
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
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v33);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v40 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v42 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v41;
        v42 += 4;
        if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v43 = (__int64)&v40->vtable[*v42].method;
    }
    else
    {
LABEL_17:
      v43 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v39);
    }
    v44 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(
            Enumerator,
            *(_QWORD *)(v43 + 8));
    v47 = (EventMissionProgressRequest_Argument_ProgressData_o *)v44;
    if ( !v44 )
      sub_B2C434(0LL, v45);
    v48 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v44 + 300LL) < (unsigned int)v48
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v44 + 200LL) + 8 * v48 - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_B2C728(v44);
LABEL_52:
      sub_B2C434(v60, v59);
    }
    PriorityKey = ServantPassiveSkillMaster__getPriorityKey(
                    (ServantPassiveSkillMaster_o *)v44,
                    *(_DWORD *)(v44 + 16),
                    *(_DWORD *)(v44 + 20),
                    v46);
    if ( !v31 )
      sub_B2C434(PriorityKey, v50);
    v51 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v31,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v53,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      v54 = (System_Xml_Schema_XmlSchemaObject_o *)v53;
      this = v78;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v31,
        v51,
        v54,
        (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B2C434(0LL, v52);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v47,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
  }
  v80[0] = 117;
  v81 = 1;
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_31:
    v58 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v39);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v58 + 8));
  v81 = 0;
  if ( !v31 )
LABEL_57:
    sub_B2C434(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v79,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v31,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v82 = v79;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v82,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v60 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v82.fields.current.fields.key;
    v61 = v82.fields.current.fields.value;
    if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v60 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v60->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v65,
        Method_ServantPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25D8DF8 *)Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
      v66 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v66->__9__5_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__5_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
      this = v78;
    }
    if ( !v61 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v61,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v73 = this->fields.listCache;
    v74 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v61,
                                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v73 )
      sub_B2C434(v74, v75);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v73,
      (System_Xml_XmlQualifiedName_o *)key,
      v74,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v61,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
  }
  v80[0] = 240;
  v76 = ++v81;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v82,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  if ( v76 && v80[v76 - 1] == 240 )
    v81 = v76 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v31,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853FC & 1) == 0 )
  {
    sub_B2C35C(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_41853FC = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, a);
  return a->fields.priority - b->fields.priority;
}