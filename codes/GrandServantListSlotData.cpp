void GrandServantListSlotData___ctor(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        bool isOtherUserData,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *v8; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C32805 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    byte_4C32805 = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._GrandGraphId_k__BackingField = grandGraphId;
  if ( !isOtherUserData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( !Master_object )
      goto LABEL_11;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            &entity,
            this->fields._GrandGraphId_k__BackingField,
            (const MethodInfo_3396884 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
      return;
    Master_object = entity;
    if ( !entity )
LABEL_11:
      sub_1C32E7C(Master_object);
    this->fields.isOpen = GrandGraphEntity__IsOpen((GrandGraphEntity_o *)entity, 0);
    v8 = entity;
    this->fields._GrandGraphEntity_k__BackingField = (struct GrandGraphEntity_o *)entity;
    sub_1C32BC4(&this->fields._GrandGraphEntity_k__BackingField, v8);
  }
}


void GrandServantListSlotData___ctor_32857916(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        int64_t userServantId,
        System_Int64_array *equipUserServantIds,
        int32_t equipFriendShipSkillChange,
        const MethodInfo *method)
{
  Il2CppObject *v11; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *v13; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  int32_t *p_GrandGraphId_k__BackingField; // x23
  System_Func_T__TResult__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EquipUserServantEntities_k__BackingField; // x20
  GrandServantListSlotData___c_c *v20; // x0
  System_Func_object__long__o *_9__35_1; // x21
  Il2CppObject *v22; // x22
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  struct System_Int64_array *v25; // x0
  Il2CppObject *v26; // x1
  Il2CppObject v27; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-80h]
  Il2CppObject *v31; // [xsp+48h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4C32806 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C32C20(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
    sub_1C32C20(&System_Func_UserServantEntity__long__TypeInfo);
    sub_1C32C20(&System_Func_long__UserServantEntity__TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_GrandServantListSlotData___c___ctor_b__35_1__);
    sub_1C32C20(&Method_GrandServantListSlotData___c__DisplayClass35_0___ctor_b__0__);
    sub_1C32C20(&GrandServantListSlotData___c__DisplayClass35_0_TypeInfo);
    sub_1C32C20(&GrandServantListSlotData___c_TypeInfo);
    byte_4C32806 = 1;
  }
  entity = 0;
  v31 = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = (Il2CppObject *)sub_1C32E6C(GrandServantListSlotData___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor(v11, 0);
  this->fields._EquipFriendShipSkillChange_k__BackingField = equipFriendShipSkillChange;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v11 )
    goto LABEL_29;
  v11[1].klass = (Il2CppClass *)Master_object;
  sub_1C32BC4(&v11[1], Master_object);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v11[1].klass;
  if ( !Master_object )
    goto LABEL_29;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         Master_object,
         &entity,
         userServantId,
         (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v13 = entity;
    this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)entity;
    sub_1C32BC4(&this->fields._UserServantEntity_k__BackingField, v13);
    UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
    this->fields.userServantId = userServantId;
    if ( !UserServantEntity_k__BackingField )
      return;
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    p_GrandGraphId_k__BackingField = &this->fields._GrandGraphId_k__BackingField;
    if ( equipUserServantIds )
    {
      v16 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_long__UserServantEntity__TypeInfo);
      System_Func_long__object____ctor(v16, v11, Method_GrandServantListSlotData___c__DisplayClass35_0___ctor_b__0__, 0);
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)equipUserServantIds,
                                                                   (System_Func_TSource__TResult__o *)v16,
                                                                   (const MethodInfo_31125A0 *)Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
      v18 = System_Linq_Enumerable__ToArray_object_(
              v17,
              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      this->fields._EquipUserServantEntities_k__BackingField = (struct UserServantEntity_array *)v18;
      sub_1C32BC4(&this->fields._EquipUserServantEntities_k__BackingField, v18);
      EquipUserServantEntities_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._EquipUserServantEntities_k__BackingField;
      v20 = GrandServantListSlotData___c_TypeInfo;
      if ( !GrandServantListSlotData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo);
        v20 = GrandServantListSlotData___c_TypeInfo;
      }
      _9__35_1 = (System_Func_object__long__o *)v20->static_fields->__9__35_1;
      if ( !_9__35_1 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = GrandServantListSlotData___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__35_1 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_UserServantEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__35_1, v22, Method_GrandServantListSlotData___c___ctor_b__35_1__, 0);
        static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
        static_fields->__9__35_1 = (struct System_Func_UserServantEntity__long__o *)_9__35_1;
        sub_1C32BC4(&static_fields->__9__35_1, _9__35_1);
      }
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                   EquipUserServantEntities_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)_9__35_1,
                                                                   (const MethodInfo_31137C8 *)Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
      v25 = System_Linq_Enumerable__ToArray_long_(
              v24,
              (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
      this->fields._EquipUserServantIds_k__BackingField = v25;
      sub_1C32BC4(&this->fields._EquipUserServantIds_k__BackingField, v25);
    }
  }
  else
  {
    if ( !this->fields._UserServantEntity_k__BackingField )
      return;
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    p_GrandGraphId_k__BackingField = &this->fields._GrandGraphId_k__BackingField;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_29;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &v31,
          *p_GrandGraphId_k__BackingField,
          (const MethodInfo_3396884 *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
    return;
  v26 = v31;
  this->fields._GrandGraphEntity_k__BackingField = (struct GrandGraphEntity_o *)v31;
  sub_1C32BC4(&this->fields._GrandGraphEntity_k__BackingField, v26);
  this->fields.isOpen = 1;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserGameMaster__getSelfUserGame(0);
  if ( !entity )
    goto LABEL_29;
  v27 = entity[2];
  v28 = Master_object;
  *(Il2CppObject *)&v30.fields.currentCryptoKey = entity[1];
  *(Il2CppObject *)&v30.fields.fakeValue = v27;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(
                                                                  &v29,
                                                                  0);
  if ( !v28 )
LABEL_29:
    sub_1C32E7C(Master_object);
  this->fields._IsPushServant_k__BackingField = Master_object == (DataMasterBase_TMaster__TEntity__PKType__o *)v28[1].fields.seriazlier;
}


void GrandServantListSlotData___ctor_32859352(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        ServantLeaderInfo_o *servantLeaderInfo,
        bool isPushServant,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *ServantLeaderInfo_k__BackingField; // x0
  System_Collections_Generic_List_EquipTargetInfo__o *EquipTargetInfoList; // x0
  GrandServantListSlotData___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  System_Func_object__long__o *_9__36_0; // x22
  Il2CppObject *v14; // x23
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct System_Int64_array *v17; // x0
  struct System_Int64_array **p_EquipUserServantIds_k__BackingField; // x20

  if ( (byte_4C32807 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_EquipTargetInfo__long___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C32C20(&System_Func_EquipTargetInfo__long__TypeInfo);
    sub_1C32C20(&Method_GrandServantListSlotData___c___ctor_b__36_0__);
    sub_1C32C20(&GrandServantListSlotData___c_TypeInfo);
    byte_4C32807 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._ServantLeaderInfo_k__BackingField = servantLeaderInfo;
  ServantLeaderInfo_k__BackingField = (ServantLeaderInfo_o *)sub_1C32BC4(
                                                               &this->fields._ServantLeaderInfo_k__BackingField,
                                                               servantLeaderInfo);
  if ( this->fields._ServantLeaderInfo_k__BackingField )
  {
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    if ( !servantLeaderInfo
      || (this->fields.userServantId = servantLeaderInfo->fields.userSvtId,
          this->fields._EquipFriendShipSkillChange_k__BackingField = ServantLeaderInfo__IsChangeFriendShipSvtEquipSkill(
                                                                       servantLeaderInfo,
                                                                       0),
          ServantLeaderInfo__SetSkillChangeInfo(servantLeaderInfo, 0),
          (ServantLeaderInfo_k__BackingField = this->fields._ServantLeaderInfo_k__BackingField) == 0) )
    {
      sub_1C32E7C(ServantLeaderInfo_k__BackingField);
    }
    EquipTargetInfoList = ServantLeaderInfo__GetEquipTargetInfoList(ServantLeaderInfo_k__BackingField, 0);
    v11 = GrandServantListSlotData___c_TypeInfo;
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)EquipTargetInfoList;
    if ( !GrandServantListSlotData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo);
      v11 = GrandServantListSlotData___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__long__o *)v11->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = GrandServantListSlotData___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__36_0 = (System_Func_object__long__o *)sub_1C32E6C(System_Func_EquipTargetInfo__long__TypeInfo);
      System_Func_object__long____ctor(_9__36_0, v14, Method_GrandServantListSlotData___c___ctor_b__36_0__, 0);
      static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_EquipTargetInfo__long__o *)_9__36_0;
      sub_1C32BC4(&static_fields->__9__36_0, _9__36_0);
    }
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)_9__36_0,
                                                                 (const MethodInfo_31137C8 *)Method_System_Linq_Enumerable_Select_EquipTargetInfo__long___);
    v17 = System_Linq_Enumerable__ToArray_long_(
            v16,
            (const MethodInfo_311CA04 *)Method_System_Linq_Enumerable_ToArray_long___);
    this->fields._EquipUserServantIds_k__BackingField = v17;
    p_EquipUserServantIds_k__BackingField = &this->fields._EquipUserServantIds_k__BackingField;
    sub_1C32BC4(p_EquipUserServantIds_k__BackingField, v17);
    *((_BYTE *)p_EquipUserServantIds_k__BackingField - 16) = 1;
    *((_BYTE *)p_EquipUserServantIds_k__BackingField + 40) = isPushServant;
  }
}


