void RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938EE4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938EE4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  unsigned __int64 v10; // x22
  UserServantGrandEntity_o *v11; // x8
  const MethodInfo *v12; // x2
  struct System_Int32_array *targetVals; // x9
  __int64 v14; // x8
  int32_t *m_Items; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938EE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_5938EE3 = 1;
  }
  entity = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userServantGrandEntities, 0) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !userServantGrandEntities )
LABEL_23:
    sub_21FFECC(Master_object, v7);
  max_length = userServantGrandEntities->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)max_length )
      sub_21FFED4(Master_object);
    v11 = userServantGrandEntities->m_Items[v10];
    if ( v11 )
    {
      if ( !v9 )
        goto LABEL_23;
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        v9,
                                        &entity,
                                        v11->fields.svtId,
                                        (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_23;
        Master_object = (Il2CppObject *)RestrictionEntity__IsRestriction_49549644(
                                          this,
                                          (System_Int32_array *)entity[11].klass,
                                          v12);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
          return 1;
        targetVals = this->fields.targetVals;
        if ( targetVals )
        {
          if ( (int)targetVals->max_length >= 1 )
            break;
        }
      }
    }
LABEL_20:
    LODWORD(max_length) = userServantGrandEntities->max_length;
    if ( (__int64)++v10 >= (int)max_length )
      return 0;
  }
  v14 = (unsigned int)targetVals->max_length;
  m_Items = targetVals->m_Items;
  while ( 1 )
  {
    if ( !*m_Items++ )
      return 1;
    if ( !--v14 )
      goto LABEL_20;
  }
}


