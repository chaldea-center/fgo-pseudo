void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42EAA0E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v8, v9, v10);
    byte_42EAA0E = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listCache,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    13,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *__fastcall ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x19
  ServantPassiveSkillMaster___c_c *v19; // x8
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__8_0; // x20
  Il2CppObject *v22; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42EAA12 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__, v12, v13, v14);
    sub_B5D5C4(&ServantPassiveSkillMaster___c_TypeInfo, v15, v16, v17);
    byte_42EAA12 = 1;
  }
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            this,
                                                                            svtId,
                                                                            method);
  v19 = ServantPassiveSkillMaster___c_TypeInfo;
  if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v19 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__8_0,
      v22,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
    v23 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    v23->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  ServantSkillList,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_42EAA0C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      svtId,
      num,
      *(_QWORD *)&priority);
    byte_42EAA0C = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23FB260 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_42EAA0D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      svtId,
      *(_QWORD *)&num);
    byte_42EAA0D = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


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
  if ( (byte_42EAA13 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            svtId,
                                            num,
                                            method);
    byte_42EAA13 = 1;
  }
  value = 0LL;
  PriorityKey = ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B5D69C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  System_String_array **v17; // x20
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  int32_t v34; // w24
  ServantEntity_o *v35; // x22
  bool IsServantEquip; // w25
  BalanceConfig_c *v37; // x0
  __int64 v38; // x22
  ServantPassiveSkillEntity_array *UseEntityList; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  MethodInfo *v44; // x6
  System_Int32_array *v45; // x7
  bool v46; // w8
  BattleServantConfConponent_o *v47; // x25
  ServantPassiveSkillEntity_o **m_Items; // x27
  ServantPassiveSkillEntity_array *v49; // x23
  unsigned __int64 v50; // x28
  unsigned int v51; // w26
  __int64 v52; // x24
  System_Int32_array *v53; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v55; // x10
  System_Int32_array *v56; // x8
  System_String_array *v57; // x8
  __int64 v58; // x10
  int v59; // w9
  unsigned int **v60; // x27
  unsigned int *v61; // x20
  unsigned __int64 v62; // x8
  unsigned int *v63; // x9
  System_Int32_array **v64; // x25
  unsigned int *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  unsigned int *v72; // x20
  unsigned __int64 v73; // x8
  unsigned int *v74; // x9
  System_Int32_array **v75; // x25
  unsigned int *v76; // x0
  System_Int32_array *v77; // x8
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array *v84; // x8
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  __int64 v97; // x0
  __int64 v98; // x0
  const MethodInfo *v99; // [xsp+8h] [xbp-88h]
  ServantPassiveSkillEntity_o **v101; // [xsp+28h] [xbp-68h]
  System_String_array **titleLista; // [xsp+30h] [xbp-60h]
  bool v103; // [xsp+3Ch] [xbp-54h]

  v17 = explanationList;
  if ( (byte_42EAA15 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)idList, (_DWORD)titleList, explanationList);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&int___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    byte_42EAA15 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (titleLista = titleList,
        v34 = svtId,
        (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_59:
    sub_B5D69C(Instance, v33);
  }
  v35 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v35, idList, titleLista, v17, 0LL);
  v37 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  v38 = sub_B5D5DC(int___TypeInfo, (unsigned int)v37->static_fields->SvtPassiveSkillListMax);
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    v34,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    v99);
  v46 = IsServantEquip;
  v47 = (BattleServantConfConponent_o *)titleLista;
  m_Items = UseEntityList->m_Items;
  v49 = UseEntityList;
  v50 = 0LL;
  v51 = 0;
  v52 = 32LL;
  v103 = v46;
  v101 = UseEntityList->m_Items;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v50 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      break;
    if ( !v49 )
      goto LABEL_59;
    if ( v50 >= v49->max_length )
      goto LABEL_58;
    Instance = (DataManager_o *)m_Items[v50];
    v53 = *idList;
    if ( Instance )
    {
      if ( !v53 )
        goto LABEL_59;
      if ( v51 >= v53->max_length )
        goto LABEL_58;
      v53->m_Items[v51 + 1] = HIDWORD(Instance->fields.datalist);
      if ( !v38 )
        goto LABEL_59;
      klass = v47->klass;
      if ( !v47->klass )
        goto LABEL_59;
      v55 = *v17;
      if ( !*v17 )
        goto LABEL_59;
      if ( v51 >= *(_DWORD *)(v38 + 24) || v51 >= LODWORD(klass->_1.namespaze) || v51 >= v55->max_length )
        goto LABEL_58;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v38 + 4LL * (int)v51 + 32),
        (System_String_o **)&klass->_1.byval_arg.data + (int)v51,
        &v55->m_Items[v51],
        0,
        v103,
        v44);
      if ( v50 != v51 )
      {
        v56 = *idList;
        if ( !*idList )
          goto LABEL_59;
        if ( v50 >= v56->max_length )
          goto LABEL_58;
        v56->m_Items[v50 + 1] = 0;
        v57 = (System_String_array *)v47->klass;
        if ( !v47->klass )
          goto LABEL_59;
        goto LABEL_46;
      }
      goto LABEL_50;
    }
    if ( !v53 )
      goto LABEL_59;
    v58 = *(_QWORD *)&v53->max_length;
    if ( v50 >= (unsigned int)v58 )
      goto LABEL_58;
    v59 = v53->m_Items[v50 + 1];
    if ( v59 >= 1 )
    {
      if ( v50 != v51 )
      {
        if ( v51 >= (unsigned int)v58 )
          goto LABEL_58;
        v53->m_Items[v51 + 1] = v59;
        v60 = (unsigned int **)v17;
        v61 = (unsigned int *)v47->klass;
        if ( !v47->klass )
          goto LABEL_59;
        v62 = v61[6];
        if ( v50 >= v62 )
          goto LABEL_58;
        v63 = &v61[2 * v50];
        v64 = (System_Int32_array **)*((_QWORD *)v63 + 4);
        if ( v64 )
        {
          Instance = (DataManager_o *)sub_B5D684(*((_QWORD *)v63 + 4), *(_QWORD *)(*(_QWORD *)v61 + 64LL));
          if ( !Instance )
            goto LABEL_60;
          v62 = *((_QWORD *)v61 + 3);
        }
        if ( v51 >= (unsigned int)v62 )
          goto LABEL_58;
        v65 = &v61[2 * v51];
        *((_QWORD *)v65 + 4) = v64;
        sub_B5D560((BattleServantConfConponent_o *)(v65 + 8), v64, v40, v41, v42, v43, (System_Int32_array *)v44, v45);
        v72 = *v60;
        if ( !*v60 )
          goto LABEL_59;
        v73 = v72[6];
        if ( v50 >= v73 )
          goto LABEL_58;
        v74 = &v72[2 * v50];
        v75 = (System_Int32_array **)*((_QWORD *)v74 + 4);
        if ( v75 )
        {
          Instance = (DataManager_o *)sub_B5D684(*((_QWORD *)v74 + 4), *(_QWORD *)(*(_QWORD *)v72 + 64LL));
          if ( !Instance )
          {
LABEL_60:
            v98 = sub_B5D6BC(Instance);
            sub_B5D668(v98, 0LL);
          }
          v73 = *((_QWORD *)v72 + 3);
        }
        if ( v51 >= (unsigned int)v73 )
          goto LABEL_58;
        v76 = &v72[2 * v51];
        *((_QWORD *)v76 + 4) = v75;
        sub_B5D560((BattleServantConfConponent_o *)(v76 + 8), v75, v66, v67, v68, v69, v70, v71);
        v77 = *idList;
        if ( !*idList )
          goto LABEL_59;
        v47 = (BattleServantConfConponent_o *)titleLista;
        if ( v50 >= v77->max_length )
        {
LABEL_58:
          v97 = sub_B5D6C8(Instance);
          sub_B5D668(v97, 0LL);
        }
        v77->m_Items[v50 + 1] = 0;
        v17 = (System_String_array **)v60;
        v57 = *titleLista;
        m_Items = v101;
        if ( !*titleLista )
          goto LABEL_59;
LABEL_46:
        if ( v50 >= v57->max_length )
          goto LABEL_58;
        v57->m_Items[v50] = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)((char *)v57 + v52),
          0LL,
          v40,
          v41,
          v42,
          v43,
          (System_Int32_array *)v44,
          v45);
        v84 = *v17;
        if ( !*v17 )
          goto LABEL_59;
        if ( v50 >= v84->max_length )
          goto LABEL_58;
        v84->m_Items[v50] = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)((char *)v84 + v52), 0LL, v78, v79, v80, v81, v82, v83);
      }
