void EventInfoPassiveSkillChangeDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4D31E0A & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoPassiveSkillChangeDialog_TypeInfo);
    byte_4D31E0A = 1;
  }
  EventInfoPassiveSkillChangeDialog_TypeInfo->static_fields->InvalidSkillId = -1;
}


void EventInfoPassiveSkillChangeDialog___ctor(EventInfoPassiveSkillChangeDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D31E09 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventInfoPassiveSkillComponent__TypeInfo);
    byte_4D31E09 = 1;
  }
  *(_QWORD *)&this->fields.selectedSkillId = -1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventInfoPassiveSkillComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent___ctor__);
  this->fields.eventInfoPassiveSkillList = (struct System_Collections_Generic_List_EventInfoPassiveSkillComponent__o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventInfoPassiveSkillList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoPassiveSkillChangeDialog__Awake(EventInfoPassiveSkillChangeDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoPassiveSkillChangeDialog__OnChangeSkill(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D31E05 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeDialog__OnChangeSkill_b__16_0__);
    byte_4D31E05 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoPassiveSkillChangeDialog__OnChangeSkill_b__16_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoPassiveSkillChangeDialog__OnClose(EventInfoPassiveSkillChangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D31E06 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeDialog_OnClose__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeDialog__OnClose_b__17_0__);
    byte_4D31E06 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoPassiveSkillChangeDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoPassiveSkillChangeDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoPassiveSkillChangeDialog__OnClose_b__17_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassiveSkillChangeDialog__OnSelectSkill(
        EventInfoPassiveSkillChangeDialog_o *this,
        int32_t skillId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  UnityEngine_Object_o *changeButton; // x21
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *eventInfoPassiveSkillList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D31E08 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__get_Current__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E08 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( EventInfoPassiveSkillChangeDialog__get_CanChange(this, *(const MethodInfo **)&skillId)
    && BaseDialog__IsInputState((BaseDialog_o *)this, 0)
    && this->fields.defaultSkillId != skillId
    && this->fields.selectedSkillId != skillId )
  {
    v5 = Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C93AEC(Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    this->fields.selectedSkillId = skillId;
    changeButton = (UnityEngine_Object_o *)this->fields.changeButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(changeButton, 0, 0) )
    {
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)this->fields.changeButton;
      if ( !eventInfoPassiveSkillList )
        goto LABEL_24;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))eventInfoPassiveSkillList->klass->vtable._5_set_Item.methodPtr)(
        eventInfoPassiveSkillList,
        this->fields.selectedSkillId != this->fields.defaultSkillId,
        eventInfoPassiveSkillList->klass->vtable._5_set_Item.method);
    }
    eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoPassiveSkillList;
    if ( eventInfoPassiveSkillList )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        eventInfoPassiveSkillList,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__);
        if ( !v10 )
          break;
        if ( !v13.fields._current )
          sub_1C93D2C(v10, v11);
        v12 = *(__int64 *)((char *)&v13.fields._current->klass + (unsigned __int64)&qword_48);
        if ( v12 )
          LODWORD(v12) = *(_DWORD *)(v12 + 16);
        GameObjectHelper__SetActiveSafely(
          *(UnityEngine_GameObject_o **)((char *)&v13.fields._current->klass + (unsigned __int64)&dword_40),
          (_DWORD)v12 == skillId,
          0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
      return;
    }
LABEL_24:
    sub_1C93D2C(eventInfoPassiveSkillList, v8);
  }
}