System_String_o *RestrictionEntity__GetClassIndividualityRestrictionMessage(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  RestrictionEntity_o *v2; // x19
  struct System_Int32_array *targetVals; // x8
  struct System_Int32_array *targetVals2; // x9
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  RestrictionEntity___c_c *v10; // x0
  struct RestrictionEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__19_0; // x22
  Il2CppObject *v13; // x23
  struct RestrictionEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  RestrictionEntity___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  struct RestrictionEntity___c_StaticFields *v25; // x9
  System_Func_T__TResult__o *_9__19_1; // x22
  Il2CppObject *v27; // x23
  struct RestrictionEntity___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_string__o *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x21
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  System_String_o *v41; // x19
  __int64 v42; // x1
  System_String_o *v43; // x19
  Il2CppObject *v44; // x20
  Il2CppObject *v45; // x0
  __int64 v47; // x8
  int32_t rangeType; // [xsp+8h] [xbp-48h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_5938EE0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_21FFC50(&System_Func_int__int__TypeInfo);
    sub_21FFC50(&System_Func_int__string__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Restriction_RangeType_TypeInfo);
    sub_21FFC50(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_0__);
    sub_21FFC50(&Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_1__);
    sub_21FFC50(&RestrictionEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_16714/*"_"*/);
    sub_21FFC50(&StringLiteral_10682/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/);
    sub_21FFC50(&StringLiteral_10683/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/);
    this = (RestrictionEntity_o *)sub_21FFC50(&StringLiteral_12077/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/);
    byte_5938EE0 = 1;
  }
  targetVals = v2->fields.targetVals;
  if ( !targetVals )
    sub_21FFECC(this, method);
  if ( LODWORD(targetVals->max_length) != 1 || (targetVals2 = v2->fields.targetVals2) == 0 || !targetVals2->max_length )
  {
    v47 = qword_594C0B8;
    return **(System_String_o ***)(v47 + 184);
  }
  v49 = targetVals->m_Items[0];
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v49);
  v7 = System_String__Format((System_String_o *)StringLiteral_12077/*"SERVANT_CLASS_INDIVIDUALITY_{0}"*/, v5, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  if ( !LocalizationManager__ContainsKey(v7, 0) )
    goto LABEL_33;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.targetVals2;
  v10 = RestrictionEntity___c_TypeInfo;
  if ( !*(&RestrictionEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo, v8);
    v10 = RestrictionEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__19_0 = static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = RestrictionEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_int__int__o *)sub_21FFEBC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(
      _9__19_0,
      v13,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_0__,
      0);
    v14 = RestrictionEntity___c_TypeInfo->static_fields;
    v14->__9__19_0 = _9__19_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__19_0, (int32_t)_9__19_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = System_Linq_Enumerable__OrderBy_int__int_(
          v9,
          (System_Func_TSource__TKey__o *)_9__19_0,
          (const MethodInfo_3855438 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  v23 = RestrictionEntity___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !*(&RestrictionEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RestrictionEntity___c_TypeInfo, v22);
    v23 = RestrictionEntity___c_TypeInfo;
  }
  v25 = v23->static_fields;
  _9__19_1 = (System_Func_T__TResult__o *)v25->__9__19_1;
  if ( !_9__19_1 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v22);
      v25 = RestrictionEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v25->__9;
    _9__19_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(
      _9__19_1,
      v27,
      Method_RestrictionEntity___c__GetClassIndividualityRestrictionMessage_b__19_1__,
      0);
    v28 = RestrictionEntity___c_TypeInfo->static_fields;
    v28->__9__19_1 = (struct System_Func_int__string__o *)_9__19_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__19_1, (int32_t)_9__19_1, v29, v30, v31, v32, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_string__o *)System_Linq_Enumerable__Select_int__object_(
                                                              v24,
                                                              (System_Func_TSource__TResult__o *)_9__19_1,
                                                              (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__string___);
  v36 = System_String__Join_75485788((System_String_o *)StringLiteral_16714/*"_"*/, v35, 0);
  v38 = System_String__Concat_75438412((System_String_o *)StringLiteral_10682/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_"*/, v36, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
  if ( !LocalizationManager__ContainsKey(v38, 0) )
    goto LABEL_33;
  rangeType = v2->fields.rangeType;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(Restriction_RangeType_TypeInfo, &rangeType);
  v41 = System_String__Format((System_String_o *)StringLiteral_10683/*"PARTY_ORGANIZATION_RESTRICTION_HELP_MESSAGE_CLASS_INDIVIDUALITY_{0}"*/, v39, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  if ( !LocalizationManager__ContainsKey(v41, 0) )
  {
LABEL_33:
    v47 = qword_594C0B8;
    return **(System_String_o ***)(v47 + 184);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v42);
  v43 = LocalizationManager__Get(v41, 0);
  v44 = (Il2CppObject *)LocalizationManager__Get(v7, 0);
  v45 = (Il2CppObject *)LocalizationManager__Get(v38, 0);
  return System_String__Format_75484576(v43, v44, v45, 0);
}


System_String_o *RestrictionEntity__GetGrandRestrictionLabelKey(
        RestrictionEntity_o *this,
        System_Int32_array *classIndividuality,
        const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x20
  _BOOL8 EntityByIndividuality; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  __int64 *v9; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x21
  ServantClassEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938EE2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9702/*"NO_GRAND_SVT_CONFIRM_EXTRA1"*/);
    sub_21FFC50(&StringLiteral_9703/*"NO_GRAND_SVT_CONFIRM_EXTRA2"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938EE2 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, classIndividuality);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
  EntityByIndividuality = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)classIndividuality,
                            107,
                            (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( EntityByIndividuality )
  {
    if ( !classIndividuality )
      goto LABEL_28;
    if ( SLODWORD(classIndividuality->max_length) >= 2 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v9 = &StringLiteral_9702/*"NO_GRAND_SVT_CONFIRM_EXTRA1"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
  }
  EntityByIndividuality = System_Linq_Enumerable__Contains_int_(
                            (System_Collections_Generic_IEnumerable_TSource__o *)classIndividuality,
                            109,
                            (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  if ( EntityByIndividuality )
  {
    if ( !classIndividuality )
      goto LABEL_28;
    if ( SLODWORD(classIndividuality->max_length) > 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v9 = &StringLiteral_9703/*"NO_GRAND_SVT_CONFIRM_EXTRA2"*/;
      return LocalizationManager__Get((System_String_o *)*v9, 0);
    }
  }
  else if ( !classIndividuality )
  {
    goto LABEL_28;
  }
  max_length = classIndividuality->max_length;
  if ( (int)max_length < 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)max_length )
      sub_21FFED4(EntityByIndividuality);
    if ( !Master_object )
      goto LABEL_28;
    EntityByIndividuality = ServantClassMaster__TryGetEntityByIndividuality(
                              (ServantClassMaster_o *)Master_object,
                              &entity,
                              classIndividuality->m_Items[v11],
                              v8);
    if ( EntityByIndividuality )
      break;
    LODWORD(max_length) = classIndividuality->max_length;
    if ( (__int64)++v11 >= (int)max_length )
      return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !entity )
