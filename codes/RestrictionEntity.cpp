void RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C381AD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C381AD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
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
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  unsigned __int64 v8; // x22
  UserServantGrandEntity_o *v9; // x8
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C381AC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4C381AC = 1;
  }
  entity = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userServantGrandEntities, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !userServantGrandEntities )
LABEL_20:
    sub_1C32E7C(Master_object);
  max_length = userServantGrandEntities->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C32E84(Master_object);
    v9 = userServantGrandEntities->m_Items[v8];
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_20;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v7,
                                        &entity,
                                        v9->fields.svtId,
                                        (const MethodInfo_3396884 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_20;
        if ( !RestrictionEntity__IsRestriction_42482652(this, (System_Int32_array *)entity[11].klass, v10) )
          return 1;
        Master_object = (Il2CppObject *)RestrictionEntity__IsSearchVals(this, 0, v11);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          return 1;
      }
    }
    LODWORD(max_length) = userServantGrandEntities->max_length;
    if ( (__int64)++v8 >= (int)max_length )
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  RestrictionEntity_o *v8; // x19
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  RestrictionEntity___c_c *v14; // x0
  System_Func_int__int__o *_9__19_0; // x22
  Il2CppObject *v16; // x23
  struct RestrictionEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  RestrictionEntity___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_T__TResult__o *_9__19_1; // x22
  Il2CppObject *v24; // x23
  struct RestrictionEntity___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_string__o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  System_String_o *v38; // x19
  System_String_o *v39; // x19
  Il2CppObject *v40; // x20
  Il2CppObject *v41; // x0
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_4C381A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C32C20(&System_Func_int__int__TypeInfo);
    sub_1C32C20(&System_Func_int__string__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Restriction_RangeType_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_0__);
    sub_1C32C20(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_1__);
    sub_1C32C20(&RestrictionEntity___c_TypeInfo);
    sub_1C32C20(&StringLiteral_16107/*"_"*/);
    sub_1C32C20(&StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/);
    sub_1C32C20(&StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/);
    this = (RestrictionEntity_o *)sub_1C32C20(&StringLiteral_11591/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/);
    byte_4C381A9 = 1;
  }
  targetVals = v8->fields.targetVals;
  if ( !targetVals )
    sub_1C32E7C(this);
  if ( LODWORD(targetVals->max_length) != 1 )
    return string_TypeInfo->static_fields->Empty;
  targetVals2 = v8->fields.targetVals2;
  if ( !targetVals2 || !targetVals2->max_length )
    return string_TypeInfo->static_fields->Empty;
  v44 = targetVals->m_Items[0];
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v2, v3, v4, v5, v6, v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_11591/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v11, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v12, 0) )
    return string_TypeInfo->static_fields->Empty;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetVals2;
  v14 = RestrictionEntity___c_TypeInfo;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v14 = RestrictionEntity___c_TypeInfo;
  }
  _9__19_0 = v14->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = RestrictionEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__19_0 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__19_0,
      v16,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_0__,
      0);
    static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__OrderBy_int__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__19_0,
          (const MethodInfo_310C994 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v21 = RestrictionEntity___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !RestrictionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo);
    v21 = RestrictionEntity___c_TypeInfo;
  }
  _9__19_1 = (System_Func_T__TResult__o *)v21->static_fields->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = RestrictionEntity___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__19_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__19_1,
      v24,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_1__,
      0);
    v25 = RestrictionEntity___c_TypeInfo->static_fields;
    v25->__9__19_1 = (struct System_Func_int__string__o *)_9__19_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v25->__9__19_1, (int32_t)_9__19_1, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v22,
                                                              (System_Func_TSource__TResult__o *)_9__19_1,
                                                              (const MethodInfo_3110E00 *)Method_System_Linq_Enumerable_Select_int__string___);
  v29 = System_String__Join_63561120((System_String_o *)StringLiteral_16107/*"_"*/, v28, 0);
  v30 = System_String__Concat_63518544((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v29, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v30, 0) )
    return string_TypeInfo->static_fields->Empty;
  rangeType = v8->fields.rangeType;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType, v31, v32, v33, v34, v35, v36);
  v38 = System_String__Format((System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v37, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !LocalizationManager__ContainsKey(v38, 0) )
    return string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get(v38, 0);
  v40 = (Il2CppObject *)LocalizationManager__Get(v12, 0);
  v41 = (Il2CppObject *)LocalizationManager__Get(v30, 0);
  return System_String__Format_63559836(v39, v40, v41, 0);
}


