void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43538BA & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_43538BA = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    13,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *__fastcall ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *ServantSkillList; // x19
  ServantPassiveSkillMaster___c_c *v6; // x8
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43538BE & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_B70694(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
    sub_B70694(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_B70694(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_B70694(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_43538BE = 1;
  }
  ServantSkillList = (System_Collections_Generic_IEnumerable_TSource__o *)ServantPassiveSkillMaster__getServantSkillList(
                                                                            this,
                                                                            svtId,
                                                                            method);
  v6 = ServantPassiveSkillMaster___c_TypeInfo;
  if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v6 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__8_0,
      v9,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      (const MethodInfo_29AC578 *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
    v10 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    v10->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                  ServantSkillList,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_43538B8 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_43538B8 = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_21C0890 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_43538B9 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_43538B9 = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_43538BF & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_43538BF = 1;
  }
  value = 0LL;
  PriorityKey = ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B7076C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
        int64_t nowTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int32_t v23; // w24
  ServantEntity_o *v24; // x22
  bool IsServantEquip; // w25
  BalanceConfig_c *v26; // x0
  __int64 v27; // x22
  ServantPassiveSkillEntity_array *UseEntityList; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  MethodInfo *v33; // x6
  System_Int32_array *v34; // x7
  bool v35; // w8
  BattleServantConfConponent_o *v36; // x25
  ServantPassiveSkillEntity_o **m_Items; // x27
  ServantPassiveSkillEntity_array *v38; // x23
  unsigned __int64 v39; // x28
  unsigned int v40; // w26
  __int64 v41; // x24
  System_Int32_array *v42; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v44; // x10
  System_Int32_array *v45; // x8
  System_String_array *v46; // x8
  __int64 v47; // x10
  int v48; // w9
  System_String_array **v49; // x27
  unsigned int *v50; // x20
  unsigned __int64 v51; // x8
  unsigned int *v52; // x9
  System_Int32_array **v53; // x25
  unsigned int *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_String_array *v61; // x20
  unsigned __int64 max_length; // x8
  Il2CppClass **v63; // x9
  System_Int32_array **v64; // x25
  Il2CppClass **v65; // x0
  System_Int32_array *v66; // x8
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array *v73; // x8
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x0
  __int64 v87; // x0
  const MethodInfo *v88; // [xsp+10h] [xbp-90h]
  ServantPassiveSkillEntity_o **v90; // [xsp+38h] [xbp-68h]
  System_String_array **titleLista; // [xsp+40h] [xbp-60h]
  bool v92; // [xsp+4Ch] [xbp-54h]

  if ( (byte_43538C1 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43538C1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (titleLista = titleList,
        v23 = svtId,
        (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_59:
    sub_B7076C(Instance, v22);
  }
  v24 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v24, idList, titleLista, explanationList, 0LL);
  v26 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  v27 = sub_B706AC(int___TypeInfo, (unsigned int)v26->static_fields->SvtPassiveSkillListMax);
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    v23,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    nowTime,
                    v88);
  v35 = IsServantEquip;
  v36 = (BattleServantConfConponent_o *)titleLista;
  m_Items = UseEntityList->m_Items;
  v38 = UseEntityList;
  v39 = 0LL;
  v40 = 0;
  v41 = 32LL;
  v92 = v35;
  v90 = UseEntityList->m_Items;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v39 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      break;
    if ( !v38 )
      goto LABEL_59;
    if ( v39 >= v38->max_length )
      goto LABEL_58;
    Instance = (DataManager_o *)m_Items[v39];
    v42 = *idList;
    if ( Instance )
    {
      if ( !v42 )
        goto LABEL_59;
      if ( v40 >= v42->max_length )
        goto LABEL_58;
      v42->m_Items[v40 + 1] = HIDWORD(Instance->fields.datalist);
      if ( !v27 )
        goto LABEL_59;
      klass = v36->klass;
      if ( !v36->klass )
        goto LABEL_59;
      v44 = *explanationList;
      if ( !*explanationList )
        goto LABEL_59;
      if ( v40 >= *(_DWORD *)(v27 + 24) || v40 >= LODWORD(klass->_1.namespaze) || v40 >= v44->max_length )
        goto LABEL_58;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v27 + 4LL * (int)v40 + 32),
        (System_String_o **)&klass->_1.byval_arg.data + (int)v40,
        &v44->m_Items[v40],
        0,
        v92,
        v33);
      if ( v39 != v40 )
      {
        v45 = *idList;
        if ( !*idList )
          goto LABEL_59;
        if ( v39 >= v45->max_length )
          goto LABEL_58;
        v45->m_Items[v39 + 1] = 0;
        v46 = (System_String_array *)v36->klass;
        if ( !v36->klass )
          goto LABEL_59;
        goto LABEL_46;
      }
      goto LABEL_50;
    }
    if ( !v42 )
      goto LABEL_59;
    v47 = *(_QWORD *)&v42->max_length;
    if ( v39 >= (unsigned int)v47 )
      goto LABEL_58;
    v48 = v42->m_Items[v39 + 1];
    if ( v48 >= 1 )
    {
      if ( v39 != v40 )
      {
        if ( v40 >= (unsigned int)v47 )
          goto LABEL_58;
        v42->m_Items[v40 + 1] = v48;
        v49 = explanationList;
        v50 = (unsigned int *)v36->klass;
        if ( !v36->klass )
          goto LABEL_59;
        v51 = v50[6];
        if ( v39 >= v51 )
          goto LABEL_58;
        v52 = &v50[2 * v39];
        v53 = (System_Int32_array **)*((_QWORD *)v52 + 4);
        if ( v53 )
        {
          Instance = (DataManager_o *)sub_B70754(*((_QWORD *)v52 + 4), *(_QWORD *)(*(_QWORD *)v50 + 64LL));
          if ( !Instance )
            goto LABEL_60;
          v51 = *((_QWORD *)v50 + 3);
        }
        if ( v40 >= (unsigned int)v51 )
          goto LABEL_58;
        v54 = &v50[2 * v40];
        *((_QWORD *)v54 + 4) = v53;
        sub_B70630((BattleServantConfConponent_o *)(v54 + 8), v53, v29, v30, v31, v32, (System_Int32_array *)v33, v34);
        v61 = *v49;
        if ( !*v49 )
          goto LABEL_59;
        max_length = v61->max_length;
        if ( v39 >= max_length )
          goto LABEL_58;
        v63 = &v61->obj.klass + v39;
        v64 = (System_Int32_array **)v63[4];
        if ( v64 )
        {
          Instance = (DataManager_o *)sub_B70754(v63[4], v61->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_60:
            v87 = sub_B7078C(Instance);
            sub_B70738(v87, 0LL);
          }
          max_length = *(_QWORD *)&v61->max_length;
        }
        if ( v40 >= (unsigned int)max_length )
          goto LABEL_58;
        v65 = &v61->obj.klass + (int)v40;
        v65[4] = (Il2CppClass *)v64;
        sub_B70630((BattleServantConfConponent_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
        v66 = *idList;
        if ( !*idList )
          goto LABEL_59;
        v36 = (BattleServantConfConponent_o *)titleLista;
        if ( v39 >= v66->max_length )
        {
LABEL_58:
          v86 = sub_B70798(Instance);
          sub_B70738(v86, 0LL);
        }
        v66->m_Items[v39 + 1] = 0;
        explanationList = v49;
        v46 = *titleLista;
        m_Items = v90;
        if ( !*titleLista )
          goto LABEL_59;
LABEL_46:
        if ( v39 >= v46->max_length )
          goto LABEL_58;
        v46->m_Items[v39] = 0LL;
        sub_B70630(
          (BattleServantConfConponent_o *)((char *)v46 + v41),
          0LL,
          v29,
          v30,
          v31,
          v32,
          (System_Int32_array *)v33,
          v34);
        v73 = *explanationList;
        if ( !*explanationList )
          goto LABEL_59;
        if ( v39 >= v73->max_length )
          goto LABEL_58;
        v73->m_Items[v39] = 0LL;
        sub_B70630((BattleServantConfConponent_o *)((char *)v73 + v41), 0LL, v67, v68, v69, v70, v71, v72);
      }
LABEL_50:
      ++v40;
    }
    ++v39;
    v41 += 8LL;
  }
  if ( !v40 )
  {
    *idList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)idList, 0LL, v29, v30, v31, v32, (System_Int32_array *)v33, v34);
    v36->klass = 0LL;
    sub_B70630(v36, 0LL, v74, v75, v76, v77, v78, v79);
    *explanationList = 0LL;
    sub_B70630((BattleServantConfConponent_o *)explanationList, 0LL, v80, v81, v82, v83, v84, v85);
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
  if ( (byte_43538BB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1250/*":"*/);
    byte_43538BB = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44760452(v4, (System_String_o *)StringLiteral_1250/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  __int64 v9; // x10

  v3 = svtId;
  if ( (byte_43538BD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_B70694(&ServantPassiveSkillEntity_TypeInfo);
    byte_43538BD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        v9 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v7,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                              (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        int64_t nowTime,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *EntityListFromIdNum; // x0
  __int64 v17; // x1
  ServantPassiveSkillEntity_array *v18; // x24
  int i; // w19
  Il2CppClass **v20; // x8
  ServantPassiveSkillEntity_o *v21; // x27
  __int64 v23; // x0
  const MethodInfo *v24; // [xsp+8h] [xbp-68h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v18 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v18->max_length )
      {
        v23 = sub_B70798(EntityListFromIdNum);
        sub_B70738(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantPassiveSkillEntity_o *)v20[4];
      if ( !v21 )
        sub_B7076C(EntityListFromIdNum, v17);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v20[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 nowTime,
                                                                 v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v21;
    }
  }
  return 0LL;
}


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
        int64_t nowTime,
        const MethodInfo *method)
{
  BalanceConfig_c *v14; // x0
  ServantPassiveSkillEntity_array *v15; // x27
  signed __int64 v16; // x19
  BattleServantConfConponent_o *i; // x23
  signed __int64 v18; // x19
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v20; // x1
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
  const MethodInfo *v33; // [xsp+18h] [xbp-78h]

  if ( (byte_43538C0 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&ServantPassiveSkillEntity___TypeInfo);
    byte_43538C0 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (ServantPassiveSkillEntity_array *)sub_B706AC(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  v16 = 0LL;
  for ( i = (BattleServantConfConponent_o *)v15->m_Items; ; i = (BattleServantConfConponent_o *)((char *)i + 8) )
  {
    v29 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v29 = BalanceConfig_TypeInfo;
    }
    if ( v16 >= v29->static_fields->SvtPassiveSkillListMax )
      break;
    v18 = v16 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  v18,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  nowTime,
                  v33);
    if ( !v15 )
      sub_B7076C(UseEntity, v20);
    v27 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_B70754(UseEntity, v15->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_B7078C(0LL);
        sub_B70738(v32, 0LL);
      }
    }
    v28 = v18 - 1;
    if ( v28 >= v15->max_length )
    {
      v31 = sub_B70798(UseEntity);
      sub_B70738(v31, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v27;
    sub_B70630(i, v27, v21, v22, v23, v24, v25, v26);
    v16 = v28 + 1;
  }
  return v15;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x22
  __int64 v19; // x9
  System_String_o *PriorityKey; // x0
  __int64 v21; // x1
  System_Xml_XmlQualifiedName_o *v22; // x23
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x24
  System_Xml_Schema_XmlSchemaObject_o *v25; // x2
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x1
  ServantPassiveSkillMaster___c_c *v31; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *key; // x22
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x23
  Il2CppObject *v36; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *v44; // x23
  System_Xml_Schema_XmlSchemaObject_o *v45; // x0
  __int64 v46; // x1
  int v47; // w21
  ServantPassiveSkillMaster_o *v49; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v50; // [xsp+18h] [xbp-B8h] BYREF
  int v51[2]; // [xsp+40h] [xbp-90h]
  int v52; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v53; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_43538BC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
    sub_B70694(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_B70694(&ServantPassiveSkillEntity_TypeInfo);
    sub_B70694(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_B70694(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_43538BC = 1;
  }
  value = 0LL;
  memset(&v53, 0, sizeof(v53));
  v52 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v49 = this;
  if ( !Enumerator )
    sub_B7076C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)v15;
    if ( !v15 )
      sub_B7076C(0LL, v16);
    v19 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 300LL) < (unsigned int)v19
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * v19 - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_B70A60(v15);
LABEL_52:
      sub_B7076C(v31, v30);
    }
    PriorityKey = ServantPassiveSkillMaster__getPriorityKey(
                    (ServantPassiveSkillMaster_o *)v15,
                    *(_DWORD *)(v15 + 16),
                    *(_DWORD *)(v15 + 20),
                    v17);
    if ( !v4 )
      sub_B7076C(PriorityKey, v21);
    v22 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v4,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v24,
        (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      v25 = (System_Xml_Schema_XmlSchemaObject_o *)v24;
      this = v49;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v4,
        v22,
        v25,
        (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B7076C(0LL, v23);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v18,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
  }
  v51[0] = 117;
  v52 = 1;
  v26 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_31:
    v29 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v29 + 8));
  v52 = 0;
  if ( !v4 )
LABEL_57:
    sub_B7076C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v50,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v4,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v53 = v50;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v53,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v31 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v53.fields.current.fields.key;
    v32 = v53.fields.current.fields.value;
    if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v31 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v36,
        Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__,
        (const MethodInfo_2B05B38 *)Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
      v37 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v37->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v37->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      this = v49;
    }
    if ( !v32 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v32,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v44 = this->fields.listCache;
    v45 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                                   (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v44 )
      sub_B7076C(v45, v46);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v44,
      (System_Xml_XmlQualifiedName_o *)key,
      v45,
      (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v32,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
  }
  v51[0] = 240;
  v47 = ++v52;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v53,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  if ( v47 && v51[v47 - 1] == 240 )
    v52 = v47 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v4,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_434F24D & 1) == 0 )
  {
    sub_B70694(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_434F24D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7076C(this, a);
  return a->fields.priority - b->fields.priority;
}