LABEL_28:
    sub_21FFECC(EntityByIndividuality, v7);
  return entity->fields.name;
}


int32_t RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  il2cpp_array_size_t max_length; // x9
  struct System_Int32_array *v6; // x8
  il2cpp_array_size_t v7; // x9
  unsigned int v8; // w8

  type = this->fields.type;
  if ( type == 12 )
    goto LABEL_4;
  if ( type != 24 )
  {
    if ( type != 16 )
      return 0;
LABEL_4:
    targetVals2 = this->fields.targetVals2;
    if ( targetVals2 )
    {
      max_length = targetVals2->max_length;
      if ( max_length )
      {
        if ( (_DWORD)max_length )
          return targetVals2->m_Items[0];
LABEL_16:
        sub_21FFED4(this);
      }
    }
    return 0;
  }
  v6 = this->fields.targetVals2;
  if ( !v6 )
    return 1;
  v7 = v6->max_length;
  if ( !v7 )
    return 1;
  if ( !(_DWORD)v7 )
    goto LABEL_16;
  v8 = v6->m_Items[0];
  if ( v8 <= 1 )
    return 1;
  else
    return v8;
}


System_String_o *RestrictionEntity__GetTitle(
        RestrictionEntity_o *this,
        System_String_o *titleName,
        const MethodInfo *method)
{
  RestrictionEntity_o *v4; // x20
  int type; // w8
  __int64 *v6; // x8
  struct System_Int32_array *targetVals; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v9; // w21
  System_String_o *v10; // x0
  System_String_o *v12; // x20
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_5938EDE & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6724/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/);
    sub_21FFC50(&StringLiteral_6725/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/);
    sub_21FFC50(&StringLiteral_6726/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/);
    sub_21FFC50(&StringLiteral_6728/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/);
    sub_21FFC50(&StringLiteral_6722/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/);
    sub_21FFC50(&StringLiteral_6721/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/);
    sub_21FFC50(&StringLiteral_6729/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_21FFC50(&StringLiteral_6727/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    this = (RestrictionEntity_o *)sub_21FFC50(&StringLiteral_6723/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/);
    byte_5938EDE = 1;
  }
  type = v4->fields.type;
  if ( type <= 8 )
  {
    if ( type > 6 )
    {
      if ( type == 7 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
        v6 = &StringLiteral_6723/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
        v6 = &StringLiteral_6721/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      }
      goto LABEL_40;
    }
    if ( type == 5 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
      v6 = &StringLiteral_6726/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_40;
    }
    if ( type == 6 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
      v6 = &StringLiteral_6728/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
LABEL_40:
      v10 = LocalizationManager__Get((System_String_o *)*v6, 0);
      return System_String__Format(v10, (Il2CppObject *)titleName, 0);
    }
LABEL_37:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
    v6 = &StringLiteral_6727/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
    goto LABEL_40;
  }
  if ( type > 10 )
  {
    if ( type == 11 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
      v6 = &StringLiteral_6724/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_40;
    }
    if ( type == 15 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
      v6 = &StringLiteral_6729/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  if ( type == 9 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
    v6 = &StringLiteral_6722/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
    goto LABEL_40;
  }
  targetVals = v4->fields.targetVals;
  if ( targetVals && (max_length = targetVals->max_length) != 0 )
  {
    if ( !(_DWORD)max_length )
      sub_21FFED4(this);
    v9 = targetVals->m_Items[0];
  }
  else
  {
    v9 = 0;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, titleName);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6725/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0);
  v15 = v9;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v15);
  v14 = (Il2CppObject *)System_String__Format(titleName, v13, 0);
  return System_String__Format(v12, v14, 0);
}