System_String_o *RestrictionEntity__GetGrandRestrictionLabelKey(
        RestrictionEntity_o *this,
        System_Int32_array *classIndividuality,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  _BOOL8 EntityByIndividuality; // x0
  __int64 *v6; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  ServantClassEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C381AB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9329/*"NO_GRAND_SVT_CONFIRM_EXTRA1"*/);
    sub_1C32C20(&StringLiteral_9330/*"NO_GRAND_SVT_CONFIRM_EXTRA2"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C381AB = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ServantClassMaster___);
  EntityByIndividuality = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)classIndividuality,
                            107,
                            (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( EntityByIndividuality )
  {
    if ( !classIndividuality )
      goto LABEL_28;
    if ( SLODWORD(classIndividuality->max_length) >= 2 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_9329/*"NO_GRAND_SVT_CONFIRM_EXTRA1"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
  }
  EntityByIndividuality = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)classIndividuality,
                            109,
                            (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( EntityByIndividuality )
  {
    if ( !classIndividuality )
      goto LABEL_28;
    if ( SLODWORD(classIndividuality->max_length) > 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v6 = &StringLiteral_9330/*"NO_GRAND_SVT_CONFIRM_EXTRA2"*/;
      return LocalizationManager__Get((System_String_o *)*v6, 0);
    }
  }
  else if ( !classIndividuality )
  {
    goto LABEL_28;
  }
  max_length = classIndividuality->max_length;
  if ( (int)max_length < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C32E84(EntityByIndividuality);
    if ( !Master_object )
      goto LABEL_28;
    EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                              (ServantClassMaster_o *)Master_object,
                              &entity,
                              classIndividuality->m_Items[v8],
                              0);
    if ( EntityByIndividuality )
      break;
    LODWORD(max_length) = classIndividuality->max_length;
    if ( (__int64)++v8 >= (int)max_length )
      return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !entity )
LABEL_28:
    sub_1C32E7C(EntityByIndividuality);
  return entity->fields.name;
}


int32_t RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
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
    sub_1C32E84(this);
  return targetVals2->m_Items[0];
}


