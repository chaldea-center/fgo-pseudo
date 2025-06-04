// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListSlotData___ctor(
        GrandServantListSlotData_o *this,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  GrandGraphEntity_o *EntityByParentClassBoardBaseId; // x0
  GrandGraphEntity_o *v11; // x20
  bool IsOpen; // w0
  System_Collections_Generic_IEnumerable_UserServantEntity__o *CanSelectToGrandList; // x0

  if ( (byte_4AFCF2D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphMaster___, *(_QWORD *)&parentClassBoardBaseId);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_UserServantEntity___, v7);
    byte_4AFCF2D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._ParentClassBoardBaseId_k__BackingField = parentClassBoardBaseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EntityByParentClassBoardBaseId = GrandGraphMaster__GetEntityByParentClassBoardBaseId(
                                     (GrandGraphMaster_o *)Master_object,
                                     parentClassBoardBaseId,
                                     0LL);
  if ( EntityByParentClassBoardBaseId )
  {
    v11 = EntityByParentClassBoardBaseId;
    IsOpen = GrandGraphEntity__IsOpen(EntityByParentClassBoardBaseId, 0LL);
    this->fields.isOpen = IsOpen;
    this->fields._GrandGraphId_k__BackingField = v11->fields.id;
    if ( !IsOpen )
      return;
  }
  else if ( !this->fields.isOpen )
  {
    return;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
LABEL_15:
    sub_1BC3264(Master_object, v9);
  CanSelectToGrandList = UserServantMaster__GetCanSelectToGrandList(
                           (UserServantMaster_o *)Master_object,
                           this->fields._GrandGraphId_k__BackingField,
                           0LL);
  this->fields.canSelectToGrand = System_Linq_Enumerable__Any_object_(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)CanSelectToGrandList,
                                    (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_UserServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListSlotData___ctor_32101464(
        GrandServantListSlotData_o *this,
        int32_t grandGraphId,
        int64_t userServantId,
        System_Int64_array *equipUserServantIds,
        int32_t equipFriendShipSkillChange,
        const MethodInfo *method)
{
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
  Il2CppObject *v28; // x24
  int64_t Master_object; // x0
  __int64 v30; // x1
  System_Func_T__TResult__o *v31; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *EquipUserServantEntities_k__BackingField; // x21
  GrandServantListSlotData___c_c *v34; // x0
  System_Func_T__TResult__o *_9__32_1; // x22
  Il2CppObject *v36; // x23
  struct GrandServantListSlotData___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  Il2CppObject v39; // q1
  int64_t v40; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-80h]
  Il2CppObject *v43; // [xsp+40h] [xbp-60h] BYREF
  Il2CppObject *v44; // [xsp+48h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-48h] BYREF

  if ( (byte_4AFCF2E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, *(_QWORD *)&grandGraphId);
    sub_1BC3008(&Method_DataManager_GetMaster_GrandGraphMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMaster_UserServantMaster___, v12);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v14);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15);
    sub_1BC3008(&Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__, v16);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_long__UserServantEntity___, v17);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_UserServantEntity__long___, v18);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_long___, v19);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_UserServantEntity___, v20);
    sub_1BC3008(&System_Func_UserServantEntity__long__TypeInfo, v21);
    sub_1BC3008(&System_Func_long__UserServantEntity__TypeInfo, v22);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23);
    sub_1BC3008(&Method_GrandServantListSlotData___c___ctor_b__32_1__, v24);
    sub_1BC3008(&Method_GrandServantListSlotData___c__DisplayClass32_0___ctor_b__0__, v25);
    sub_1BC3008(&GrandServantListSlotData___c__DisplayClass32_0_TypeInfo, v26);
    sub_1BC3008(&GrandServantListSlotData___c_TypeInfo, v27);
    byte_4AFCF2E = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v28 = (Il2CppObject *)sub_1BC3254(GrandServantListSlotData___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor(v28, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !v28 )
    goto LABEL_34;
  v28[1].klass = (Il2CppClass *)Master_object;
  sub_1BC2FAC(&v28[1]);
  this->fields._EquipFriendShipSkillChange_k__BackingField = equipFriendShipSkillChange;
  Master_object = (int64_t)v28[1].klass;
  if ( !Master_object )
    goto LABEL_34;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         userServantId,
         (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this->fields._UserServantEntity_k__BackingField = (struct UserServantEntity_o *)entity;
    sub_1BC2FAC(&this->fields._UserServantEntity_k__BackingField);
    this->fields.userServantId = userServantId;
    if ( equipUserServantIds )
    {
      v31 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_long__UserServantEntity__TypeInfo);
      System_Func_long__object____ctor(
        v31,
        v28,
        Method_GrandServantListSlotData___c__DisplayClass32_0___ctor_b__0__,
        0LL);
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)equipUserServantIds,
                                                                   (System_Func_TSource__TResult__o *)v31,
                                                                   (const MethodInfo_3034E04 *)Method_System_Linq_Enumerable_Select_long__UserServantEntity___);
      this->fields._EquipUserServantEntities_k__BackingField = (struct UserServantEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                                                   v32,
                                                                                                   (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_UserServantEntity___);
      sub_1BC2FAC(&this->fields._EquipUserServantEntities_k__BackingField);
      EquipUserServantEntities_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._EquipUserServantEntities_k__BackingField;
      v34 = GrandServantListSlotData___c_TypeInfo;
      if ( !GrandServantListSlotData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(GrandServantListSlotData___c_TypeInfo);
        v34 = GrandServantListSlotData___c_TypeInfo;
      }
      _9__32_1 = (System_Func_T__TResult__o *)v34->static_fields->__9__32_1;
      if ( !_9__32_1 )
      {
        if ( !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          v34 = GrandServantListSlotData___c_TypeInfo;
        }
        v36 = (Il2CppObject *)v34->static_fields->__9;
        _9__32_1 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_UserServantEntity__long__TypeInfo);
        System_Func_object__long____ctor(_9__32_1, v36, Method_GrandServantListSlotData___c___ctor_b__32_1__, 0LL);
        static_fields = GrandServantListSlotData___c_TypeInfo->static_fields;
        static_fields->__9__32_1 = (struct System_Func_UserServantEntity__long__o *)_9__32_1;
        sub_1BC2FAC(&static_fields->__9__32_1);
      }
      v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                                   EquipUserServantEntities_k__BackingField,
                                                                   (System_Func_TSource__TResult__o *)_9__32_1,
                                                                   (const MethodInfo_303602C *)Method_System_Linq_Enumerable_Select_UserServantEntity__long___);
      this->fields._EquipUserServantIds_k__BackingField = System_Linq_Enumerable__ToArray_long_(
                                                            v38,
                                                            (const MethodInfo_303E4C4 *)Method_System_Linq_Enumerable_ToArray_long___);
      sub_1BC2FAC(&this->fields._EquipUserServantIds_k__BackingField);
    }
  }
  if ( this->fields._UserServantEntity_k__BackingField )
  {
    this->fields._GrandGraphId_k__BackingField = grandGraphId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GrandGraphMaster___);
    if ( Master_object )
    {
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
              &v44,
              this->fields._GrandGraphId_k__BackingField,
              (const MethodInfo_32AF0BC *)Method_DataMasterBase_GrandGraphMaster__GrandGraphEntity__int__TryGetEntity__) )
        return;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
      if ( v44 )
      {
        if ( Master_object )
        {
          Master_object = DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                            &v43,
                            (int32_t)v44[3].klass,
                            (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
          if ( (Master_object & 1) != 0 )
          {
            if ( !v43 )
              goto LABEL_34;
            this->fields._ParentClassBoardBaseId_k__BackingField = (int32_t)v43[4].monitor;
          }
          this->fields.isOpen = 1;
          Master_object = (int64_t)UserGameMaster__getSelfUserGame(0LL);
          if ( entity )
          {
            v39 = entity[2];
            v40 = Master_object;
            *(Il2CppObject *)&v42.fields.currentCryptoKey = entity[1];
            *(Il2CppObject *)&v42.fields.fakeValue = v39;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v41 = v42;
            Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v41, 0LL);
            if ( v40 )
            {
              this->fields._IsPushServant_k__BackingField = Master_object == *(_QWORD *)(v40 + 128);
              return;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1BC3264(Master_object, v30);
  }
}


bool __fastcall GrandServantListSlotData__CanSelectToGrand(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.canSelectToGrand;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GrandServantListSlotData__IsEmptyEquip(
        GrandServantListSlotData_o *this,
        int32_t index,
        const MethodInfo *method)
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
    sub_1BC326C(this, *(_QWORD *)&index, method);
  return EquipUserServantIds_k__BackingField->m_Items[index] == 0;
}


bool __fastcall GrandServantListSlotData__IsEmptyServant(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.userServantId == 0;
}


bool __fastcall GrandServantListSlotData__IsOpen(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields.isOpen;
}


int32_t __fastcall GrandServantListSlotData__get_EquipFriendShipSkillChange(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipFriendShipSkillChange_k__BackingField;
}


UserServantEntity_array *__fastcall GrandServantListSlotData__get_EquipUserServantEntities(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipUserServantEntities_k__BackingField;
}


System_Int64_array *__fastcall GrandServantListSlotData__get_EquipUserServantIds(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._EquipUserServantIds_k__BackingField;
}


int32_t __fastcall GrandServantListSlotData__get_GrandGraphId(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphId_k__BackingField;
}


bool __fastcall GrandServantListSlotData__get_IsPushServant(GrandServantListSlotData_o *this, const MethodInfo *method)
{
  return this->fields._IsPushServant_k__BackingField;
}


int32_t __fastcall GrandServantListSlotData__get_ParentClassBoardBaseId(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._ParentClassBoardBaseId_k__BackingField;
}


UserServantEntity_o *__fastcall GrandServantListSlotData__get_UserServantEntity(
        GrandServantListSlotData_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void __fastcall GrandServantListSlotData__set_EquipFriendShipSkillChange(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EquipFriendShipSkillChange_k__BackingField = value;
}


void __fastcall GrandServantListSlotData__set_EquipUserServantEntities(
        GrandServantListSlotData_o *this,
        UserServantEntity_array *value,
        const MethodInfo *method)
{
  this->fields._EquipUserServantEntities_k__BackingField = value;
  sub_1BC2FAC(&this->fields._EquipUserServantEntities_k__BackingField);
}


void __fastcall GrandServantListSlotData__set_EquipUserServantIds(
        GrandServantListSlotData_o *this,
        System_Int64_array *value,
        const MethodInfo *method)
{
  this->fields._EquipUserServantIds_k__BackingField = value;
  sub_1BC2FAC(&this->fields._EquipUserServantIds_k__BackingField);
}


void __fastcall GrandServantListSlotData__set_GrandGraphId(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GrandGraphId_k__BackingField = value;
}


void __fastcall GrandServantListSlotData__set_IsPushServant(
        GrandServantListSlotData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsPushServant_k__BackingField = value;
}


void __fastcall GrandServantListSlotData__set_ParentClassBoardBaseId(
        GrandServantListSlotData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ParentClassBoardBaseId_k__BackingField = value;
}


void __fastcall GrandServantListSlotData__set_UserServantEntity(
        GrandServantListSlotData_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserServantEntity_k__BackingField = value;
  sub_1BC2FAC(&this->fields._UserServantEntity_k__BackingField);
}


void __fastcall GrandServantListSlotData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCF2F & 1) == 0 )
  {
    sub_1BC3008(&GrandServantListSlotData___c_TypeInfo, v1);
    byte_4AFCF2F = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(GrandServantListSlotData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandServantListSlotData___c_TypeInfo->static_fields->__9 = (struct GrandServantListSlotData___c_o *)v2;
  sub_1BC2FAC(GrandServantListSlotData___c_TypeInfo->static_fields);
}


void __fastcall GrandServantListSlotData___c___ctor(GrandServantListSlotData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall GrandServantListSlotData___c____ctor_b__32_1(
        GrandServantListSlotData___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  __int128 v4; // q0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+40h] [xbp-40h]

  if ( (byte_4AFCF30 & 1) == 0 )
  {
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, e);
    byte_4AFCF30 = 1;
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
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v7, 0LL, 0LL);
    v8 = v7;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v6, 0LL);
}


void __fastcall GrandServantListSlotData___c__DisplayClass32_0___ctor(
        GrandServantListSlotData___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UserServantEntity_o *__fastcall GrandServantListSlotData___c__DisplayClass32_0____ctor_b__0(
        GrandServantListSlotData___c__DisplayClass32_0_o *this,
        int64_t id,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *userServantMaster; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AFCF31 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, id);
    byte_4AFCF31 = 1;
  }
  entity = 0LL;
  userServantMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.userServantMaster;
  if ( !userServantMaster )
    sub_1BC3264(0LL, id);
  if ( DataMasterBase_object__object__long___TryGetEntity(
         userServantMaster,
         &entity,
         id,
         (const MethodInfo_32B1618 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    return (UserServantEntity_o *)entity;
  }
  else
  {
    return 0LL;
  }
}