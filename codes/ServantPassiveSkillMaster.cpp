void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBB5E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v7);
    byte_40FBB5E = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    13,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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

  if ( (byte_40FBB5C & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FBB5C = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                          (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_40FBB5D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_40FBB5D = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_40FBB62 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_B16FFC(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_40FBB62 = 1;
  }
  value = 0LL;
  PriorityKey = ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t v26; // w24
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v28; // x22
  bool IsServantEquip; // w25
  __int64 v30; // x2
  BalanceConfig_c *v31; // x0
  __int64 v32; // x22
  ServantPassiveSkillEntity_array *UseEntityList; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  MethodInfo *v39; // x6
  System_Int32_array *v40; // x7
  bool v41; // w8
  BattleServantConfConponent_o *v42; // x25
  ServantPassiveSkillEntity_o **m_Items; // x27
  ServantPassiveSkillEntity_array *v44; // x23
  unsigned __int64 v45; // x28
  unsigned int v46; // w26
  __int64 v47; // x24
  BalanceConfig_c *v48; // x0
  System_Int32_array *v49; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v51; // x10
  System_Int32_array *v52; // x8
  System_String_array *v53; // x8
  __int64 v54; // x10
  int v55; // w9
  System_String_array **v56; // x27
  unsigned int *v57; // x20
  unsigned __int64 v58; // x8
  unsigned int *v59; // x9
  System_Int32_array **v60; // x25
  unsigned int *v61; // x0
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_String_array *v67; // x20
  unsigned __int64 max_length; // x8
  Il2CppClass **v69; // x9
  System_Int32_array **v70; // x25
  Il2CppClass **v71; // x0
  System_Int32_array *v72; // x8
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array *v78; // x8
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  const MethodInfo *v91; // [xsp+8h] [xbp-88h]
  ServantPassiveSkillEntity_o **v93; // [xsp+28h] [xbp-68h]
  System_String_array **titleLista; // [xsp+30h] [xbp-60h]
  bool v95; // [xsp+3Ch] [xbp-54h]

  if ( (byte_40FBB64 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, idList);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B16FFC(&int___TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_40FBB64 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (titleLista = titleList,
        v26 = svtId,
        (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       MasterData_WarQuestSelectionMaster,
                                       svtId,
                                       (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_59:
    sub_B170D4();
  }
  v28 = Entity;
  IsServantEquip = ServantEntity__get_IsServantEquip(Entity, 0LL);
  ServantEntity__getClassSkillInfo(v28, idList, titleLista, explanationList, 0LL);
  v31 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  v32 = sub_B17014(int___TypeInfo, (unsigned int)v31->static_fields->SvtPassiveSkillListMax, v30);
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
  v41 = IsServantEquip;
  v42 = (BattleServantConfConponent_o *)titleLista;
  m_Items = UseEntityList->m_Items;
  v44 = UseEntityList;
  v45 = 0LL;
  v46 = 0;
  v47 = 32LL;
  v95 = v41;
  v93 = UseEntityList->m_Items;
  while ( 1 )
  {
    v48 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v48 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v45 >= v48->static_fields->SvtPassiveSkillListMax )
      break;
    if ( !v44 )
      goto LABEL_59;
    if ( v45 >= v44->max_length )
      goto LABEL_58;
    v48 = (BalanceConfig_c *)m_Items[v45];
    v49 = *idList;
    if ( v48 )
    {
      if ( !v49 )
        goto LABEL_59;
      if ( v46 >= v49->max_length )
        goto LABEL_58;
      v49->m_Items[v46 + 1] = HIDWORD(v48->_1.namespaze);
      if ( !v32 )
        goto LABEL_59;
      klass = v42->klass;
      if ( !v42->klass )
        goto LABEL_59;
      v51 = *explanationList;
      if ( !*explanationList )
        goto LABEL_59;
      if ( v46 >= *(_DWORD *)(v32 + 24) || v46 >= LODWORD(klass->_1.namespaze) || v46 >= v51->max_length )
        goto LABEL_58;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)v48,
        (int32_t *)(v32 + 4LL * (int)v46 + 32),
        (System_String_o **)&klass->_1.byval_arg.data + (int)v46,
        &v51->m_Items[v46],
        0,
        v95,
        v39);
      if ( v45 != v46 )
      {
        v52 = *idList;
        if ( !*idList )
          goto LABEL_59;
        if ( v45 >= v52->max_length )
          goto LABEL_58;
        v52->m_Items[v45 + 1] = 0;
        v53 = (System_String_array *)v42->klass;
        if ( !v42->klass )
          goto LABEL_59;
        goto LABEL_46;
      }
      goto LABEL_50;
    }
    if ( !v49 )
      goto LABEL_59;
    v54 = *(_QWORD *)&v49->max_length;
    if ( v45 >= (unsigned int)v54 )
      goto LABEL_58;
    v55 = v49->m_Items[v45 + 1];
    if ( v55 >= 1 )
    {
      if ( v45 != v46 )
      {
        if ( v46 >= (unsigned int)v54 )
          goto LABEL_58;
        v49->m_Items[v46 + 1] = v55;
        v56 = explanationList;
        v57 = (unsigned int *)v42->klass;
        if ( !v42->klass )
          goto LABEL_59;
        v58 = v57[6];
        if ( v45 >= v58 )
          goto LABEL_58;
        v59 = &v57[2 * v45];
        v60 = (System_Int32_array **)*((_QWORD *)v59 + 4);
        if ( v60 )
        {
          v48 = (BalanceConfig_c *)sub_B170BC(*((_QWORD *)v59 + 4), *(_QWORD *)(*(_QWORD *)v57 + 64LL));
          if ( !v48 )
            goto LABEL_60;
          v58 = *((_QWORD *)v57 + 3);
        }
        if ( v46 >= (unsigned int)v58 )
          goto LABEL_58;
        v61 = &v57[2 * v46];
        *((_QWORD *)v61 + 4) = v60;
        sub_B16F98((BattleServantConfConponent_o *)(v61 + 8), v60, v35, v36, v37, v38, (System_Int32_array *)v39, v40);
        v67 = *v56;
        if ( !*v56 )
          goto LABEL_59;
        max_length = v67->max_length;
        if ( v45 >= max_length )
          goto LABEL_58;
        v69 = &v67->obj.klass + v45;
        v70 = (System_Int32_array **)v69[4];
        if ( v70 )
        {
          v48 = (BalanceConfig_c *)sub_B170BC(v69[4], v67->obj.klass->_1.element_class);
          if ( !v48 )
          {
LABEL_60:
            sub_B170F4(v48);
            sub_B170A0();
          }
          max_length = *(_QWORD *)&v67->max_length;
        }
        if ( v46 >= (unsigned int)max_length )
          goto LABEL_58;
        v71 = &v67->obj.klass + (int)v46;
        v71[4] = (Il2CppClass *)v70;
        sub_B16F98((BattleServantConfConponent_o *)(v71 + 4), v70, v35, v62, v63, v64, v65, v66);
        v72 = *idList;
        if ( !*idList )
          goto LABEL_59;
        v42 = (BattleServantConfConponent_o *)titleLista;
        if ( v45 >= v72->max_length )
        {
LABEL_58:
          sub_B17100(v48, v34, v35);
          sub_B170A0();
        }
        v72->m_Items[v45 + 1] = 0;
        explanationList = v56;
        v53 = *titleLista;
        m_Items = v93;
        if ( !*titleLista )
          goto LABEL_59;
LABEL_46:
        if ( v45 >= v53->max_length )
          goto LABEL_58;
        v53->m_Items[v45] = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)v53 + v47),
          0LL,
          v35,
          v36,
          v37,
          v38,
          (System_Int32_array *)v39,
          v40);
        v78 = *explanationList;
        if ( !*explanationList )
          goto LABEL_59;
        if ( v45 >= v78->max_length )
          goto LABEL_58;
        v78->m_Items[v45] = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)((char *)v78 + v47), 0LL, v35, v73, v74, v75, v76, v77);
      }
LABEL_50:
      ++v46;
    }
    ++v45;
    v47 += 8LL;
  }
  if ( !v46 )
  {
    *idList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)idList, 0LL, v35, v36, v37, v38, (System_Int32_array *)v39, v40);
    v42->klass = 0LL;
    sub_B16F98(v42, 0LL, v79, v80, v81, v82, v83, v84);
    *explanationList = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)explanationList, 0LL, v85, v86, v87, v88, v89, v90);
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
  if ( (byte_40FBB5F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1223/*":"*/, *(_QWORD *)&svtId);
    byte_40FBB5F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43746016(v4, (System_String_o *)StringLiteral_1223/*":"*/, v5, 0LL);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  int32_t v18; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v21; // x10

  if ( (byte_40FBB61 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    sub_B16FFC(&ServantPassiveSkillEntity_TypeInfo, v10);
    byte_40FBB61 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v19,
                                                                      v18,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (ServantPassiveSkillEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == ServantPassiveSkillEntity_TypeInfo
          && Item->fields.missionTargetId == svtId )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
        }
      }
      if ( ++v18 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v17 )
    goto LABEL_16;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
  __int64 v18; // x2
  ServantPassiveSkillEntity_array *v19; // x24
  int i; // w28
  Il2CppClass **v21; // x8
  ServantPassiveSkillEntity_o *v22; // x27
  const MethodInfo *v24; // [xsp+0h] [xbp-60h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v19 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v19->max_length )
      {
        sub_B17100(EntityListFromIdNum, v17, v18);
        sub_B170A0();
      }
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_B170D4();
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v21[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v22;
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
  const MethodInfo *v32; // [xsp+10h] [xbp-70h]

  if ( (byte_40FBB63 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_40FBB63 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_B17014(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v15->static_fields->SvtPassiveSkillListMax,
                                             userId);
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
                  v32);
    if ( !v16 )
      sub_B170D4();
    v28 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_B170BC(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    v29 = v19 - 1;
    if ( v29 >= v16->max_length )
    {
      sub_B17100(UseEntity, v21, v22);
      sub_B170A0();
    }
    i->klass = (BattleServantConfConponent_c *)v28;
    sub_B16F98(i, v28, v22, v23, v24, v25, v26, v27);
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
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *listCache; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v35; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  const MethodInfo *v47; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x22
  __int64 v49; // x9
  System_String_o *PriorityKey; // x0
  System_Xml_XmlQualifiedName_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x24
  System_Xml_Schema_XmlSchemaObject_o *v57; // x2
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  unsigned __int64 v59; // x10
  int32_t *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  ServantPassiveSkillMaster___c_c *v66; // x0
  Il2CppObject *v67; // x21
  Il2CppObject *key; // x22
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x23
  Il2CppObject *v71; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *v79; // x23
  System_Xml_Schema_XmlSchemaObject_o *v80; // x0
  int v81; // w21
  ServantPassiveSkillMaster_o *v83; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v84; // [xsp+18h] [xbp-B8h] BYREF
  int v85[2]; // [xsp+40h] [xbp-90h]
  int v86; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v87; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40FBB60 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Comparison_ServantPassiveSkillEntity___ctor__, v3);
    sub_B16FFC(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v15);
    sub_B16FFC(&System_IDisposable_TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v19);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v25);
    sub_B16FFC(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v26);
    sub_B16FFC(&ServantPassiveSkillEntity_TypeInfo, v27);
    sub_B16FFC(&Method_ServantPassiveSkillMaster___c__preProcess_b__5_0__, v28);
    sub_B16FFC(&ServantPassiveSkillMaster___c_TypeInfo, v29);
    byte_40FBB60 = 1;
  }
  value = 0LL;
  memset(&v87, 0, sizeof(v87));
  v86 = 0;
  listCache = this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)listCache,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v35 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo,
                                                                                        v31,
                                                                                        v32,
                                                                                        v33,
                                                                                        v34);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v35,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v83 = this;
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v44 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_17:
      v45 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
            Enumerator,
            *(_QWORD *)(v45 + 8));
    v48 = (EventMissionProgressRequest_Argument_ProgressData_o *)v46;
    if ( !v46 )
      sub_B170D4();
    v49 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v46 + 300LL) < (unsigned int)v49
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v46 + 200LL) + 8 * v49 - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_B173C8(v46);
LABEL_52:
      sub_B170D4();
    }
    PriorityKey = ServantPassiveSkillMaster__getPriorityKey(
                    (ServantPassiveSkillMaster_o *)v46,
                    *(_DWORD *)(v46 + 16),
                    *(_DWORD *)(v46 + 20),
                    v47);
    if ( !v35 )
      sub_B170D4();
    v51 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v35,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v52, v53, v54, v55);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v56,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      v57 = (System_Xml_Schema_XmlSchemaObject_o *)v56;
      this = v83;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v35,
        v51,
        v57,
        (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v48,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
  }
  v85[0] = 117;
  v86 = 1;
  v58 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      ++v59;
      v60 += 4;
      if ( v59 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_31:
    v61 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  v86 = 0;
  if ( !v35 )
LABEL_57:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v84,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v35,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v87 = v84;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v87,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v66 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v87.fields.current.fields.key;
    v67 = v87.fields.current.fields.value;
    if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v66 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v66->static_fields;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
    if ( !_9__5_0 )
    {
      if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v71 = (Il2CppObject *)static_fields->__9;
      _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                            System_Comparison_ServantPassiveSkillEntity__TypeInfo,
                                                                            v62,
                                                                            v63,
                                                                            v64,
                                                                            v65);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__5_0,
        v71,
        Method_ServantPassiveSkillMaster___c__preProcess_b__5_0__,
        (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
      v72 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v72->__9__5_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__5_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v72->__9__5_0,
        (System_Int32_array **)_9__5_0,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
      this = v83;
    }
    if ( !v67 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v67,
      (System_Comparison_T__o *)_9__5_0,
      (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v79 = this->fields.listCache;
    v80 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v79 )
      sub_B170D4();
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v79,
      (System_Xml_XmlQualifiedName_o *)key,
      v80,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v67,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
  }
  v85[0] = 240;
  v81 = ++v86;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v87,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  if ( v81 && v85[v81 - 1] == 240 )
    v86 = v81 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v35,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7640 & 1) == 0 )
  {
    sub_B16FFC(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_40F7640 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantPassiveSkillMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}