bool RestrictionEntity__IsGrandRestrictionViolated(RestrictionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_ICollection_o *Entitys; // x0
  const MethodInfo *v5; // x2
  int32_t type; // w8

  if ( (byte_4C381AA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    byte_4C381AA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_1C32E7C(0);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_339A574 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  type = this->fields.type;
  if ( type == 23 )
    return BasicHelper__IsNullOrEmpty(Entitys, 0);
  return (type == 22 || type == 21)
      && !RestrictionEntity__ExistsRestrictionGrandServant(this, (UserServantGrandEntity_array *)Entitys, v5);
}


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
          sub_1C32E84(this);
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

  if ( (byte_4C381A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C381A6 = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool RestrictionEntity__IsRestriction_42482652(
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
      return !RestrictionEntity__IsSearchVals_42482328(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_42482328(this, vList, method);
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
          sub_1C32E84(this);
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
        sub_1C32E84(this);
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


bool RestrictionEntity__IsSearchVals_42482328(
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
            sub_1C32E84(0);
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
  struct System_Int32_array *targetVals; // x8
  BalanceConfig_c *v6; // x19
  int max_length; // w22
  unsigned __int64 v8; // x23
  int v9; // w26
  unsigned int v10; // w25
  unsigned __int64 v11; // x23
  signed __int64 v12; // x22
  signed __int64 v13; // x20
  signed __int64 v14; // x22
  signed __int64 v15; // x20
  unsigned __int64 v16; // x23
  struct System_Int32_array *v17; // x8
  int v18; // w25
  unsigned int v19; // w24

  if ( (byte_4C381A8 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&bool___TypeInfo);
    byte_4C381A8 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_1C32CC8(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v6 = v4;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return (System_Boolean_array *)v6;
      if ( !targetVals )
        goto LABEL_67;
      v8 = 0;
      while ( v8 < LODWORD(targetVals->max_length) )
      {
        v9 = targetVals->m_Items[v8];
        v10 = v9 - 1;
        if ( v9 >= 1 )
        {
          v4 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( v9 <= v4->static_fields->DeckMemberMax )
          {
            if ( !v6 )
              goto LABEL_67;
            if ( v10 >= LODWORD(v6->_1.namespaze) )
              goto LABEL_68;
            *((_BYTE *)&v6->_1.byval_arg.data + v10) = 1;
          }
        }
        if ( max_length == ++v8 )
          return (System_Boolean_array *)v6;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_67;
      }
      goto LABEL_68;
    case 2:
      v4 = BalanceConfig_TypeInfo;
      v11 = 0;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v11 < v4->static_fields->DeckMemberMax )
        {
          if ( v6 )
          {
            if ( v11 < LODWORD(v6->_1.namespaze) )
            {
              *((_BYTE *)&v6->_1.byval_arg.data + v11++) = 1;
              continue;
            }
LABEL_68:
            sub_1C32E84(v4);
          }
          goto LABEL_67;
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = this->fields.targetVals;
          if ( !v17 )
            break;
          if ( v16 >= LODWORD(v17->max_length) )
            goto LABEL_68;
          v18 = v17->m_Items[v16];
          v19 = v18 - 1;
          if ( v18 >= 1 )
          {
            if ( !v4->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v4);
              v4 = BalanceConfig_TypeInfo;
            }
            if ( v18 <= v4->static_fields->DeckMemberMax )
            {
              if ( !v6 )
                break;
              if ( v19 >= LODWORD(v6->_1.namespaze) )
                goto LABEL_68;
              *((_BYTE *)&v6->_1.byval_arg.data + v19) = 0;
            }
          }
          if ( max_length == ++v16 )
            return (System_Boolean_array *)v6;
        }
LABEL_67:
        sub_1C32E7C(v4);
      }
      return (System_Boolean_array *)v6;
    case 3:
      if ( max_length < 1 )
        return (System_Boolean_array *)v6;
      if ( !targetVals )
        goto LABEL_67;
      if ( !LODWORD(targetVals->max_length) )
        goto LABEL_68;
      v12 = targetVals->m_Items[0];
      v4 = BalanceConfig_TypeInfo;
      v13 = 0;
      while ( 2 )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v13 >= v4->static_fields->DeckMemberMax )
          return (System_Boolean_array *)v6;
        if ( v13 < v12 )
          goto LABEL_41;
        if ( !v6 )
          goto LABEL_67;
        if ( v13 < (unsigned __int64)LODWORD(v6->_1.namespaze) )
        {
          *((_BYTE *)&v6->_1.byval_arg.data + v13) = 1;
LABEL_41:
          ++v13;
          continue;
        }
        goto LABEL_68;
      }
    case 4:
      if ( max_length < 1 )
        return (System_Boolean_array *)v6;
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
          return (System_Boolean_array *)v6;
        if ( v15 >= v14 )
          goto LABEL_53;
        if ( !v6 )
          goto LABEL_67;
        if ( v15 < (unsigned __int64)LODWORD(v6->_1.namespaze) )
        {
          *((_BYTE *)&v6->_1.byval_arg.data + v15) = 1;
LABEL_53:
          ++v15;
          continue;
        }
        goto LABEL_68;
      }
    default:
      return (System_Boolean_array *)v6;
  }
}


System_String_o *RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *v2; // x19
  __int64 *v3; // x8
  struct System_Int32_array *targetVals; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v6; // w21
  System_String_o *v7; // x0
  System_String_o *v9; // x0
  System_String_o *name; // x19
  System_String_o *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4C381A7 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6450/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/);
    sub_1C32C20(&StringLiteral_6451/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/);
    sub_1C32C20(&StringLiteral_6452/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/);
    sub_1C32C20(&StringLiteral_6454/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/);
    sub_1C32C20(&StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/);
    sub_1C32C20(&StringLiteral_6447/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/);
    sub_1C32C20(&StringLiteral_6455/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_1C32C20(&StringLiteral_6453/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    this = (RestrictionEntity_o *)sub_1C32C20(&StringLiteral_6449/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/);
    byte_4C381A7 = 1;
  }
  switch ( v2->fields.type )
  {
    case 5:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6452/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_32;
    case 6:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6454/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_32;
    case 7:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6449/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_32;
    case 8:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6447/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_32;
    case 9:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6448/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_32;
    case 0xA:
      targetVals = v2->fields.targetVals;
      if ( targetVals && (max_length = targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)max_length )
          sub_1C32E84(this);
        v6 = targetVals->m_Items[0];
      }
      else
      {
        v6 = 0;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6451/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0);
      name = v2->fields.name;
      v11 = v9;
      v20 = v6;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v12, v13, v14, v15, v16, v17);
      v19 = (Il2CppObject *)System_String__Format(name, v18, 0);
      return System_String__Format(v11, v19, 0);
    case 0xB:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6450/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_32;
    case 0xF:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6455/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_32;
    default:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v3 = &StringLiteral_6453/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_32:
      v7 = LocalizationManager__Get((System_String_o *)*v3, 0);
      return System_String__Format(v7, (Il2CppObject *)v2->fields.name, 0);
  }
}


int32_t RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
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
    sub_1C32E84(this);
  return targetVals->m_Items[0];
}


void RestrictionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C381AE & 1) == 0 )
  {
    sub_1C32C20(&RestrictionEntity___c_TypeInfo);
    byte_4C381AE = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)RestrictionEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C381AF & 1) == 0 )
  {
    sub_1C32C20(&Restriction_TargetType_TypeInfo);
    byte_4C381AF = 1;
  }
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  v6 = t;
  return System_Enum__ToString(&v5, 0);
}