int32_t GrandServantListSlotData__GetParentClassBoardBaseId(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  ClassBoardClassMaster_o *v5; // x19

  if ( (byte_4C32808 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C32808 = 1;
  }
  if ( !this->fields._UserServantEntity_k__BackingField )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField
    || (v5 = (ClassBoardClassMaster_o *)Master_object,
        Master_object = (Il2CppObject *)UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0),
        !v5) )
  {
    sub_1C32E7C(Master_object);
  }
  return ClassBoardClassMaster__GetClassBoardBaseId(v5, (int32_t)Master_object, 0);
}


bool GrandServantListSlotData__IsEmptyEquip(GrandServantListSlotData_o *this, int32_t index, const MethodInfo *method)
{
  struct System_Int64_array *EquipUserServantIds_k__BackingField; // x8
  int32_t max_length; // w9

  EquipUserServantIds_k__BackingField = this->fields._EquipUserServantIds_k__BackingField;
  if ( !EquipUserServantIds_k__BackingField )
    return 1;
  max_length = EquipUserServantIds_k__BackingField->max_length;
  if ( max_length <= index )
    return 1;
  if ( max_length <= (unsigned int)index )
    sub_1C32E84(this);
  return EquipUserServantIds_k__BackingField->m_Items[index] == 0;
}