void EventInfoPassiveSkillChangeDialog__Open(
        EventInfoPassiveSkillChangeDialog_o *this,
        EventItemUsedInfo_o *eventItemUsedInfo,
        System_Action_int__o *inOnChangeSkill,
        System_Action_o *inOnCancel,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x3
  int32_t itemId; // w1
  int32_t *p_skillId; // x8
  EventInfoPassiveSkillChangeDialog_c *v21; // x0
  UnityEngine_Object_o *changeButton; // x20
  __int64 v23; // x1
  struct UICommonButton_o *v24; // x0

  if ( (byte_4D31E04 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoPassiveSkillChangeDialog_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E04 = 1;
  }
  this->fields.onChangeSkill = inOnChangeSkill;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onChangeSkill,
    (int32_t)inOnChangeSkill,
    (int32_t)inOnChangeSkill,
    (int32_t)inOnCancel,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  this->fields.onCancel = inOnCancel;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.onCancel, (int32_t)inOnCancel, v12, v13, v14, v15, v16, v17);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  if ( eventItemUsedInfo )
  {
    itemId = eventItemUsedInfo->fields.itemId;
    p_skillId = &eventItemUsedInfo->fields.skillId;
  }
  else
  {
    v21 = EventInfoPassiveSkillChangeDialog_TypeInfo;
    if ( !EventInfoPassiveSkillChangeDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPassiveSkillChangeDialog_TypeInfo);
      v21 = EventInfoPassiveSkillChangeDialog_TypeInfo;
    }
    p_skillId = &v21->static_fields->InvalidSkillId;
    itemId = 0;
  }
  EventInfoPassiveSkillChangeDialog__SetupSkill(this, itemId, *p_skillId, v18);
  changeButton = (UnityEngine_Object_o *)this->fields.changeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(changeButton, 0, 0) )
  {
    v24 = this->fields.changeButton;
    if ( !v24 )
      sub_1C93D2C(0, v23);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, const MethodInfo *))v24->klass->vtable._5_set_isEnabled.methodPtr)(
      v24,
      0,
      v24->klass->vtable._5_set_isEnabled.method);
  }
}


