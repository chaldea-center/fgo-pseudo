void SelectGrandServantInfo___ctor(
        SelectGrandServantInfo_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v7; // x21
  SelectGrandServantInfo_Fields *p_fields; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  GrandGraphDetailMaster_o *Master_object; // x0
  __int64 v18; // x1
  GrandGraphDetailMaster_o *v19; // x23
  int32_t id; // w24
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  __int64 v29; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  UserServantGrandMaster_o *v31; // x22
  __int64 v32; // x23
  __int64 v33; // x24
  bool IsOpen; // w8
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x22
  System_Func_object__bool__o *v36; // x23
  bool v37; // w0
  _BOOL4 IsClose_k__BackingField; // w8
  bool v39; // w9
  bool v40; // w10
  int32_t v41; // w8
  GrandGraphDetailEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_596B224 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_UserServantEntity___);
    sub_2213A60(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SelectGrandServantInfo___c__DisplayClass28_0___ctor_b__0__);
    sub_2213A60(&SelectGrandServantInfo___c__DisplayClass28_0_TypeInfo);
    byte_596B224 = 1;
  }
  entity = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = sub_2213CCC(SelectGrandServantInfo___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  this->fields._UserServantEntity_k__BackingField = userServantEntity;
  p_fields = &this->fields;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)userServantEntity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15, v16);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !grandGraphEntity )
    goto LABEL_31;
  v19 = Master_object;
  Master_object = (GrandGraphDetailMaster_o *)p_fields->_UserServantEntity_k__BackingField;
  if ( !p_fields->_UserServantEntity_k__BackingField )
    goto LABEL_31;
  id = grandGraphEntity->fields.id;
  Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(
                                                (UserServantEntity_o *)Master_object,
                                                0,
                                                0,
                                                0);
  if ( !v19 )
    goto LABEL_31;
  if ( GrandGraphDetailMaster__TryGetEntity(v19, &entity, id, (int32_t)Master_object, 0) )
  {
    v28 = (int)entity;
    this->fields._GrandGraphDetailEntity_k__BackingField = entity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphDetailEntity_k__BackingField,
      v28,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    this->fields._IsValid_k__BackingField = GrandGraphEntity__CanSelectToGrand(
                                              grandGraphEntity,
                                              this->fields._UserServantEntity_k__BackingField,
                                              0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
  Master_object = (GrandGraphDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( this->fields._IsValid_k__BackingField )
  {
    UserServantEntity_k__BackingField = p_fields->_UserServantEntity_k__BackingField;
    if ( !p_fields->_UserServantEntity_k__BackingField )
      goto LABEL_31;
    v31 = (UserServantGrandMaster_o *)Master_object;
    v32 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
    v33 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v29);
    *(_QWORD *)&v43.fields.currentCryptoKey = v32;
    *(_QWORD *)&v43.fields.fakeValue = v33;
    Master_object = (GrandGraphDetailMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                  v43,
                                                  0);
    if ( !v31 )
      goto LABEL_31;
    if ( UserServantGrandMaster__GetEntityFromSvtId(v31, (int32_t)Master_object, 0) )
    {
      this->fields._IsValid_k__BackingField = 0;
      return;
    }
    if ( this->fields._IsValid_k__BackingField )
    {
      Master_object = (GrandGraphDetailMaster_o *)this->fields._GrandGraphDetailEntity_k__BackingField;
      if ( Master_object )
      {
        IsOpen = GrandGraphDetailEntity__IsOpen((GrandGraphDetailEntity_o *)Master_object, 0);
        Master_object = (GrandGraphDetailMaster_o *)this->fields._UserServantEntity_k__BackingField;
        this->fields._IsClose_k__BackingField = !IsOpen;
        if ( Master_object )
        {
          Master_object = (GrandGraphDetailMaster_o *)UserServantEntity__getSvtClassId(
                                                        (UserServantEntity_o *)Master_object,
                                                        1,
                                                        0,
                                                        0);
          if ( v7 )
          {
            *(_DWORD *)(v7 + 16) = (_DWORD)Master_object;
            UserServantEntities = UserServantGrandMaster__GetUserServantEntities(v31, 0);
            v36 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_UserServantEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v36,
              (Il2CppObject *)v7,
              Method_SelectGrandServantInfo___c__DisplayClass28_0___ctor_b__0__,
              0);
            v37 = System_Linq_Enumerable__Any_object__59145568(
                    (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
                    (System_Func_TSource__bool__o *)v36,
                    (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_UserServantEntity___);
            IsClose_k__BackingField = this->fields._IsClose_k__BackingField;
            v39 = v37;
            v40 = !v37;
            Master_object = (GrandGraphDetailMaster_o *)this->fields._UserServantEntity_k__BackingField;
            this->fields._IsSameClass_k__BackingField = v39;
            this->fields._CanSelectToGrand_k__BackingField = !IsClose_k__BackingField && v40;
            if ( Master_object )
            {
              if ( UserServantEntity__IsExtra1((UserServantEntity_o *)Master_object, 0) )
              {
                v41 = 1;
LABEL_29:
                this->fields._ExtraGroupNo_k__BackingField = v41;
                return;
              }
              Master_object = (GrandGraphDetailMaster_o *)p_fields->_UserServantEntity_k__BackingField;
              if ( p_fields->_UserServantEntity_k__BackingField )
              {
                if ( !UserServantEntity__IsExtra2((UserServantEntity_o *)Master_object, 0) )
                  return;
                v41 = 2;
                goto LABEL_29;
              }
            }
          }
        }
      }
LABEL_31:
      sub_2213CDC(Master_object, v18);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandGraphDetailEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphDetailEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return UserServantEntity__getSvtClassId(e, 1, 0, 0) == this->fields.checkClassId;
}