bool RestrictionEntity__IsGrandRestrictionViolated(RestrictionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_ICollection_o *Entitys; // x0
  const MethodInfo *v6; // x2
  int32_t type; // w8

  if ( (byte_5938EE1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
    byte_5938EE1 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v4);
  Entitys = (System_Collections_ICollection_o *)DataMasterBase_object__object__object___getEntitys(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  (const MethodInfo_3EE13C0 *)Method_DataMasterBase_UserServantGrandMaster__UserServantGrandEntity__string__getEntitys__);
  type = this->fields.type;
  if ( type == 23 )
    return BasicHelper__IsNullOrEmpty(Entitys, 0);
  return (type == 22 || type == 21)
      && !RestrictionEntity__ExistsRestrictionGrandServant(this, (UserServantGrandEntity_array *)Entitys, v6);
}


bool RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  int32_t rangeType; // w9
  bool result; // w0
  struct System_Int32_array *v6; // x8
  il2cpp_array_size_t v7; // x9
  int32_t *m_Items; // x8
  __int64 v9; // x9
  int v10; // t1
  struct System_Int32_array *v12; // x8
  il2cpp_array_size_t v13; // x9
  struct System_Int32_array *v14; // x9
  il2cpp_array_size_t v15; // x8
  int32_t *v16; // x9
  __int64 v17; // x8
  int v18; // w11
  int v19; // t1
  bool v21; // w10
  struct System_Int32_array *targetVals; // x8
  il2cpp_array_size_t max_length; // x9

  rangeType = this->fields.rangeType;
  result = 0;
  if ( rangeType > 2 )
  {
    if ( rangeType == 3 )
    {
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        return 1;
      max_length = targetVals->max_length;
      if ( !max_length )
        return 1;
      if ( (_DWORD)max_length )
        return targetVals->m_Items[0] > v;
    }
    else
    {
      if ( rangeType != 4 )
        return result;
      v12 = this->fields.targetVals;
      if ( !v12 )
        return 1;
      v13 = v12->max_length;
      if ( !v13 )
        return 1;
      if ( (_DWORD)v13 )
        return v12->m_Items[0] < v;
    }
    sub_21FFED4(0);
  }
  if ( rangeType != 1 )
  {
    if ( rangeType == 2 )
    {
      v6 = this->fields.targetVals;
      if ( v6 && (v7 = v6->max_length, (int)v7 >= 1) )
      {
        m_Items = v6->m_Items;
        v9 = (unsigned int)v7 - 1LL;
        do
        {
          v10 = *m_Items++;
          result = v10 == v;
          if ( v10 == v )
            break;
        }
        while ( v9-- );
      }
      else
      {
        return 0;
      }
    }
    return result;
  }
  v14 = this->fields.targetVals;
  if ( !v14 )
    return 1;
  v15 = v14->max_length;
  if ( (int)v15 < 1 )
    return 1;
  v16 = v14->m_Items;
  v17 = (unsigned int)v15 - 1LL;
  do
  {
    v19 = *v16++;
    v18 = v19;
    v21 = v17-- != 0;
    result = v18 != v;
  }
  while ( v18 != v && v21 );
  return result;
}