bool GrandServantListSlotData__IsEmptyServant(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.userServantId == 0;
}


bool GrandServantListSlotData__IsOpen(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.isOpen;
}


int32_t GrandServantListSlotData__get_EquipFriendShipSkillChange(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


UserServantEntity_array *GrandServantListSlotData__get_EquipUserServantEntities(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipUserServantEntities_k__BackingField;
}


System_Int64_array *GrandServantListSlotData__get_EquipUserServantIds(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipUserServantIds_k__BackingField;
}


GrandGraphEntity_o *GrandServantListSlotData__get_GrandGraphEntity(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphEntity_k__BackingField;
}


int32_t GrandServantListSlotData__get_GrandGraphId(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields._GrandGraphId_k__BackingField;
}


bool GrandServantListSlotData__get_IsPushServant(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields._IsPushServant_k__BackingField;
}


ServantLeaderInfo_o *GrandServantListSlotData__get_ServantLeaderInfo(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantLeaderInfo_k__BackingField;
}


UserServantEntity_o *GrandServantListSlotData__get_UserServantEntity(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void GrandServantListSlotData__set_EquipFriendShipSkillChange(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
}


void GrandServantListSlotData__set_EquipUserServantEntities(
        GrandServantListSlotData_o *this,
        UserServantEntity_array *value,
        const MethodInfo *method)
{
  this->fields._EquipUserServantEntities_k__BackingField = value;
  sub_1C32BC4(&this->fields._EquipUserServantEntities_k__BackingField, value);
}


void GrandServantListSlotData__set_EquipUserServantIds(
        GrandServantListSlotData_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  this->fields._EquipUserServantIds_k__BackingField = value;
  sub_1C32BC4(&this->fields._EquipUserServantIds_k__BackingField, value);
}


void GrandServantListSlotData__set_GrandGraphEntity(
        GrandServantListSlotData_o *this,
        GrandGraphEntity_o *value,
        const MethodInfo *method)
{
  this->fields._GrandGraphEntity_k__BackingField = value;
  sub_1C32BC4(&this->fields._GrandGraphEntity_k__BackingField, value);
}


void GrandServantListSlotData__set_GrandGraphId(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GrandGraphId_k__BackingField = value;
}


void GrandServantListSlotData__set_IsPushServant(
        GrandServantListSlotData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPushServant_k__BackingField = value;
}


void GrandServantListSlotData__set_ServantLeaderInfo(
        GrandServantListSlotData_o *this,
        ServantLeaderInfo_o *value,
        const MethodInfo *method)
{
  this->fields._ServantLeaderInfo_k__BackingField = value;
  sub_1C32BC4(&this->fields._ServantLeaderInfo_k__BackingField, value);
}


void GrandServantListSlotData__set_UserServantEntity(
        GrandServantListSlotData_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C32BC4(&this->fields._UserServantEntity_k__BackingField, value);
}


void GrandServantListSlotData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C32809 & 1) == 0 )
  {
    sub_1C32C20(&GrandServantListSlotData___c_TypeInfo);
    byte_4C32809 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(GrandServantListSlotData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantListSlotData___c_TypeInfo->static_fields->__9 = (struct GrandServantListSlotData___c_o *)v1;
  sub_1C32BC4(GrandServantListSlotData___c_TypeInfo->static_fields, v1);
}


void GrandServantListSlotData___c___ctor(GrandServantListSlotData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t GrandServantListSlotData___c____ctor_b__35_1(
        GrandServantListSlotData___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4C3280A & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3280A = 1;
  }
  if ( e )
  {
    v4 = *(_OWORD *)&e->fields.id.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&e->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v4;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


int64_t GrandServantListSlotData___c____ctor_b__36_0(
        GrandServantListSlotData___c_o *this,
        EquipTargetInfo_o *e,
        const MethodInfo *method)
{
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4C3280B & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3280B = 1;
  }
  if ( e )
  {
    v4 = *(_OWORD *)&e->fields.userSvtId.fields.fakeValue;
    *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&e->fields.userSvtId.fields.currentCryptoKey;
    *(_OWORD *)&v8.fields.fakeValue = v4;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0, 0);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v6, 0);
}


void GrandServantListSlotData___c__DisplayClass35_0___ctor(
        GrandServantListSlotData___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UserServantEntity_o *GrandServantListSlotData___c__DisplayClass35_0____ctor_b__0(
        GrandServantListSlotData___c__DisplayClass35_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3280C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4C3280C = 1;
  }
  entity = 0;
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster )
    sub_1C32E7C(0);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         userServantMaster,
         &entity,
         id,
         (const MethodInfo_3398DE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    return (UserServantEntity_o *)entity;
  }
  else
  {
    return 0;
  }
}