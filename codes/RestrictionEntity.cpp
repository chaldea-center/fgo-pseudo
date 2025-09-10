void RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27AAB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27AAB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t RestrictionEntity__CreatePrimaryKey(RestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool RestrictionEntity__ExistsRestrictionGrandServant(
        RestrictionEntity_o *this,
        UserServantGrandEntity_array *userServantGrandEntities,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  unsigned __int64 v10; // x22
  UserServantGrandEntity_o *v11; // x8
  const MethodInfo *v12; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27AAA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4C27AAA = 1;
  }
  entity = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userServantGrandEntities, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !userServantGrandEntities )
LABEL_20:
    sub_1C2D6EC(Master_object, v6);
  max_length = userServantGrandEntities->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)max_length )
      sub_1C2D6F4(Master_object, v6, v7);
    v11 = userServantGrandEntities->m_Items[v10];
    if ( v11 )
    {
      if ( !v9 )
        goto LABEL_20;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v9,
                                        &entity,
                                        v11->fields.svtId,
                                        (const MethodInfo_3387DE4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_20;
        if ( !RestrictionEntity__IsRestriction_42350360(this, (System_Int32_array *)entity[11].klass, v7) )
          return 1;
        Master_object = (Il2CppObject *)RestrictionEntity__IsSearchVals(this, 0, v12);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          return 1;
      }
    }
    LODWORD(max_length) = userServantGrandEntities->max_length;
    if ( (__int64)++v10 >= (int)max_length )
      return 0;
  }
}


System_String_o *RestrictionEntity__GetClassIndividualityRestrictionMessage(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  RestrictionEntity_o *v5; // x19
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  RestrictionEntity___c_c *v11; // x0
  System_Func_int__int__o *_9__19_0; // x22
  Il2CppObject *v13; // x23
  struct RestrictionEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  RestrictionEntity___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_T__TResult__o *_9__19_1; // x22
  Il2CppObject *v21; // x23
  struct RestrictionEntity___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_string__o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  System_String_o *v32; // x19
  System_String_o *v33; // x19
  Il2CppObject *v34; // x20
  Il2CppObject *v35; // x0
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  v5 = this;
  if ( (byte_4C27AA7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C2D490(&System_Func_int__int__TypeInfo);
    sub_1C2D490(&System_Func_int__string__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Restriction_RangeType_TypeInfo);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_0__);
    sub_1C2D490(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_1__);
    sub_1C2D490(&RestrictionEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_16105/*"_"*/);
    sub_1C2D490(&StringLiteral_10276/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/);
    sub_1C2D490(&StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/);
    this = (RestrictionEntity_o *)sub_1C2D490(&StringLiteral_11585/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/);
    byte_4C27AA7 = 1;
  }
  targetVals = v5->fields.targetVals;
  if ( !targetVals )
    sub_1C2D6EC(this, method);
  if ( LODWORD(targetVals->max_length) != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v5->fields.targetVals2;
  if ( !targetVals2 || !targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v38 = targetVals->m_Items[0];
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_11585/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v8, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v9, 0) )
    return string_TypeInfo->static_fields->Empty;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.targetVals2;
  v11 = RestrictionEntity___c_TypeInfo;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v11 = RestrictionEntity___c_TypeInfo;
  }
  _9__19_0 = v11->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RestrictionEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__19_0 = (System_Func_int__int__o *)sub_1C2D6DC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__19_0,
      v13,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_0__,
      0);
    static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderBy_int__int_(
          v10,
          (System_Func_TSource__TKey__o *)_9__19_0,
          (const MethodInfo_30FDEF4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v18 = RestrictionEntity___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v18 = RestrictionEntity___c_TypeInfo;
  }
  _9__19_1 = (System_Func_T__TResult__o *)v18->static_fields->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = RestrictionEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__19_1 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__19_1,
      v21,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_1__,
      0);
    v22 = RestrictionEntity___c_TypeInfo->static_fields;
    v22->__9__19_1 = (struct System_Func_int__string__o *)_9__19_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v22->__9__19_1, (int32_t)_9__19_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v19,
                                                              (System_Func_TSource__TResult__o *)_9__19_1,
                                                              (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__string___);
  v26 = System_String__Join_63500440((System_String_o *)StringLiteral_16105/*"_"*/, v25, 0);
  v27 = System_String__Concat_63457864((System_String_o *)StringLiteral_10276/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v26, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v27, 0) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v5->fields.rangeType;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType, v28, v29, v30);
  v32 = System_String__Format((System_String_o *)StringLiteral_10277/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v31, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v32, 0) )
    return string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v33 = LocalizationManager__Get(v32, 0);
  v34 = (Il2CppObject *)LocalizationManager__Get(v9, 0);
  v35 = (Il2CppObject *)LocalizationManager__Get(v27, 0);
  return System_String__Format_63499156(v33, v34, v35, 0);
}


