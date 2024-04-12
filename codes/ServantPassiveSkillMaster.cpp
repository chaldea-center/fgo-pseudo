void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B20AF & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_42B20AF = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.listCache, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    13,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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

  if ( (byte_42B20B3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_B52984(&Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
    sub_B52984(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_B52984(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_B52984(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_42B20B3 = 1;
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
    _9__8_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__8_0,
      v9,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_ServantPassiveSkillEntity__bool___ctor__);
    v10 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    v10->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_B52920(
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
                                                                                  (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_42B20AD & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_42B20AD = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                          (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                          PK,
                                          (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_42B20AE & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_42B20AE = 1;
  }
  PK = ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_42B20B4 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_42B20B4 = 1;
  }
  value = 0LL;
  PriorityKey = ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_B52A5C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.listCache,
         (System_Xml_XmlQualifiedName_o *)PriorityKey,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  int32_t v22; // w24
  ServantEntity_o *v23; // x22
  bool IsServantEquip; // w25
  BalanceConfig_c *v25; // x0
  __int64 v26; // x22
  ServantPassiveSkillEntity_array *UseEntityList; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  MethodInfo *v32; // x6
  System_Int32_array *v33; // x7
  bool v34; // w8
  BattleServantConfConponent_o *v35; // x25
  ServantPassiveSkillEntity_o **m_Items; // x27
  ServantPassiveSkillEntity_array *v37; // x23
  unsigned __int64 v38; // x28
  unsigned int v39; // w26
  __int64 v40; // x24
  System_Int32_array *v41; // x8
  BattleServantConfConponent_c *klass; // x8
  System_String_array *v43; // x10
  System_Int32_array *v44; // x8
  System_String_array *v45; // x8
  __int64 v46; // x10
  int v47; // w9
  System_String_array **v48; // x27
  unsigned int *v49; // x20
  unsigned __int64 v50; // x8
  unsigned int *v51; // x9
  System_Int32_array **v52; // x25
  unsigned int *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array *v60; // x20
  unsigned __int64 max_length; // x8
  Il2CppClass **v62; // x9
  System_Int32_array **v63; // x25
  Il2CppClass **v64; // x0
  System_Int32_array *v65; // x8
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_String_array *v72; // x8
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x0
  __int64 v86; // x0
  const MethodInfo *v87; // [xsp+8h] [xbp-88h]
  ServantPassiveSkillEntity_o **v89; // [xsp+28h] [xbp-68h]
  System_String_array **titleLista; // [xsp+30h] [xbp-60h]
  bool v91; // [xsp+3Ch] [xbp-54h]

  if ( (byte_42B20B6 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B20B6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (titleLista = titleList,
        v22 = svtId,
        (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                       svtId,
                                       (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_59:
    sub_B52A5C(Instance, v21);
  }
  v23 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v23, idList, titleLista, explanationList, 0LL);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  v26 = sub_B5299C(int___TypeInfo, (unsigned int)v25->static_fields->SvtPassiveSkillListMax);
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    v22,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    v87);
  v34 = IsServantEquip;
  v35 = (BattleServantConfConponent_o *)titleLista;
  m_Items = UseEntityList->m_Items;
  v37 = UseEntityList;
  v38 = 0LL;
  v39 = 0;
  v40 = 32LL;
  v91 = v34;
  v89 = UseEntityList->m_Items;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v38 >= SHIDWORD(Instance[1].fields.saveNameList->fields._syncRoot) )
      break;
    if ( !v37 )
      goto LABEL_59;
    if ( v38 >= v37->max_length )
      goto LABEL_58;
    Instance = (DataManager_o *)m_Items[v38];
    v41 = *idList;
    if ( Instance )
    {
      if ( !v41 )
        goto LABEL_59;
      if ( v39 >= v41->max_length )
        goto LABEL_58;
      v41->m_Items[v39 + 1] = HIDWORD(Instance->fields.datalist);
      if ( !v26 )
        goto LABEL_59;
      klass = v35->klass;
      if ( !v35->klass )
        goto LABEL_59;
      v43 = *explanationList;
      if ( !*explanationList )
        goto LABEL_59;
      if ( v39 >= *(_DWORD *)(v26 + 24) || v39 >= LODWORD(klass->_1.namespaze) || v39 >= v43->max_length )
        goto LABEL_58;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v26 + 4LL * (int)v39 + 32),
        (System_String_o **)&klass->_1.byval_arg.data + (int)v39,
        &v43->m_Items[v39],
        0,
        v91,
        v32);
      if ( v38 != v39 )
      {
        v44 = *idList;
        if ( !*idList )
          goto LABEL_59;
        if ( v38 >= v44->max_length )
          goto LABEL_58;
        v44->m_Items[v38 + 1] = 0;
        v45 = (System_String_array *)v35->klass;
        if ( !v35->klass )
          goto LABEL_59;
        goto LABEL_46;
      }
      goto LABEL_50;
    }
    if ( !v41 )
      goto LABEL_59;
    v46 = *(_QWORD *)&v41->max_length;
    if ( v38 >= (unsigned int)v46 )
      goto LABEL_58;
    v47 = v41->m_Items[v38 + 1];
    if ( v47 >= 1 )
    {
      if ( v38 != v39 )
      {
        if ( v39 >= (unsigned int)v46 )
          goto LABEL_58;
        v41->m_Items[v39 + 1] = v47;
        v48 = explanationList;
        v49 = (unsigned int *)v35->klass;
        if ( !v35->klass )
          goto LABEL_59;
        v50 = v49[6];
        if ( v38 >= v50 )
          goto LABEL_58;
        v51 = &v49[2 * v38];
        v52 = (System_Int32_array **)*((_QWORD *)v51 + 4);
        if ( v52 )
        {
          Instance = (DataManager_o *)sub_B52A44(*((_QWORD *)v51 + 4), *(_QWORD *)(*(_QWORD *)v49 + 64LL));
          if ( !Instance )
            goto LABEL_60;
          v50 = *((_QWORD *)v49 + 3);
        }
        if ( v39 >= (unsigned int)v50 )
          goto LABEL_58;
        v53 = &v49[2 * v39];
        *((_QWORD *)v53 + 4) = v52;
        sub_B52920((BattleServantConfConponent_o *)(v53 + 8), v52, v28, v29, v30, v31, (System_Int32_array *)v32, v33);
        v60 = *v48;
        if ( !*v48 )
          goto LABEL_59;
        max_length = v60->max_length;
        if ( v38 >= max_length )
          goto LABEL_58;
        v62 = &v60->obj.klass + v38;
        v63 = (System_Int32_array **)v62[4];
        if ( v63 )
        {
          Instance = (DataManager_o *)sub_B52A44(v62[4], v60->obj.klass->_1.element_class);
          if ( !Instance )
          {
LABEL_60:
            v86 = sub_B52A7C(Instance);
            sub_B52A28(v86, 0LL);
          }
          max_length = *(_QWORD *)&v60->max_length;
        }
        if ( v39 >= (unsigned int)max_length )
          goto LABEL_58;
        v64 = &v60->obj.klass + (int)v39;
        v64[4] = (Il2CppClass *)v63;
        sub_B52920((BattleServantConfConponent_o *)(v64 + 4), v63, v54, v55, v56, v57, v58, v59);
        v65 = *idList;
        if ( !*idList )
          goto LABEL_59;
        v35 = (BattleServantConfConponent_o *)titleLista;
        if ( v38 >= v65->max_length )
        {
LABEL_58:
          v85 = sub_B52A88(Instance);
          sub_B52A28(v85, 0LL);
        }
        v65->m_Items[v38 + 1] = 0;
        explanationList = v48;
        v45 = *titleLista;
        m_Items = v89;
        if ( !*titleLista )
          goto LABEL_59;
LABEL_46:
        if ( v38 >= v45->max_length )
          goto LABEL_58;
        v45->m_Items[v38] = 0LL;
        sub_B52920(
          (BattleServantConfConponent_o *)((char *)v45 + v40),
          0LL,
          v28,
          v29,
          v30,
          v31,
          (System_Int32_array *)v32,
          v33);
        v72 = *explanationList;
        if ( !*explanationList )
          goto LABEL_59;
        if ( v38 >= v72->max_length )
          goto LABEL_58;
        v72->m_Items[v38] = 0LL;
        sub_B52920((BattleServantConfConponent_o *)((char *)v72 + v40), 0LL, v66, v67, v68, v69, v70, v71);
      }
LABEL_50:
      ++v39;
    }
    ++v38;
    v40 += 8LL;
  }
  if ( !v39 )
  {
    *idList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)idList, 0LL, v28, v29, v30, v31, (System_Int32_array *)v32, v33);
    v35->klass = 0LL;
    sub_B52920(v35, 0LL, v73, v74, v75, v76, v77, v78);
    *explanationList = 0LL;
    sub_B52920((BattleServantConfConponent_o *)explanationList, 0LL, v79, v80, v81, v82, v83, v84);
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
  if ( (byte_42B20B0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B20B0 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44570600(v4, (System_String_o *)StringLiteral_1240/*":"*/, v5, 0LL);
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
  if ( (byte_42B20B2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_B52984(&ServantPassiveSkillEntity_TypeInfo);
    byte_42B20B2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
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
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  }
LABEL_14:
  if ( !v7 )
    goto LABEL_16;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                              (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        v23 = sub_B52A88(EntityListFromIdNum);
        sub_B52A28(v23, 0LL);
      }
      v20 = &v18->obj.klass + i;
      v21 = (ServantPassiveSkillEntity_o *)v20[4];
      if ( !v21 )
        sub_B52A5C(EntityListFromIdNum, v17);
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
  BalanceConfig_c *v14; // x0
  ServantPassiveSkillEntity_array *v15; // x27
  signed __int64 v16; // x19
  BattleServantConfConponent_o *i; // x22
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
  const MethodInfo *v33; // [xsp+10h] [xbp-70h]

  if ( (byte_42B20B5 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&ServantPassiveSkillEntity___TypeInfo);
    byte_42B20B5 = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (ServantPassiveSkillEntity_array *)sub_B5299C(
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
                  v33);
    if ( !v15 )
      sub_B52A5C(UseEntity, v20);
    v27 = (System_Int32_array **)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_B52A44(UseEntity, v15->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_B52A7C(0LL);
        sub_B52A28(v32, 0LL);
      }
    }
    v28 = v18 - 1;
    if ( v28 >= v15->max_length )
    {
      v31 = sub_B52A88(UseEntity);
      sub_B52A28(v31, 0LL);
    }
    i->klass = (BattleServantConfConponent_c *)v27;
    sub_B52920(i, v27, v21, v22, v23, v24, v25, v26);
    v16 = v28 + 1;
  }
  return v15;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *listCache; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x3
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x22
  __int64 v21; // x9
  System_String_o *PriorityKey; // x0
  __int64 v23; // x1
  System_Xml_XmlQualifiedName_o *v24; // x23
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x24
  System_Xml_Schema_XmlSchemaObject_o *v27; // x2
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x1
  ServantPassiveSkillMaster___c_c *v33; // x0
  Il2CppObject *v34; // x21
  Il2CppObject *key; // x22
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__6_0; // x23
  Il2CppObject *v38; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *v46; // x23
  System_Xml_Schema_XmlSchemaObject_o *v47; // x0
  __int64 v48; // x1
  int v49; // w21
  ServantPassiveSkillMaster_o *v51; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v52; // [xsp+18h] [xbp-B8h] BYREF
  int v53[2]; // [xsp+40h] [xbp-90h]
  int v54; // [xsp+48h] [xbp-88h]
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v55; // [xsp+50h] [xbp-80h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42B20B1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
    sub_B52984(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_B52984(&ServantPassiveSkillEntity_TypeInfo);
    sub_B52984(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_B52984(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_42B20B1 = 1;
  }
  value = 0LL;
  memset(&v55, 0, sizeof(v55));
  v54 = 0;
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    listCache,
    (const MethodInfo_2F1B9DC *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)listCache,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  v51 = this;
  if ( !Enumerator )
    sub_B52A5C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v6);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_17:
      v16 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v12);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v17;
    if ( !v17 )
      sub_B52A5C(0LL, v18);
    v21 = *(&ServantPassiveSkillEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v17 + 300LL) < (unsigned int)v21
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v17 + 200LL) + 8 * v21 - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_B52D50(v17);
LABEL_52:
      sub_B52A5C(v33, v32);
    }
    PriorityKey = ServantPassiveSkillMaster__getPriorityKey(
                    (ServantPassiveSkillMaster_o *)v17,
                    *(_DWORD *)(v17 + 16),
                    *(_DWORD *)(v17 + 20),
                    v19);
    if ( !v4 )
      sub_B52A5C(PriorityKey, v23);
    v24 = (System_Xml_XmlQualifiedName_o *)PriorityKey;
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            v4,
            (System_Xml_XmlQualifiedName_o *)PriorityKey,
            &value,
            (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v26,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (System_Xml_Schema_XmlSchemaObject_o *)v26;
      v27 = (System_Xml_Schema_XmlSchemaObject_o *)v26;
      this = v51;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
        v4,
        v24,
        v27,
        (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    if ( !value )
      sub_B52A5C(0LL, v25);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)value,
      v20,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
  }
  v53[0] = 117;
  v54 = 1;
  v28 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v12);
  }
  listCache = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                                                              Enumerator,
                                                                                              *(_QWORD *)(v31 + 8));
  v54 = 0;
  if ( !v4 )
LABEL_57:
    sub_B52A5C(listCache, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v52,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v4,
    (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v55 = v52;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v55,
            (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__) )
  {
    v33 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v55.fields.current.fields.key;
    v34 = v55.fields.current.fields.value;
    if ( (BYTE3(ServantPassiveSkillMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v33 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        _9__6_0,
        v38,
        Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__,
        (const MethodInfo_2483370 *)Method_System_Comparison_ServantPassiveSkillEntity___ctor__);
      v39 = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      v39->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v39->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this = v51;
    }
    if ( !v34 )
      goto LABEL_52;
    System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
      (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v34,
      (System_Comparison_T__o *)_9__6_0,
      (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v46 = this->fields.listCache;
    v47 = (System_Xml_Schema_XmlSchemaObject_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v46 )
      sub_B52A5C(v47, v48);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v46,
      (System_Xml_XmlQualifiedName_o *)key,
      v47,
      (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v34,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
  }
  v53[0] = 240;
  v49 = ++v54;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v55,
    (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  if ( v49 && v53[v49 - 1] == 240 )
    v54 = v49 - 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v4,
    (const MethodInfo_2F1B9DC *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD356 & 1) == 0 )
  {
    sub_B52984(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_42AD356 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}