bool RestrictionEntity__IsRestrictionTarget(RestrictionEntity_o *this, int32_t targetType, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_5938EDD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5938EDD = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool RestrictionEntity__IsRestriction_49549644(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  int32_t rangeType; // w9
  bool v4; // w8
  struct System_Int32_array *v6; // x9
  il2cpp_array_size_t v7; // x10
  il2cpp_array_size_t v8; // x8
  struct System_Int32_array *targetVals; // x9
  il2cpp_array_size_t max_length; // x10
  il2cpp_array_size_t v11; // x8

  rangeType = this->fields.rangeType;
  v4 = 0;
  if ( rangeType > 2 )
  {
    if ( rangeType == 3 )
    {
      targetVals = this->fields.targetVals;
      if ( targetVals )
      {
        v4 = 1;
        if ( !vList )
          return v4;
        max_length = targetVals->max_length;
        if ( !max_length )
          return v4;
        v11 = vList->max_length;
        if ( v11 )
        {
          if ( (_DWORD)v11 && (_DWORD)max_length )
            return vList->m_Items[0] < targetVals->m_Items[0];
          goto LABEL_24;
        }
      }
    }
    else
    {
      if ( rangeType != 4 )
        return v4;
      v6 = this->fields.targetVals;
      if ( v6 )
      {
        v4 = 1;
        if ( !vList )
          return v4;
        v7 = v6->max_length;
        if ( !v7 )
          return v4;
        v8 = vList->max_length;
        if ( v8 )
        {
          if ( (_DWORD)v8 && (_DWORD)v7 )
            return vList->m_Items[0] > v6->m_Items[0];
LABEL_24:
          sub_21FFED4(this);
        }
      }
    }
    return 1;
  }
  if ( rangeType == 1 )
  {
    return !RestrictionEntity__IsSearchVals_49549240(this, vList, method);
  }
  else if ( rangeType == 2 )
  {
    return RestrictionEntity__IsSearchVals_49549240(this, vList, method);
  }
  return v4;
}


bool RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x8
  int max_length; // w9
  bool v5; // vf
  int v6; // w9
  int32_t *m_Items; // x8
  int v8; // t1
  bool result; // w0

  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  max_length = targetVals->max_length;
  v5 = __OFSUB__(max_length, 1);
  v6 = max_length - 1;
  if ( v6 < 0 != v5 )
    return 0;
  m_Items = targetVals->m_Items;
  do
  {
    v8 = *m_Items++;
    result = v8 == v;
    if ( v8 == v )
      break;
  }
  while ( v6-- );
  return result;
}


