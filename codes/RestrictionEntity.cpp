void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45215 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B45215 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionEntity__CreatePrimaryKey(RestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall RestrictionEntity__ExistsRestrictionGrandServant(
        RestrictionEntity_o *this,
        UserServantGrandEntity_array *userServantGrandEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  unsigned __int64 v12; // x22
  UserServantGrandEntity_o *v13; // x8
  const MethodInfo *v14; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B45214 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, userServantGrandEntities);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    byte_4B45214 = 1;
  }
  entity = 0LL;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userServantGrandEntities, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !userServantGrandEntities )
LABEL_20:
    sub_1BDBAD4(Master_object, v8);
  v10 = *(_QWORD *)&userServantGrandEntities->max_length;
  if ( (int)v10 < 1 )
    return 0;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 >= (unsigned int)v10 )
      sub_1BDBADC(Master_object, v8, v9);
    v13 = userServantGrandEntities->m_Items[v12];
    if ( v13 )
    {
      if ( !v11 )
        goto LABEL_20;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v11,
                                        &entity,
                                        v13->fields.svtId,
                                        (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_20;
        if ( !RestrictionEntity__IsRestriction_41534924(this, (System_Int32_array *)entity[11].klass, v9) )
          return 1;
        Master_object = (Il2CppObject *)RestrictionEntity__IsSearchVals(this, 0, v14);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          return 1;
      }
    }
    LODWORD(v10) = userServantGrandEntities->max_length;
    if ( (__int64)++v12 >= (int)v10 )
      return 0;
  }
}


System_String_o *__fastcall RestrictionEntity__GetClassIndividualityRestrictionMessage(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  RestrictionEntity_o *v5; // x19
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
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v22; // x0
  System_String_o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  RestrictionEntity___c_c *v25; // x0
  System_Func_int__int__o *_9__17_0; // x22
  Il2CppObject *v27; // x23
  struct RestrictionEntity___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v31; // x0
  RestrictionEntity___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_T__TResult__o *_9__17_1; // x22
  Il2CppObject *v35; // x23
  struct RestrictionEntity___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_string__o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  System_String_o *v46; // x19
  System_String_o *v47; // x19
  Il2CppObject *v48; // x20
  Il2CppObject *v49; // x0
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4B45211 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_int__int___, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_int__string___, v6);
    sub_1BDB878(&System_Func_int__int__TypeInfo, v7);
    sub_1BDB878(&System_Func_int__string__TypeInfo, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&Restriction_RangeType_TypeInfo, v11);
    sub_1BDB878(&string_TypeInfo, v12);
    sub_1BDB878(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__17_0__, v13);
    sub_1BDB878(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__17_1__, v14);
    sub_1BDB878(&RestrictionEntity___c_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_16088/*"_"*/, v16);
    sub_1BDB878(&StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v17);
    sub_1BDB878(&StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v18);
    this = (RestrictionEntity_o *)sub_1BDB878(&StringLiteral_11561/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v19);
    byte_4B45211 = 1;
  }
  targetVals = v5->fields.targetVals;
  if ( !targetVals )
    sub_1BDBAD4(this, method);
  if ( targetVals->max_length != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v5->fields.targetVals2;
  if ( !targetVals2 || !*(_QWORD *)&targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v52 = targetVals->m_Items[1];
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v2, v3, v4);
  v23 = System_String__Format((System_String_o *)StringLiteral_11561/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v23, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.targetVals2;
  v25 = RestrictionEntity___c_TypeInfo;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v25 = RestrictionEntity___c_TypeInfo;
  }
  _9__17_0 = v25->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = RestrictionEntity___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__17_0 = (System_Func_int__int__o *)sub_1BDBAC4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__17_0,
      v27,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__17_0__,
      0LL);
    static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = _9__17_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v29, v30);
  }
  v31 = System_Linq_Enumerable__OrderBy_int__int_(
          v24,
          (System_Func_TSource__TKey__o *)_9__17_0,
          (const MethodInfo_305F35C *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v32 = RestrictionEntity___c_TypeInfo;
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)v31;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v32 = RestrictionEntity___c_TypeInfo;
  }
  _9__17_1 = (System_Func_T__TResult__o *)v32->static_fields->__9__17_1;
  if ( !_9__17_1 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = RestrictionEntity___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__17_1 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__17_1,
      v35,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__17_1__,
      0LL);
    v36 = RestrictionEntity___c_TypeInfo->static_fields;
    v36->__9__17_1 = (struct System_Func_int__string__o *)_9__17_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v36->__9__17_1, (int32_t)_9__17_1, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v33,
                                                              (System_Func_TSource__TResult__o *)_9__17_1,
                                                              (const MethodInfo_3065ABC *)Method_System_Linq_Enumerable_Select_int__string___);
  v40 = System_String__Join_62614836((System_String_o *)StringLiteral_16088/*"_"*/, v39, 0LL);
  v41 = System_String__Concat_62572260((System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v40, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v41, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v5->fields.rangeType;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType, v42, v43, v44);
  v46 = System_String__Format((System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v45, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v46, 0LL) )
    return string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get(v46, 0LL);
  v48 = (Il2CppObject *)LocalizationManager__Get(v23, 0LL);
  v49 = (Il2CppObject *)LocalizationManager__Get(v41, 0LL);
  return System_String__Format_62613552(v47, v48, v49, 0LL);
}