LABEL_50:
      ++v51;
    }
    ++v50;
    v52 += 8LL;
  }
  if ( !v51 )
  {
    *idList = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)idList, 0LL, v40, v41, v42, v43, (System_Int32_array *)v44, v45);
    v47->klass = 0LL;
    sub_B5D560(v47, 0LL, v85, v86, v87, v88, v89, v90);
    *v17 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)v17, 0LL, v91, v92, v93, v94, v95, v96);
  }
}


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
  if ( (byte_42EAA0F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1245/*":"*/, svtId, num, method);
    byte_42EAA0F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44580072(v4, (System_String_o *)StringLiteral_1245/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  int32_t v27; // w23
  __int64 v28; // x10

  v4 = svtId;
  if ( (byte_42EAA11 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantPassiveSkillEntity_TypeInfo, v21, v22, v23);
    byte_42EAA11 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v28 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v4 )
        {
          if ( !v26 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v26 )
    goto LABEL_16;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        v23 = sub_B5D6C8(EntityListFromIdNum);
        sub_B5D668(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantPassiveSkillEntity_o *)v20[4];
      if ( !v21 )
        sub_B5D69C(EntityListFromIdNum, v17);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  ServantPassiveSkillEntity_array *v18; // x27
  signed __int64 v19; // x19
  BattleServantConfConponent_o *i; // x22
  signed __int64 v21; // x19
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x20
  unsigned __int64 v31; // x19
  BalanceConfig_c *v32; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  const MethodInfo *v36; // [xsp+10h] [xbp-70h]

  if ( (byte_42EAA14 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, svtId, userId, *(_QWORD *)&svtLv);
    sub_B5D5C4(&ServantPassiveSkillEntity___TypeInfo, v14, v15, v16);
    byte_42EAA14 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (ServantPassiveSkillEntity_array *)sub_B5D5DC(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v17->static_fields->SvtPassiveSkillListMax);
  v19 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v18->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v32->static_fields->SvtPassiveSkillListMax )
      break;
    v21 = v19 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  v21,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  v36);
    if ( !v18 )
      sub_B5D69C(UseEntity, v23);
    v30 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_B5D684(UseEntity, v18->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v35 = sub_B5D6BC(0LL);
        sub_B5D668(v35, 0LL);
      }
    }
    v31 = v21 - 1;
    if ( v31 >= v18->max_length )
    {
      v34 = sub_B5D6C8(UseEntity);
      sub_B5D668(v34, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v30;
    sub_B5D560(i, v30, v24, v25, v26, v27, v28, v29);
    v19 = v31 + 1;
  }
  return v18;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v87; // x20
  __int64 v88; // x1
  __int64 v89; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v92; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v95; // x3
  System_Collections_Generic_IEnumerator_T__c *v96; // x8
  unsigned __int64 v97; // x10
  int32_t *v98; // x11
  __int64 v99; // x0
  __int64 v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v103; // x22
  __int64 v104; // x9
  System_String_o *PriorityKey; // x0
  __int64 v106; // x1
  System_Xml_XmlQualifiedName_o *v107; // x23
  __int64 v108; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // x24
  System_Xml_Schema_XmlSchemaObject_o *v110; // x2
  System_Collections_Generic_IEnumerator_T__c *v111; // x8
  unsigned __int64 v112; // x10
  int32_t *v113; // x11
  __int64 v114; // x0
  __int64 v115; // x1
  ServantPassiveSkillMaster___c_c *v116; // x0
  Il2CppObject *v117; // x21
  Il2CppObject *key; // x22
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x23
  Il2CppObject *v121; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *v129; // x23
  System_Xml_Schema_XmlSchemaObject_o *v130; // x0
  __int64 v131; // x1
  int v132; // w21
  ServantPassiveSkillMaster_o *v134; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v135; // [xsp+18h] [xbp-B8h] BYREF
  int v136[2]; // [xsp+40h] [xbp-90h]
  int v137; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v138; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42EAA10 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Comparison_ServantPassiveSkillEntity___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v17,
      v18,
      v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__,
      v20,
      v21,
      v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__,
      v23,
      v24,
      v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__,
      v29,
      v30,
      v31);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v35,
      v36,
      v37);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v38,
      v39,
      v40);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v41,
      v42,
      v43);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v50, v51, v52);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__,
      v53,
      v54,
      v55);
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v56,
      v57,
      v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v71, v72, v73);
    sub_B5D5C4(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v74, v75, v76);
    sub_B5D5C4(&ServantPassiveSkillEntity_TypeInfo, v77, v78, v79);
    sub_B5D5C4(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, v80, v81, v82);
    sub_B5D5C4(&ServantPassiveSkillMaster___c_TypeInfo, v83, v84, v85);
    byte_42EAA10 = 1;
  }
  value = 0LL;
  memset(&v138, 0, sizeof(v138));
  v137 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v87 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v87,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v134 = this;
  if ( !Enumerator )
    sub_B5D69C(0LL, v88);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v92;
        p_offset += 4;
        if ( v92 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v89);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v96 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v97 = 0LL;
      v98 = &v96->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v98 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v97;
        v98 += 4;
        if ( v97 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v99 = (__int64)&v96->vtable[*v98].method;
    }
    else
    {
LABEL_17:
      v99 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v95);
    }
    v100 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v99)(
             Enumerator,
             *(_QWORD *)(v99 + 8));
    v103 = (EventMissionProgressRequest_Argument_ProgressData_o *)v100;
    if ( !v100 )
      sub_B5D69C(0LL, v101);
    v104 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v100 + 300LL) < (unsigned int)v104
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v100 + 200LL) + 8 * v104 - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_B5D990(v100);
LABEL_52:
      sub_B5D69C(v116, v115);
    }
    PriorityKey = ServantPassiveSkillMaster__getPriorityKey(
                    (ServantPassiveSkillMaster_o *)v100,
                    *(_DWORD *)(v100 + 16),
                    *(_DWORD *)(v100 + 20),
                    v102);
    if ( !v87 )
      sub_B5D69C(PriorityKey, v106);
    v107 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v87,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v109,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      v110 = (System_Xml_Schema_XmlSchemaObject_o *)v109;
      this = v134;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v87,
        v107,
        v110,
        (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B5D69C(0LL, v108);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v103,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
  }
  v136[0] = 117;
  v137 = 1;
  v111 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v112 = 0LL;
    v113 = &v111->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
    {
      ++v112;
      v113 += 4;
      if ( v112 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v114 = (__int64)&v111->vtable[*v113].method;
  }
  else
  {
LABEL_31:
    v114 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v95);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v114)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v114 + 8));
  v137 = 0;
  if ( !v87 )
LABEL_57:
    sub_B5D69C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v135,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v87,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v138 = v135;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v138,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v116 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v138.fields.current.fields.key;
    v117 = v138.fields.current.fields.value;
    if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v116 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v116->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v116->vtable._0_Equals.methodPtr) & 4) != 0 && !v116->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v116);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v121 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v121,
        Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__,
        (const MethodInfo_249B1FC *)Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
      v122 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v122->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v122->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v123,
        v124,
        v125,
        v126,
        v127,
        v128);
      this = v134;
    }
    if ( !v117 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v117,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_305909C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v129 = this->fields.listCache;
    v130 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v117,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v129 )
      sub_B5D69C(v130, v131);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v129,
      (System_Xml_XmlQualifiedName_o *)key,
      v130,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v117,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
  }
  v136[0] = 240;
  v132 = ++v137;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v138,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  if ( v132 && v136[v132 - 1] == 240 )
    v137 = v132 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v87,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D6E & 1) == 0 )
  {
    sub_B5D5C4(&ServantPassiveSkillMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D6E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantPassiveSkillMaster___c___ctor(ServantPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantPassiveSkillMaster___c___EnumerateSpecialSkillsBySvtId_b__8_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B5D69C(this, a);
  return a->fields.priority - b->fields.priority;
}