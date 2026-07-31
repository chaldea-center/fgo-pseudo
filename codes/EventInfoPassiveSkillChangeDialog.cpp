void EventInfoPassiveSkillChangeDialog___cctor(const MethodInfo *method)
{
  if ( (byte_59399A5 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoPassiveSkillChangeDialog_TypeInfo);
    byte_59399A5 = 1;
  }
  EventInfoPassiveSkillChangeDialog_TypeInfo->static_fields->InvalidSkillId = -1;
}


void EventInfoPassiveSkillChangeDialog___ctor(EventInfoPassiveSkillChangeDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoPassiveSkillComponent__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1

  if ( (byte_59399A4 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoPassiveSkillComponent__TypeInfo);
    byte_59399A4 = 1;
  }
  v3 = System_Collections_Generic_List_EventInfoPassiveSkillComponent__TypeInfo;
  *(_QWORD *)&this->fields.selectedSkillId = -1;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent___ctor__);
  this->fields.eventInfoPassiveSkillList = (struct System_Collections_Generic_List_EventInfoPassiveSkillComponent__o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventInfoPassiveSkillList,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11);
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

  if ( (byte_59399A0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeDialog__OnChangeSkill_b__16_0__);
    byte_59399A0 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoPassiveSkillChangeDialog_OnChangeSkill__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoPassiveSkillChangeDialog__OnChangeSkill_b__16_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoPassiveSkillChangeDialog__OnClose(EventInfoPassiveSkillChangeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_59399A1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeDialog_OnClose__);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeDialog__OnClose_b__17_0__);
    byte_59399A1 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoPassiveSkillChangeDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeDialog_OnClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoPassiveSkillChangeDialog_OnClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  __int64 v7; // x1
  UnityEngine_Object_o *changeButton; // x21
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *eventInfoPassiveSkillList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x9
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59399A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__get_Current__);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399A3 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( EventInfoPassiveSkillChangeDialog__get_CanChange(this, *(const MethodInfo **)&skillId)
    && BaseDialog__IsInputState((BaseDialog_o *)this, 0)
    && this->fields.defaultSkillId != skillId
    && this->fields.selectedSkillId != skillId )
  {
    v5 = Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__;
    if ( (*((_BYTE *)Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    changeButton = (UnityEngine_Object_o *)this->fields.changeButton;
    this->fields.selectedSkillId = skillId;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        eventInfoPassiveSkillList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__);
        if ( !v11 )
          break;
        if ( !v14.fields._current )
          sub_21FFECC(v11, v12);
        v13 = *(__int64 *)((char *)&v14.fields._current->klass + (unsigned __int64)&qword_48);
        if ( v13 )
          LODWORD(v13) = *(_DWORD *)(v13 + 16);
        GameObjectHelper__SetActiveSafely(
          *(UnityEngine_GameObject_o **)((char *)&v14.fields._current->klass + (unsigned __int64)&dword_40),
          (_DWORD)v13 == skillId,
          0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
      return;
    }
LABEL_24:
    sub_21FFECC(eventInfoPassiveSkillList, v9);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  int32_t itemId; // w1
  int32_t *p_skillId; // x8
  EventInfoPassiveSkillChangeDialog_c *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *changeButton; // x20
  __int64 v25; // x1
  struct UICommonButton_o *v26; // x0

  if ( (byte_593999F & 1) == 0 )
  {
    sub_21FFC50(&EventInfoPassiveSkillChangeDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593999F = 1;
  }
  this->fields.onChangeSkill = inOnChangeSkill;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onChangeSkill,
    (int32_t)inOnChangeSkill,
    (System_String_o *)inOnChangeSkill,
    (System_String_o *)inOnCancel,
    (int32_t)method,
    v5,
    v6,
    v7);
  this->fields.onCancel = inOnCancel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onCancel,
    (int32_t)inOnCancel,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  if ( eventItemUsedInfo )
  {
    itemId = eventItemUsedInfo->fields.itemId;
    p_skillId = &eventItemUsedInfo->fields.skillId;
  }
  else
  {
    v22 = EventInfoPassiveSkillChangeDialog_TypeInfo;
    if ( !*(&EventInfoPassiveSkillChangeDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoPassiveSkillChangeDialog_TypeInfo, v18);
      v22 = EventInfoPassiveSkillChangeDialog_TypeInfo;
    }
    p_skillId = &v22->static_fields->InvalidSkillId;
    itemId = 0;
  }
  EventInfoPassiveSkillChangeDialog__SetupSkill(this, itemId, *p_skillId, v19);
  changeButton = (UnityEngine_Object_o *)this->fields.changeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(changeButton, 0, 0) )
  {
    v26 = this->fields.changeButton;
    if ( !v26 )
      sub_21FFECC(0, v25);
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, const MethodInfo *))v26->klass->vtable._5_set_isEnabled.methodPtr)(
      v26,
      0,
      v26->klass->vtable._5_set_isEnabled.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoPassiveSkillChangeDialog__SetupSkill(
        EventInfoPassiveSkillChangeDialog_o *this,
        int32_t itemId,
        int32_t currentSkillId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventInfoPassiveSkillPrefab; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *eventInfoPassiveSkillParent; // x22
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *eventInfoPassiveSkillList; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x22
  struct System_Collections_Generic_List_EventInfoPassiveSkillComponent__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  System_Int32_array *SkillList; // x0
  __int64 v19; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v21; // x20
  unsigned __int64 v22; // x27
  Il2CppObject *v23; // x21
  UnityEngine_Transform_o *v24; // x23
  int32_t v25; // w22
  UnityEngine_Object_o *v26; // x23
  Il2CppObject *Component_object; // x21
  __int64 v28; // x1
  Il2CppObject *v29; // x23
  int32_t defaultSkillId; // w29
  System_Action_int__o *v31; // x24
  const MethodInfo *v32; // x4
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_59399A2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__get_Current__);
    sub_21FFC50(&Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventInfoPassiveSkillComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399A2 = 1;
  }
  eventInfoPassiveSkillPrefab = (UnityEngine_Object_o *)this->fields.eventInfoPassiveSkillPrefab;
  entity = 0;
  memset(&v44, 0, sizeof(v44));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&itemId);
  if ( !UnityEngine_Object__op_Equality(eventInfoPassiveSkillPrefab, 0, 0) )
  {
    eventInfoPassiveSkillParent = (UnityEngine_Object_o *)this->fields.eventInfoPassiveSkillParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( !UnityEngine_Object__op_Equality(eventInfoPassiveSkillParent, 0, 0) )
    {
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoPassiveSkillList;
      if ( !eventInfoPassiveSkillList )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        eventInfoPassiveSkillList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__GetEnumerator__);
      v44 = v43;
      v43.fields._list = 0;
      *(_QWORD *)&v43.fields._index = &v44;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__MoveNext__) )
      {
        if ( !v44.fields._current )
          sub_21FFECC(0, v12);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v44.fields._current,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v44,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoPassiveSkillComponent__Dispose__);
      v15 = this->fields.eventInfoPassiveSkillList;
      if ( !v15 )
        goto LABEL_48;
      size = v15->fields._size;
      v17 = v15->fields._version + 1;
      v15->fields._size = 0;
      v15->fields._version = v17;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0);
      this->fields.selectedSkillId = currentSkillId;
      this->fields.defaultSkillId = currentSkillId;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
      if ( !eventInfoPassiveSkillList )
        goto LABEL_48;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)eventInfoPassiveSkillList,
              &entity,
              itemId,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        return;
      eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)entity;
      if ( !entity )