System_String_o *RestrictionEntity__GetGrandRestrictionLabelKey(
        RestrictionEntity_o *this,
        System_Int32_array *classIndividuality,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  _BOOL8 EntityByIndividuality; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 *v8; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x21
  ServantClassEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27AA9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9323/*"NO_GRAND_SVT_CONFIRM_EXTRA1"*/);
    sub_1C2D490(&StringLiteral_9324/*"NO_GRAND_SVT_CONFIRM_EXTRA2"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27AA9 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantClassMaster___);
  EntityByIndividuality = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)classIndividuality,
                            107,
                            (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( EntityByIndividuality )
  {
    if ( !classIndividuality )
      goto LABEL_28;
    if ( SLODWORD(classIndividuality->max_length) >= 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_9323/*"NO_GRAND_SVT_CONFIRM_EXTRA1"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
  }
  EntityByIndividuality = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)classIndividuality,
                            109,
                            (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( EntityByIndividuality )
  {
    if ( !classIndividuality )
      goto LABEL_28;
    if ( SLODWORD(classIndividuality->max_length) > 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = &StringLiteral_9324/*"NO_GRAND_SVT_CONFIRM_EXTRA2"*/;
      return LocalizationManager__Get((System_String_o *)*v8, 0);
    }
  }
  else if ( !classIndividuality )
  {
    goto LABEL_28;
  }
  max_length = classIndividuality->max_length;
  if ( (int)max_length < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)max_length )
      sub_1C2D6F4(EntityByIndividuality, v6, v7);
    if ( !Master_object )
      goto LABEL_28;
    EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                              (ServantClassMaster_o *)Master_object,
                              &entity,
                              classIndividuality->m_Items[v10],
                              0);
    if ( EntityByIndividuality )
      break;
    LODWORD(max_length) = classIndividuality->max_length;
    if ( (__int64)++v10 >= (int)max_length )
      return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !entity )
LABEL_28:
    sub_1C2D6EC(EntityByIndividuality, v6);
  return entity->fields.name;
}


int32_t RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  il2cpp_array_size_t max_length; // x9

  type = this->fields.type;
  if ( type != 16 && type != 12 )
    return 0;
  targetVals2 = this->fields.targetVals2;
  if ( !targetVals2 )
    return 0;
  max_length = targetVals2->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C2D6F4(this, method, v2);
  return targetVals2->m_Items[0];
}