System_String_o *__fastcall RestrictionEntity__GetGrandRestrictionLabelKey(
        RestrictionEntity_o *this,
        System_Int32_array *classIndividuality,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ServantClassMaster_o *Master_object; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  System_String_o **p_revision; // x23
  ServantClassMaster_o *v15; // x20
  unsigned __int64 v16; // x24
  ServantClassMaster_o *v17; // x21
  ServantClassEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B45213 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphDetailMaster___, classIndividuality);
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    byte_4B45213 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !classIndividuality )
    goto LABEL_25;
  v13 = *(_QWORD *)&classIndividuality->max_length;
  if ( (int)v13 >= 1 )
  {
    p_revision = (System_String_o **)&StringLiteral_1/*""*/;
    v15 = Master_object;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v13 )
        sub_1BDBADC(Master_object, v10, v11);
      if ( !v15 )
        goto LABEL_25;
      Master_object = (ServantClassMaster_o *)ServantClassMaster__TryGetEntityByIndividuality(
                                                v15,
                                                &entity,
                                                classIndividuality->m_Items[v16 + 1],
                                                v12);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
        if ( !entity || !Master_object )
          goto LABEL_25;
        Master_object = (ServantClassMaster_o *)GrandGraphDetailMaster__GetEntityByBaseClassId(
                                                  (GrandGraphDetailMaster_o *)Master_object,
                                                  entity->fields.id,
                                                  1,
                                                  0LL);
        if ( Master_object )
          break;
      }
      LODWORD(v13) = classIndividuality->max_length;
      if ( (__int64)++v16 >= (int)v13 )
        return *p_revision;
    }
    v17 = Master_object;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ServantClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( Master_object )
    {
      Master_object = (ServantClassMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                v17->fields._MasterKind_k__BackingField,
                                                (const MethodInfo_32E1E3C *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__GetEntity__);
      if ( Master_object )
      {
        p_revision = (System_String_o **)&Master_object->fields.revision;
        return *p_revision;
      }
    }
LABEL_25:
    sub_1BDBAD4(Master_object, v10);
  }
  p_revision = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_revision;
}