LABEL_48:
        sub_21FFECC(eventInfoPassiveSkillList, v10);
      SkillList = ItemEntity__GetSkillList((ItemEntity_o *)entity, 0);
      if ( SkillList )
      {
        max_length = SkillList->max_length;
        v21 = SkillList;
        if ( (int)max_length >= 1 )
        {
          v22 = 0;
          while ( 1 )
          {
            if ( v22 >= (unsigned int)max_length )
              sub_21FFED4(SkillList);
            v23 = (Il2CppObject *)this->fields.eventInfoPassiveSkillPrefab;
            v24 = this->fields.eventInfoPassiveSkillParent;
            v25 = v21->m_Items[v22];
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
            eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)UnityEngine_Object__Instantiate_object__59506996(
                                                                                       v23,
                                                                                       v24,
                                                                                       (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            if ( !eventInfoPassiveSkillList )
              goto LABEL_48;
            v26 = (UnityEngine_Object_o *)eventInfoPassiveSkillList;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)eventInfoPassiveSkillList,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventInfoPassiveSkillComponent___);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
              break;
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
            eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
            if ( !eventInfoPassiveSkillList )
              goto LABEL_48;
            v29 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)eventInfoPassiveSkillList,
                    v25,
                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            BasicHelper__SetActiveSafely((UnityEngine_Component_o *)Component_object, 1, 0);
            defaultSkillId = this->fields.defaultSkillId;
            v31 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
            System_Action_int____ctor(
              v31,
              (Il2CppObject *)this,
              (intptr_t)Method_EventInfoPassiveSkillChangeDialog_OnSelectSkill__,
              0);
            if ( !Component_object )
              goto LABEL_48;
            EventInfoPassiveSkillComponent__Setup(
              (EventInfoPassiveSkillComponent_o *)Component_object,
              (SkillEntity_o *)v29,
              v25 == defaultSkillId,
              v31,
              v32);
            eventInfoPassiveSkillList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoPassiveSkillList;
            if ( !eventInfoPassiveSkillList )
              goto LABEL_48;
            items = eventInfoPassiveSkillList->fields._items;
            v40 = Method_System_Collections_Generic_List_EventInfoPassiveSkillComponent__Add__;
            ++eventInfoPassiveSkillList->fields._version;
            if ( !items )
              goto LABEL_48;
            v41 = eventInfoPassiveSkillList->fields._size;
            if ( (unsigned int)v41 >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                eventInfoPassiveSkillList,
                Component_object,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + v41;
              eventInfoPassiveSkillList->fields._size = v41 + 1;
              v42[4] = (Il2CppClass *)Component_object;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v42 + 4),
                (int32_t)Component_object,
                v33,
                v34,
                v35,
                v36,
                v37,
                v38);
            }
            LODWORD(max_length) = v21->max_length;
            if ( (__int64)++v22 >= (int)max_length )
              return;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
          UnityEngine_Object__Destroy_83246496(v26, 0);
        }
      }
    }
  }
}


void EventInfoPassiveSkillChangeDialog___OnChangeSkill_b__16_0(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_59399A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399A6 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onChangeSkill,
    this->fields.selectedSkillId,
    (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
}


void EventInfoPassiveSkillChangeDialog___OnClose_b__17_0(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_59399A7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59399A7 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  ActionExtensions__Call(this->fields.onCancel, 0);
}


bool EventInfoPassiveSkillChangeDialog__get_CanChange(
        EventInfoPassiveSkillChangeDialog_o *this,
        const MethodInfo *method)
{
  EventInfoPassiveSkillChangeDialog_c *v3; // x0
  int32_t defaultSkillId; // w19

  if ( (byte_593999E & 1) == 0 )
  {
    sub_21FFC50(&EventInfoPassiveSkillChangeDialog_TypeInfo);
    byte_593999E = 1;
  }
  v3 = EventInfoPassiveSkillChangeDialog_TypeInfo;
  defaultSkillId = this->fields.defaultSkillId;
  if ( !*(&EventInfoPassiveSkillChangeDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoPassiveSkillChangeDialog_TypeInfo, method);
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