bool RestrictionEntity__IsGrandRestrictionViolated(RestrictionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *Entitys; // x0
  const MethodInfo *v6; // x2
  int32_t type; // w8

  if ( (byte_4C27AA8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    byte_4C27AA8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v4);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_338BAD4 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  type = this->fields.type;
  if ( type == 23 )
    return BasicHelper__IsNullOrEmpty(Entitys, 0);
  return (type == 22 || type == 21)
      && !RestrictionEntity__ExistsRestrictionGrandServant(this, (UserServantGrandEntity_array *)Entitys, v6);
}


// local variable allocation has failed, the output may be wrong!
bool RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *v7; // x8
  il2cpp_array_size_t v8; // x9

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
      max_length = targetVals->max_length;
      if ( !max_length )
        goto LABEL_13;
      if ( !(_DWORD)max_length )
        goto LABEL_15;
      v3 = targetVals->m_Items[0] > v;
      break;
    case 4:
      v7 = this->fields.targetVals;
      if ( v7 && (v8 = v7->max_length) != 0 )
      {
        if ( !(_DWORD)v8 )
LABEL_15:
          sub_1C2D6F4(this, *(_QWORD *)&v, method);
        v3 = v7->m_Items[0] < v;
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


bool RestrictionEntity__IsRestrictionTarget(RestrictionEntity_o *this, int32_t targetType, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_4C27AA4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C27AA4 = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool RestrictionEntity__IsRestriction_42350360(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x9
  il2cpp_array_size_t max_length; // x10
  il2cpp_array_size_t v7; // x8
  struct System_Int32_array *v8; // x9
  il2cpp_array_size_t v9; // x10
  il2cpp_array_size_t v10; // x8

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals_42350036(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_42350036(this, vList, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      max_length = targetVals->max_length;
      if ( !max_length )
        return v3;
      v7 = vList->max_length;
      if ( !v7 )
        goto LABEL_19;
      if ( !(_DWORD)v7 || !(_DWORD)max_length )
        goto LABEL_21;
      v3 = vList->m_Items[0] < targetVals->m_Items[0];
      break;
    case 4:
      v8 = this->fields.targetVals;
      if ( !v8 )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v9 = v8->max_length;
      if ( !v9 )
        return v3;
      v10 = vList->max_length;
      if ( v10 )
      {
        if ( !(_DWORD)v10 || !(_DWORD)v9 )
LABEL_21:
          sub_1C2D6F4(this, vList, method);
        v3 = vList->m_Items[0] > v8->m_Items[0];
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
bool RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *m_Items; // x10
  int32_t v7; // w11

  targetVals = this->fields.targetVals;
  if ( targetVals && (max_length = targetVals->max_length, max_length >= 1) )
  {
    v5 = 0;
    m_Items = targetVals->m_Items;
    do
    {
      if ( (unsigned int)v5 >= max_length )
        sub_1C2D6F4(this, *(_QWORD *)&v, method);
      v7 = m_Items[v5++];
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


bool RestrictionEntity__IsSearchVals_42350036(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 v7; // x9
  int v8; // w13
  __int64 v9; // x15

  result = 0;
  if ( vList )
  {
    targetVals = this->fields.targetVals;
    if ( targetVals )
    {
      if ( (int)targetVals->max_length < 1 )
      {
        return 0;
      }
      else
      {
        max_length = (unsigned int)targetVals->max_length;
        v7 = 0;
        while ( 1 )
        {
          if ( v7 >= max_length )
LABEL_16:
            sub_1C2D6F4(0, vList, method);
          v8 = vList->max_length;
          if ( v8 >= 1 )
            break;
LABEL_11:
          ++v7;
          result = 0;
          if ( (__int64)v7 >= (int)max_length )
            return result;
        }
        v9 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= v8 )
            goto LABEL_16;
          if ( targetVals->m_Items[v7] == vList->m_Items[v9] )
            return 1;
          if ( (int)++v9 >= v8 )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}


System_Boolean_array *RestrictionEntity__getDeckPositionList(RestrictionEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Int32_array *targetVals; // x8
  BalanceConfig_c *v8; // x19
  int max_length; // w22
  unsigned __int64 v10; // x23
  int v11; // w26
  unsigned int v12; // w25
  unsigned __int64 v13; // x23
  signed __int64 v14; // x22
  signed __int64 v15; // x20
  signed __int64 v16; // x22
  signed __int64 v17; // x20
  unsigned __int64 v18; // x23
  struct System_Int32_array *v19; // x8
  int v20; // w25
  unsigned int v21; // w24

  if ( (byte_4C27AA6 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&bool___TypeInfo);
    byte_4C27AA6 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C2D538(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v8 = v4;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return (System_Boolean_array *)v8;
      if ( !targetVals )
        goto LABEL_67;
      v10 = 0;
      while ( v10 < LODWORD(targetVals->max_length) )
      {
        v11 = targetVals->m_Items[v10];
        v12 = v11 - 1;
        if ( v11 >= 1 )
        {
          v4 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( v11 <= v4->static_fields->DeckMemberMax )
          {
            if ( !v8 )
              goto LABEL_67;
            if ( v12 >= LODWORD(v8->_1.namespaze) )
              goto LABEL_68;
            *((_BYTE *)&v8->_1.byval_arg.data + v12) = 1;
          }
        }
        if ( max_length == ++v10 )
          return (System_Boolean_array *)v8;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_67;
      }
      goto LABEL_68;
    case 2:
      v4 = BalanceConfig_TypeInfo;
      v13 = 0;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v13 < v4->static_fields->DeckMemberMax )
        {
          if ( v8 )
          {
            if ( v13 < LODWORD(v8->_1.namespaze) )
            {
              *((_BYTE *)&v8->_1.byval_arg.data + v13++) = 1;
              continue;
            }
LABEL_68:
            sub_1C2D6F4(v4, v5, v6);
          }
          goto LABEL_67;
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = this->fields.targetVals;
          if ( !v19 )
            break;
          if ( v18 >= LODWORD(v19->max_length) )
            goto LABEL_68;
          v20 = v19->m_Items[v18];
          v21 = v20 - 1;
          if ( v20 >= 1 )
          {
            if ( !v4->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v4);
              v4 = BalanceConfig_TypeInfo;
            }
            if ( v20 <= v4->static_fields->DeckMemberMax )
            {
              if ( !v8 )
                break;
              if ( v21 >= LODWORD(v8->_1.namespaze) )
                goto LABEL_68;
              *((_BYTE *)&v8->_1.byval_arg.data + v21) = 0;
            }
          }
          if ( max_length == ++v18 )
            return (System_Boolean_array *)v8;
        }
LABEL_67:
        sub_1C2D6EC(v4, v5);
      }
      return (System_Boolean_array *)v8;
    case 3:
      if ( max_length < 1 )
        return (System_Boolean_array *)v8;
      if ( !targetVals )
        goto LABEL_67;
      if ( !LODWORD(targetVals->max_length) )
        goto LABEL_68;
      v14 = targetVals->m_Items[0];
      v4 = BalanceConfig_TypeInfo;
      v15 = 0;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v15 >= v4->static_fields->DeckMemberMax )
          return (System_Boolean_array *)v8;
        if ( v15 < v14 )
          goto LABEL_41;
        if ( !v8 )
          goto LABEL_67;
        if ( v15 < (unsigned __int64)LODWORD(v8->_1.namespaze) )
        {
          *((_BYTE *)&v8->_1.byval_arg.data + v15) = 1;
LABEL_41:
          ++v15;
          continue;
        }
        goto LABEL_68;
      }
    case 4:
      if ( max_length < 1 )
        return (System_Boolean_array *)v8;
      if ( !targetVals )
        goto LABEL_67;
      if ( !LODWORD(targetVals->max_length) )
        goto LABEL_68;
      v16 = targetVals->m_Items[0];
      v4 = BalanceConfig_TypeInfo;
      v17 = 0;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v17 >= v4->static_fields->DeckMemberMax )
          return (System_Boolean_array *)v8;
        if ( v17 >= v16 )
          goto LABEL_53;
        if ( !v8 )
          goto LABEL_67;
        if ( v17 < (unsigned __int64)LODWORD(v8->_1.namespaze) )
        {
          *((_BYTE *)&v8->_1.byval_arg.data + v17) = 1;
LABEL_53:
          ++v17;
          continue;
        }
        goto LABEL_68;
      }
    default:
      return (System_Boolean_array *)v8;
  }
}


System_String_o *RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RestrictionEntity_o *v3; // x19
  __int64 *v4; // x8
  struct System_Int32_array *targetVals; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v7; // w21
  System_String_o *v8; // x0
  System_String_o *v10; // x0
  System_String_o *name; // x19
  System_String_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4C27AA5 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6445/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/);
    sub_1C2D490(&StringLiteral_6446/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/);
    sub_1C2D490(&StringLiteral_6447/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/);
    sub_1C2D490(&StringLiteral_6449/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/);
    sub_1C2D490(&StringLiteral_6443/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/);
    sub_1C2D490(&StringLiteral_6442/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/);
    sub_1C2D490(&StringLiteral_6450/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C2D490(&StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    this = (RestrictionEntity_o *)sub_1C2D490(&StringLiteral_6444/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/);
    byte_4C27AA5 = 1;
  }
  switch ( v3->fields.type )
  {
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6447/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6449/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_32;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6444/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_32;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6442/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_32;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6443/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_32;
    case 0xA:
      targetVals = v3->fields.targetVals;
      if ( targetVals && (max_length = targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)max_length )
          sub_1C2D6F4(this, method, v2);
        v7 = targetVals->m_Items[0];
      }
      else
      {
        v7 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6446/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0);
      name = v3->fields.name;
      v12 = v10;
      v18 = v7;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v13, v14, v15);
      v17 = (Il2CppObject *)System_String__Format(name, v16, 0);
      return System_String__Format(v12, v17, 0);
    case 0xB:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6445/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_32;
    case 0xF:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6450/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_32;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v4 = &StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_32:
      v8 = LocalizationManager__Get((System_String_o *)*v4, 0);
      return System_String__Format(v8, (Il2CppObject *)v3->fields.name, 0);
  }
}


int32_t RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *targetVals; // x8
  il2cpp_array_size_t max_length; // x9

  if ( this->fields.type != 3 )
    return 0;
  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  max_length = targetVals->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C2D6F4(this, method, v2);
  return targetVals->m_Items[0];
}


void RestrictionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27AAC & 1) == 0 )
  {
    sub_1C2D490(&RestrictionEntity___c_TypeInfo);
    byte_4C27AAC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)RestrictionEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void RestrictionEntity___c___ctor(RestrictionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__19_0(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  return t;
}


System_String_o *RestrictionEntity___c___GetClassIndividualityRestrictionMessage_b__19_1(
        RestrictionEntity___c_o *this,
        int32_t t,
        const MethodInfo *method)
{
  System_Enum_o v5; // [xsp+8h] [xbp-38h] BYREF
  int32_t v6; // [xsp+18h] [xbp-28h]

  if ( (byte_4C27AAD & 1) == 0 )
  {
    sub_1C2D490(&Restriction_TargetType_TypeInfo);
    byte_4C27AAD = 1;
  }
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = t;
  return System_Enum__ToString(&v5, 0);
}