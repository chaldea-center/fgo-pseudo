void SelectGrandServantInfo___ctor(
        SelectGrandServantInfo_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v7; // x21
  SelectGrandServantInfo_Fields *p_fields; // x20
  GrandGraphDetailMaster_o *Master_object; // x0
  GrandGraphDetailMaster_o *v10; // x23
  int32_t id; // w24
  GrandGraphDetailEntity_o *v12; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantGrandMaster_o *v14; // x22
  __int64 v15; // x23
  __int64 v16; // x24
  UserServantEntity_o *v17; // x8
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x22
  System_Func_object__bool__o *v19; // x23
  bool v20; // w8
  bool v21; // w9
  int32_t v22; // w8
  GrandGraphDetailEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C3DC8F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_UserServantEntity___);
    sub_1C37058(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SelectGrandServantInfo___c__DisplayClass28_0___ctor_b__0__);
    sub_1C37058(&SelectGrandServantInfo___c__DisplayClass28_0_TypeInfo);
    byte_4C3DC8F = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = sub_1C372A4(SelectGrandServantInfo___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  this->fields._UserServantEntity_k__BackingField = userServantEntity;
  p_fields = &this->fields;
  sub_1C36FFC(&this->fields, userServantEntity);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_31;
  v10 = Master_object;
  Master_object = (GrandGraphDetailMaster_o *)p_fields->_UserServantEntity_k__BackingField;
  if ( !p_fields->_UserServantEntity_k__BackingField )
    goto LABEL_31;
  id = grandGraphEntity->fields.id;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(
                                                (UserServantEntity_o *)Master_object,
                                                0,
                                                0,
                                                0);
  if ( !v10 )
    goto LABEL_31;
  if ( GrandGraphDetailMaster__TryGetEntity(v10, &entity, id, (int32_t)Master_object, 0) )
  {
    v12 = entity;
    this->fields._GrandGraphDetailEntity_k__BackingField = entity;
    sub_1C36FFC(&this->fields._GrandGraphDetailEntity_k__BackingField, v12);
    this->fields._IsValid_k__BackingField = GrandGraphEntity__CanSelectToGrand(
                                              grandGraphEntity,
                                              this->fields._UserServantEntity_k__BackingField,
                                              0);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( this->fields._IsValid_k__BackingField )
  {
    UserServantEntity_k__BackingField = p_fields->_UserServantEntity_k__BackingField;
    if ( !p_fields->_UserServantEntity_k__BackingField )
      goto LABEL_31;
    v14 = (UserServantGrandMaster_o *)Master_object;
    v16 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v16;
    *(_QWORD *)&v24.fields.fakeValue = v15;
    Master_object = (GrandGraphDetailMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                  v24,
                                                  0);
    if ( !v14 )
      goto LABEL_31;
    if ( UserServantGrandMaster__GetEntityFromSvtId(v14, (int32_t)Master_object, 0) )
    {
      this->fields._IsValid_k__BackingField = 0;
      return;
    }
    if ( this->fields._IsValid_k__BackingField )
    {
      Master_object = (GrandGraphDetailMaster_o *)this->fields._GrandGraphDetailEntity_k__BackingField;
      if ( Master_object )
      {
        Master_object = (GrandGraphDetailMaster_o *)GrandGraphDetailEntity__IsOpen(
                                                      (GrandGraphDetailEntity_o *)Master_object,
                                                      0);
        v17 = this->fields._UserServantEntity_k__BackingField;
        this->fields._IsClose_k__BackingField = ((unsigned __int8)Master_object & 1) == 0;
        if ( v17 )
        {
          Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(v17, 1, 0, 0);
          if ( v7 )
          {
            *(_DWORD *)(v7 + 16) = (_DWORD)Master_object;
            UserServantEntities = UserServantGrandMaster__GetUserServantEntities(v14, 0);
            v19 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v19,
              (Il2CppObject *)v7,
              Method_SelectGrandServantInfo___c__DisplayClass28_0___ctor_b__0__,
              0);
            v20 = System_Linq_Enumerable__Any_object__51336868(
                    (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
                    (System_Func_TSource__bool__o *)v19,
                    (const MethodInfo_30F56A4 *)Method_System_Linq_Enumerable_Any_UserServantEntity___);
            Master_object = (GrandGraphDetailMaster_o *)this->fields._UserServantEntity_k__BackingField;
            v21 = !this->fields._IsClose_k__BackingField;
            this->fields._IsSameClass_k__BackingField = v20;
            this->fields._CanSelectToGrand_k__BackingField = v21 && !v20;
            if ( Master_object )
            {
              if ( UserServantEntity__IsExtra1((UserServantEntity_o *)Master_object, 0) )
              {
                v22 = 1;
LABEL_29:
                this->fields._ExtraGroupNo_k__BackingField = v22;
                return;
              }
              Master_object = (GrandGraphDetailMaster_o *)p_fields->_UserServantEntity_k__BackingField;
              if ( p_fields->_UserServantEntity_k__BackingField )
              {
                if ( !UserServantEntity__IsExtra2((UserServantEntity_o *)Master_object, 0) )
                  return;
                v22 = 2;
                goto LABEL_29;
              }
            }
          }
        }
      }
LABEL_31:
      sub_1C372B4(Master_object);
    }
  }
}


bool SelectGrandServantInfo__get_CanSelectToGrand(SelectGrandServantInfo_o *this, const MethodInfo *method)
{
  return this->fields._CanSelectToGrand_k__BackingField;
}


int32_t SelectGrandServantInfo__get_ExtraGroupNo(SelectGrandServantInfo_o *this, const MethodInfo *method)
{
  return this->fields._ExtraGroupNo_k__BackingField;
}


GrandGraphDetailEntity_o *SelectGrandServantInfo__get_GrandGraphDetailEntity(
        SelectGrandServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphDetailEntity_k__BackingField;
}


bool SelectGrandServantInfo__get_IsClose(SelectGrandServantInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsClose_k__BackingField;
}


bool SelectGrandServantInfo__get_IsSameClass(SelectGrandServantInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsSameClass_k__BackingField;
}


bool SelectGrandServantInfo__get_IsValid(SelectGrandServantInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsValid_k__BackingField;
}


UserServantEntity_o *SelectGrandServantInfo__get_UserServantEntity(
        SelectGrandServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void SelectGrandServantInfo__set_CanSelectToGrand(SelectGrandServantInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._CanSelectToGrand_k__BackingField = value;
}


void SelectGrandServantInfo__set_ExtraGroupNo(SelectGrandServantInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ExtraGroupNo_k__BackingField = value;
}


void SelectGrandServantInfo__set_GrandGraphDetailEntity(
        SelectGrandServantInfo_o *this,
        GrandGraphDetailEntity_o *value,
        const MethodInfo *method)
{
  this->fields._GrandGraphDetailEntity_k__BackingField = value;
  sub_1C36FFC(&this->fields._GrandGraphDetailEntity_k__BackingField, value);
}


void SelectGrandServantInfo__set_IsClose(SelectGrandServantInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsClose_k__BackingField = value;
}


void SelectGrandServantInfo__set_IsSameClass(SelectGrandServantInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSameClass_k__BackingField = value;
}


void SelectGrandServantInfo__set_IsValid(SelectGrandServantInfo_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsValid_k__BackingField = value;
}


void SelectGrandServantInfo__set_UserServantEntity(
        SelectGrandServantInfo_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C36FFC(&this->fields, value);
}


void SelectGrandServantInfo___c__DisplayClass28_0___ctor(
        SelectGrandServantInfo___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantInfo___c__DisplayClass28_0____ctor_b__0(
        SelectGrandServantInfo___c__DisplayClass28_0_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C372B4(this);
  return UserServantEntity__getSvtClassId(e, 1, 0, 0) == this->fields.checkClassId;
}