void EventInfoPassiveSkillChangeDialog__SetupSkill(
        EventInfoPassiveSkillChangeDialog_o *this,
        int32_t itemId,
        int32_t currentSkillId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventInfoPassiveSkillPrefab; // x22
  UnityEngine_Object_o *eventInfoPassiveSkillParent; // x22
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *eventInfoPassiveSkillList; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x22
  struct System_Collections_Generic_List_EventInfoPassiveSkillComponent__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  System_Int32_array *SkillList; // x0
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v18; // x20
  unsigned __int64 v19; // x27
  int32_t v20; // w22
  UnityEngine_Transform_o *v21; // x21
  Il2CppObject *v22; // x23
  UnityEngine_Object_o *v23; // x23
  Il2CppObject *Component_object; // x21
  Il2CppObject *v25; // x23
  int32_t defaultSkillId; // w29
  System_Action_int__o *v27; // x24
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D31E07 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__get_Current__);
    sub_1C93AD4(&Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventInfoPassiveSkillComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E07 = 1;
  }
  entity = 0;
  memset(&v40, 0, sizeof(v40));
  eventInfoPassiveSkillPrefab = (UnityEngine_Object_o *)this->fields.eventInfoPassiveSkillPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventInfoPassiveSkillPrefab, 0, 0) )
  {
    eventInfoPassiveSkillParent = (UnityEngine_Object_o *)this->fields.eventInfoPassiveSkillParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(eventInfoPassiveSkillParent, 0, 0) )
    {
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoPassiveSkillList;
      if ( !eventInfoPassiveSkillList )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v39,
        eventInfoPassiveSkillList,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
      v40 = v39;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__) )
      {
        if ( !v40.fields._current )
          sub_1C93D2C(0, v11);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v40.fields._current,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72119908(gameObject, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
      v13 = this->fields.eventInfoPassiveSkillList;
      if ( !v13 )
        goto LABEL_48;
      size = v13->fields._size;
      v15 = v13->fields._version + 1;
      v13->fields._size = 0;
      v13->fields._version = v15;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0);
      this->fields.selectedSkillId = currentSkillId;
      this->fields.defaultSkillId = currentSkillId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !eventInfoPassiveSkillList )
        goto LABEL_48;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventInfoPassiveSkillList,
              &entity,
              itemId,
              (const MethodInfo_34632C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
LABEL_48:
        sub_1C93D2C(eventInfoPassiveSkillList, v9);
      SkillList = ItemEntity__GetSkillList((ItemEntity_o *)entity, 0);
      if ( SkillList )
      {
        max_length = SkillList->max_length;
        v18 = SkillList;
        if ( (int)max_length >= 1 )
        {
          v19 = 0;
          while ( 1 )
          {
            if ( v19 >= (unsigned int)max_length )
              sub_1C93D34(SkillList);
            v20 = v18->m_Items[v19];
            v22 = (Il2CppObject *)this->fields.eventInfoPassiveSkillPrefab;
            v21 = this->fields.eventInfoPassiveSkillParent;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object__52629400(
                                                                                       v22,
                                                                                       v21,
                                                                                       (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
            if ( !eventInfoPassiveSkillList )
              goto LABEL_48;
            v23 = (UnityEngine_Object_o *)eventInfoPassiveSkillList;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)eventInfoPassiveSkillList,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPassiveSkillComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
              break;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillMaster___);
            if ( !eventInfoPassiveSkillList )
              goto LABEL_48;
            v25 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)eventInfoPassiveSkillList,
                    v20,
                    (const MethodInfo_3463274 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)Component_object, 1, 0);
            defaultSkillId = this->fields.defaultSkillId;
            v27 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
            System_Action_int____ctor(
              v27,
              (Il2CppObject *)this,
              (intptr_t)Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__,
              0);
            if ( !Component_object )
              goto LABEL_48;
            EventInfoPassiveSkillComponent__Setup(
              (EventInfoPassiveSkillComponent_o *)Component_object,
              (SkillEntity_o *)v25,
              v20 == defaultSkillId,
              v27,
              v28);
            eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoPassiveSkillList;
            if ( !eventInfoPassiveSkillList )
              goto LABEL_48;
            items = eventInfoPassiveSkillList->fields._items;
            v36 = Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__Add__;
            ++eventInfoPassiveSkillList->fields._version;
            if ( !items )
              goto LABEL_48;
            v37 = eventInfoPassiveSkillList->fields._size;
            if ( (unsigned int)v37 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                eventInfoPassiveSkillList,
                Component_object,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + v37;
              eventInfoPassiveSkillList->fields._size = v37 + 1;
              v38[4] = (Il2CppClass *)Component_object;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)(v38 + 4),
                (int32_t)Component_object,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            LODWORD(max_length) = v18->max_length;
            if ( (__int64)++v19 >= (int)max_length )
              return;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_72119908(v23, 0);
        }
      }
    }
  }
}


void EventInfoPassiveSkillChangeDialog___OnChangeSkill_b__16_0(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4D31E0B & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E0B = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onChangeSkill,
    this->fields.selectedSkillId,
    (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
}


void EventInfoPassiveSkillChangeDialog___OnClose_b__17_0(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4D31E0C & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D31E0C = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  ActionExtensions__Call(this->fields.onCancel, 0);
}


bool EventInfoPassiveSkillChangeDialog__get_CanChange(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  EventInfoPassiveSkillChangeDialog_c *v3; // x0
  int32_t defaultSkillId; // w19

  if ( (byte_4D31E03 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoPassiveSkillChangeDialog_TypeInfo);
    byte_4D31E03 = 1;
  }
  v3 = EventInfoPassiveSkillChangeDialog_TypeInfo;
  defaultSkillId = this->fields.defaultSkillId;
  if ( !EventInfoPassiveSkillChangeDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPassiveSkillChangeDialog_TypeInfo);
    v3 = EventInfoPassiveSkillChangeDialog_TypeInfo;
  }
  return defaultSkillId != v3->static_fields->InvalidSkillId;
}


UnityEngine_GameObject_o *EventInfoPassiveSkillChangeDialog__get_closeBtnObject(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  return this->fields.closeBtn;
}