bool RestrictionEntity__IsSearchVals_49549240(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x8
  bool result; // w0
  __int64 v5; // x9
  int max_length; // w14
  int32_t *m_Items; // x15
  int v8; // t1

  targetVals = this->fields.targetVals;
  result = 0;
  if ( targetVals && vList )
  {
    if ( (int)targetVals->max_length < 1 )
    {
      return 0;
    }
    else
    {
      v5 = 0;
      while ( SLODWORD(vList->max_length) < 1 )
      {
LABEL_9:
        ++v5;
        result = 0;
        if ( v5 == (unsigned int)targetVals->max_length )
          return result;
      }
      max_length = vList->max_length;
      m_Items = vList->m_Items;
      while ( 1 )
      {
        v8 = *m_Items++;
        if ( targetVals->m_Items[v5] == v8 )
          return 1;
        if ( !--max_length )
          goto LABEL_9;
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
  struct System_Int32_array *targetVals; // x8
  BalanceConfig_c *v7; // x19
  int max_length; // w22
  int32_t rangeType; // w9
  unsigned __int64 k; // x23
  signed __int64 v11; // x22
  signed __int64 j; // x20
  unsigned __int64 v13; // x23
  struct System_Int32_array *v14; // x8
  int v15; // w26
  unsigned int v16; // w25
  signed __int64 v17; // x22
  signed __int64 i; // x20
  unsigned __int64 v19; // x23
  struct System_Int32_array *v20; // x8
  int v21; // w25
  unsigned int v22; // w24

  if ( (byte_5938EDF & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&bool___TypeInfo);
    byte_5938EDF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_21FFD10(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v7 = v4;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  rangeType = this->fields.rangeType;
  if ( rangeType > 2 )
  {
    if ( rangeType == 3 )
    {
      if ( max_length < 1 )
        return (System_Boolean_array *)v7;
      if ( !targetVals )
        goto LABEL_70;
      if ( LODWORD(targetVals->max_length) )
      {
        v17 = targetVals->m_Items[0];
        v4 = BalanceConfig_TypeInfo;
        for ( i = 0; ; ++i )
        {
          if ( !*(&v4->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v4, v5);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( i >= v4->static_fields->DeckMemberMax )
            break;
          if ( i >= v17 )
          {
            if ( !v7 )
              goto LABEL_70;
            if ( i >= (unsigned __int64)LODWORD(v7->_1.namespaze) )
              goto LABEL_71;
            *((_BYTE *)&v7->_1.byval_arg.data + i) = 1;
          }
        }
        return (System_Boolean_array *)v7;
      }
    }
    else
    {
      if ( rangeType != 4 || max_length < 1 )
        return (System_Boolean_array *)v7;
      if ( !targetVals )
        goto LABEL_70;
      if ( LODWORD(targetVals->max_length) )
      {
        v11 = targetVals->m_Items[0];
        v4 = BalanceConfig_TypeInfo;
        for ( j = 0; ; ++j )
        {
          if ( !*(&v4->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v4, v5);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( j >= v4->static_fields->DeckMemberMax )
            break;
          if ( j < v11 )
          {
            if ( !v7 )
              goto LABEL_70;
            if ( j >= (unsigned __int64)LODWORD(v7->_1.namespaze) )
              goto LABEL_71;
            *((_BYTE *)&v7->_1.byval_arg.data + j) = 1;
          }
        }
        return (System_Boolean_array *)v7;
      }
    }
LABEL_71:
    sub_21FFED4(v4);
  }
  if ( rangeType == 1 )
  {
    if ( max_length >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        v14 = this->fields.targetVals;
        if ( !v14 )
          break;
        if ( v13 >= LODWORD(v14->max_length) )
          goto LABEL_71;
        v15 = v14->m_Items[v13];
        v16 = v15 - 1;
        if ( v15 >= 1 )
        {
          v4 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( v15 <= v4->static_fields->DeckMemberMax )
          {
            if ( !v7 )
              break;
            if ( v16 >= LODWORD(v7->_1.namespaze) )
              goto LABEL_71;
            *((_BYTE *)&v7->_1.byval_arg.data + v16) = 1;
          }
        }
        if ( max_length == ++v13 )
          return (System_Boolean_array *)v7;
      }
LABEL_70:
      sub_21FFECC(v4, v5);
    }
  }
  else if ( rangeType == 2 )
  {
    v4 = BalanceConfig_TypeInfo;
    for ( k = 0; ; ++k )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, v5);
        v4 = BalanceConfig_TypeInfo;
      }
      if ( (__int64)k >= v4->static_fields->DeckMemberMax )
        break;
      if ( !v7 )
        goto LABEL_70;
      if ( k >= LODWORD(v7->_1.namespaze) )
        goto LABEL_71;
      *((_BYTE *)&v7->_1.byval_arg.data + k) = 1;
    }
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = this->fields.targetVals;
        if ( !v20 )
          goto LABEL_70;
        if ( v19 >= LODWORD(v20->max_length) )
          goto LABEL_71;
        v21 = v20->m_Items[v19];
        v22 = v21 - 1;
        if ( v21 >= 1 )
        {
          if ( !*(&v4->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v4, v5);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( v21 <= v4->static_fields->DeckMemberMax )
          {
            if ( !v7 )
              goto LABEL_70;
            if ( v22 >= LODWORD(v7->_1.namespaze) )
              goto LABEL_71;
            *((_BYTE *)&v7->_1.byval_arg.data + v22) = 0;
          }
        }
        if ( max_length == ++v19 )
          return (System_Boolean_array *)v7;
      }
    }
  }
  return (System_Boolean_array *)v7;
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
    sub_21FFED4(this);
  return targetVals->m_Items[0];
}


void RestrictionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938EE5 & 1) == 0 )
  {
    sub_21FFC50(&RestrictionEntity___c_TypeInfo);
    byte_5938EE5 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RestrictionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RestrictionEntity___c_TypeInfo->static_fields->__9 = (struct RestrictionEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RestrictionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_5938EE6 & 1) == 0 )
  {
    sub_21FFC50(&Restriction_TargetType_TypeInfo);
    byte_5938EE6 = 1;
  }
  v6 = t;
  v5.klass = (System_Enum_c *)Restriction_TargetType_TypeInfo;
  v5.monitor = (void *)-1LL;
  return System_Enum__ToString(&v5, 0);
}