int32_t __fastcall RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  __int64 v5; // x9

  type = this->fields.type;
  if ( type != 16 && type != 12 )
    return 0;
  targetVals2 = this->fields.targetVals2;
  if ( !targetVals2 )
    return 0;
  v5 = *(_QWORD *)&targetVals2->max_length;
  if ( !v5 )
    return 0;
  if ( !(_DWORD)v5 )
    sub_1BDBADC(this, method, v2);
  return targetVals2->m_Items[1];
}


bool __fastcall RestrictionEntity__IsGrandRestrictionViolated(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_ICollection_o *Entitys; // x0
  const MethodInfo *v8; // x2
  int32_t type; // w8

  if ( (byte_4B45212 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__, v4);
    byte_4B45212 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_1BDBAD4(0LL, v6);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_32E5B78 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  type = this->fields.type;
  if ( type == 23 )
    return BasicHelper__IsNullOrEmpty(Entitys, 0LL);
  return (type == 22 || type == 21)
      && !RestrictionEntity__ExistsRestrictionGrandServant(this, (UserServantGrandEntity_array *)Entitys, v8);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x8
  __int64 v6; // x9
  struct System_Int32_array *v7; // x8
  __int64 v8; // x9

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals(this, v, method);
    case 2:
      return RestrictionEntity__IsSearchVals(this, v, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_13;
      v6 = *(_QWORD *)&targetVals->max_length;
      if ( !v6 )
        goto LABEL_13;
      if ( !(_DWORD)v6 )
        goto LABEL_15;
      v3 = targetVals->m_Items[1] > v;
      break;
    case 4:
      v7 = this->fields.targetVals;
      if ( v7 && (v8 = *(_QWORD *)&v7->max_length) != 0 )
      {
        if ( !(_DWORD)v8 )
LABEL_15:
          sub_1BDBADC(this, *(_QWORD *)&v, method);
        v3 = v7->m_Items[1] < v;
      }
      else
      {
LABEL_13:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsRestrictionTarget(
        RestrictionEntity_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_4B4520E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&targetType);
    byte_4B4520E = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall RestrictionEntity__IsRestriction_41534924(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x9
  __int64 v6; // x10
  __int64 v7; // x8
  struct System_Int32_array *v8; // x9
  __int64 v9; // x10
  __int64 v10; // x8

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals_41534600(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_41534600(this, vList, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v6 = *(_QWORD *)&targetVals->max_length;
      if ( !v6 )
        return v3;
      v7 = *(_QWORD *)&vList->max_length;
      if ( !v7 )
        goto LABEL_19;
      if ( !(_DWORD)v7 || !(_DWORD)v6 )
        goto LABEL_21;
      v3 = vList->m_Items[1] < targetVals->m_Items[1];
      break;
    case 4:
      v8 = this->fields.targetVals;
      if ( !v8 )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v9 = *(_QWORD *)&v8->max_length;
      if ( !v9 )
        return v3;
      v10 = *(_QWORD *)&vList->max_length;
      if ( v10 )
      {
        if ( !(_DWORD)v10 || !(_DWORD)v9 )
LABEL_21:
          sub_1BDBADC(this, vList, method);
        v3 = vList->m_Items[1] > v8->m_Items[1];
      }
      else
      {
LABEL_19:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10
  int32_t v7; // w11

  targetVals = this->fields.targetVals;
  if ( targetVals && (max_length = targetVals->max_length, max_length >= 1) )
  {
    v5 = 0LL;
    v6 = &targetVals->m_Items[1];
    do
    {
      if ( (unsigned int)v5 >= max_length )
        sub_1BDBADC(this, *(_QWORD *)&v, method);
      v7 = v6[v5++];
      this = (RestrictionEntity_o *)(v7 == v);
    }
    while ( (int)v5 < max_length && v7 != v );
  }
  else
  {
    LOBYTE(this) = 0;
  }
  return (char)this;
}


bool __fastcall RestrictionEntity__IsSearchVals_41534600(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  signed int max_length; // w13
  __int64 v9; // x15

  result = 0;
  if ( vList )
  {
    targetVals = this->fields.targetVals;
    if ( targetVals )
    {
      if ( (int)*(_QWORD *)&targetVals->max_length < 1 )
      {
        return 0;
      }
      else
      {
        v6 = (unsigned int)*(_QWORD *)&targetVals->max_length;
        v7 = 0LL;
        while ( 1 )
        {
          if ( v7 >= v6 )
LABEL_16:
            sub_1BDBADC(0LL, vList, method);
          max_length = vList->max_length;
          if ( max_length >= 1 )
            break;
LABEL_11:
          ++v7;
          result = 0;
          if ( (__int64)v7 >= (int)v6 )
            return result;
        }
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            goto LABEL_16;
          if ( targetVals->m_Items[v7 + 1] == vList->m_Items[v9 + 1] )
            return 1;
          if ( (int)++v9 >= max_length )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}


System_Boolean_array *__fastcall RestrictionEntity__getDeckPositionList(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0
  BalanceConfig_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v9; // x19
  int max_length; // w22
  unsigned __int64 v11; // x23
  int v12; // w26
  il2cpp_array_size_t v13; // w25
  unsigned __int64 v14; // x23
  signed __int64 v15; // x22
  signed __int64 v16; // x20
  signed __int64 v17; // x22
  signed __int64 v18; // x20
  unsigned __int64 v19; // x23
  struct System_Int32_array *v20; // x8
  int v21; // w25
  il2cpp_array_size_t v22; // w24

  if ( (byte_4B45210 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&bool___TypeInfo, v3);
    byte_4B45210 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (BalanceConfig_c *)sub_1BDB920(bool___TypeInfo, (unsigned int)v4->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v9 = (System_Boolean_array *)v5;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v9;
      if ( !targetVals )
        goto LABEL_67;
      v11 = 0LL;
      while ( v11 < targetVals->max_length )
      {
        v12 = targetVals->m_Items[v11 + 1];
        v13 = v12 - 1;
        if ( v12 >= 1 )
        {
          v5 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v5 = BalanceConfig_TypeInfo;
          }
          if ( v12 <= v5->static_fields->DeckMemberMax )
          {
            if ( !v9 )
              goto LABEL_67;
            if ( v13 >= v9->max_length )
              goto LABEL_68;
            v9->m_Items[v13 + 4] = 1;
          }
        }
        if ( max_length == ++v11 )
          return v9;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_67;
      }
      goto LABEL_68;
    case 2:
      v5 = BalanceConfig_TypeInfo;
      v14 = 0LL;
      while ( 2 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v14 < v5->static_fields->DeckMemberMax )
        {
          if ( v9 )
          {
            if ( v14 < v9->max_length )
            {
              v9->m_Items[v14++ + 4] = 1;
              continue;
            }
LABEL_68:
            sub_1BDBADC(v5, v6, v7);
          }
          goto LABEL_67;
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v19 = 0LL;
        while ( 1 )
        {
          v20 = this->fields.targetVals;
          if ( !v20 )
            break;
          if ( v19 >= v20->max_length )
            goto LABEL_68;
          v21 = v20->m_Items[v19 + 1];
          v22 = v21 - 1;
          if ( v21 >= 1 )
          {
            if ( !v5->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v5);
              v5 = BalanceConfig_TypeInfo;
            }
            if ( v21 <= v5->static_fields->DeckMemberMax )
            {
              if ( !v9 )
                break;
              if ( v22 >= v9->max_length )
                goto LABEL_68;
              v9->m_Items[v22 + 4] = 0;
            }
          }
          if ( max_length == ++v19 )
            return v9;
        }
LABEL_67:
        sub_1BDBAD4(v5, v6);
      }
      return v9;
    case 3:
      if ( max_length < 1 )
        return v9;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v15 = targetVals->m_Items[1];
      v5 = BalanceConfig_TypeInfo;
      v16 = 0LL;
      while ( 2 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( v16 >= v5->static_fields->DeckMemberMax )
          return v9;
        if ( v16 < v15 )
          goto LABEL_41;
        if ( !v9 )
          goto LABEL_67;
        if ( v16 < (unsigned __int64)v9->max_length )
        {
          v9->m_Items[v16 + 4] = 1;
LABEL_41:
          ++v16;
          continue;
        }
        goto LABEL_68;
      }
    case 4:
      if ( max_length < 1 )
        return v9;
      if ( !targetVals )
        goto LABEL_67;
      if ( !targetVals->max_length )
        goto LABEL_68;
      v17 = targetVals->m_Items[1];
      v5 = BalanceConfig_TypeInfo;
      v18 = 0LL;
      while ( 2 )
      {
        if ( !v5->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v5);
          v5 = BalanceConfig_TypeInfo;
        }
        if ( v18 >= v5->static_fields->DeckMemberMax )
          return v9;
        if ( v18 >= v17 )
          goto LABEL_53;
        if ( !v9 )
          goto LABEL_67;
        if ( v18 < (unsigned __int64)v9->max_length )
        {
          v9->m_Items[v18 + 4] = 1;
LABEL_53:
          ++v18;
          continue;
        }
        goto LABEL_68;
      }
    default:
      return v9;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RestrictionEntity_o *v3; // x19
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
  __int64 *v14; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v16; // x9
  int v17; // w21
  System_String_o *v18; // x0
  System_String_o *v20; // x0
  System_String_o *name; // x19
  System_String_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  Il2CppObject *v27; // x0
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4B4520F & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_6463/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v5);
    sub_1BDB878(&StringLiteral_6464/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, v6);
    sub_1BDB878(&StringLiteral_6465/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/, v7);
    sub_1BDB878(&StringLiteral_6467/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/, v8);
    sub_1BDB878(&StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/, v9);
    sub_1BDB878(&StringLiteral_6460/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/, v10);
    sub_1BDB878(&StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/, v11);
    sub_1BDB878(&StringLiteral_6466/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v12);
    this = (RestrictionEntity_o *)sub_1BDB878(&StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/, v13);
    byte_4B4520F = 1;
  }
  switch ( v3->fields.type )
  {
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6465/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6467/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_32;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6462/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_32;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6460/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_32;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6461/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_32;
    case 0xA:
      targetVals = v3->fields.targetVals;
      if ( targetVals && (v16 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v16 )
          sub_1BDBADC(this, method, v2);
        v17 = targetVals->m_Items[1];
      }
      else
      {
        v17 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6464/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v3->fields.name;
      v22 = v20;
      v28 = v17;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v23, v24, v25);
      v27 = (Il2CppObject *)System_String__Format(name, v26, 0LL);
      return System_String__Format(v22, v27, 0LL);
    case 0xB:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6463/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_32;
    case 0xF:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6468/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_32;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = &StringLiteral_6466/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_32:
      v18 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
      return System_String__Format(v18, (Il2CppObject *)v3->fields.name, 0LL);
  }
}


int32_t __fastcall RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *targetVals; // x8
  __int64 v4; // x9

  if ( this->fields.type != 3 )
    return 0;
  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  v4 = *(_QWORD *)&targetVals->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
    sub_1BDBADC(this, method, v2);
  return targetVals->m_Items[1];
}


void __fastcall RestrictionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B45216 & 1) == 0 )
  {
    sub_1BDB878(&RestrictionEntity___c_TypeInfo, v1);
    byte_4B45216 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)RestrictionEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall RestrictionEntity___c___ctor(RestrictionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__17_0(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  return t;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__17_1(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_4B45217 & 1) == 0 )
  {
    sub_1BDB878(&Restriction_TargetType_TypeInfo, *(_QWORD *)&t);
    byte_4B45217 = 1;
  }
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = t;
  return System_Enum__ToString(&v5, 0LL);
}