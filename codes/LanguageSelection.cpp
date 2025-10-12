void LanguageSelection___ctor(LanguageSelection_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LanguageSelection__Awake(LanguageSelection_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C3BFBC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPopupList___);
    byte_4C3BFBC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPopupList___);
  this->fields.mList = (struct UIPopupList_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mList, (int32_t)Component_object, v4, v5);
  LanguageSelection__Refresh(this, v6);
}


void LanguageSelection__Refresh(LanguageSelection_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mList; // x20
  System_String_o *knownLanguages; // x0
  struct UIPopupList_o *v5; // x8
  struct System_Collections_Generic_List_string__o *items; // x8
  int32_t size; // w2
  int v8; // w9
  struct UIPopupList_o *v9; // x20
  unsigned __int64 v10; // x22
  __int64 klass; // x23
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x1
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4C3BFBE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C32C20(&Localization_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFBE = 1;
  }
  mList = (UnityEngine_Object_o *)this->fields.mList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mList, 0, 0) )
  {
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    knownLanguages = (System_String_o *)Localization__get_knownLanguages(0);
    if ( knownLanguages )
    {
      v5 = this->fields.mList;
      if ( !v5 )
        goto LABEL_34;
      items = v5->fields.items;
      if ( !items )
        goto LABEL_34;
      size = items->fields._size;
      v8 = items->fields._version + 1;
      items->fields._size = 0;
      items->fields._version = v8;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)items->fields._items, 0, size, 0);
      if ( !Localization_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      knownLanguages = (System_String_o *)Localization__get_knownLanguages(0);
      if ( !knownLanguages )
        goto LABEL_34;
      v9 = this->fields.mList;
      if ( (int)knownLanguages[1].klass >= 1 )
      {
        v10 = 0;
        klass = (unsigned int)knownLanguages[1].klass;
        while ( v9 )
        {
          v12 = (System_Collections_Generic_List_object__o *)v9->fields.items;
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          knownLanguages = (System_String_o *)Localization__get_knownLanguages(0);
          if ( !knownLanguages )
            break;
          if ( v10 >= LODWORD(knownLanguages[1].klass) )
            sub_1C32E84(knownLanguages);
          if ( !v12 )
            break;
          v15 = (Il2CppObject *)*((_QWORD *)&knownLanguages[1].monitor + v10);
          v16 = v12->fields._items;
          v17 = Method_System_Collections_Generic_List_string__Add__;
          ++v12->fields._version;
          if ( !v16 )
            break;
          v18 = v12->fields._size;
          if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v15,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &v16->obj.klass + v18;
            v12->fields._size = v18 + 1;
            v19[4] = (Il2CppClass *)v15;
            sub_1C32BC4((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
          }
          v9 = this->fields.mList;
          if ( klass == ++v10 )
            goto LABEL_29;
        }
LABEL_34:
        sub_1C32E7C(knownLanguages);
      }
LABEL_29:
      if ( !Localization_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      knownLanguages = Localization__get_language(0);
      if ( !v9 )
        goto LABEL_34;
      UIPopupList__set_value(v9, knownLanguages, 0);
    }
  }
}


void LanguageSelection__Start(LanguageSelection_o *this, const MethodInfo *method)
{
  LanguageSelection_o *v2; // x19
  struct UIPopupList_o *mList; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x19
  LanguageSelection___c_c *v5; // x0
  EventDelegate_Callback_o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct LanguageSelection___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v2 = this;
  if ( (byte_4C3BFBD & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_LanguageSelection___c__Start_b__2_0__);
    this = (LanguageSelection_o *)sub_1C32C20(&LanguageSelection___c_TypeInfo);
    byte_4C3BFBD = 1;
  }
  mList = v2->fields.mList;
  if ( !mList )
    sub_1C32E7C(this);
  onChange = mList->fields.onChange;
  v5 = LanguageSelection___c_TypeInfo;
  if ( !LanguageSelection___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LanguageSelection___c_TypeInfo);
    v5 = LanguageSelection___c_TypeInfo;
  }
  _9__2_0 = v5->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = LanguageSelection___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__2_0 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__2_0, v7, Method_LanguageSelection___c__Start_b__2_0__, 0);
    static_fields = LanguageSelection___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = _9__2_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v9, v10);
  }
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(onChange, _9__2_0, 0);
}


void LanguageSelection___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3BFBF & 1) == 0 )
  {
    sub_1C32C20(&LanguageSelection___c_TypeInfo);
    byte_4C3BFBF = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(LanguageSelection___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LanguageSelection___c_TypeInfo->static_fields->__9 = (struct LanguageSelection___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)LanguageSelection___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void LanguageSelection___c___ctor(LanguageSelection___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LanguageSelection___c___Start_b__2_0(LanguageSelection___c_o *this, const MethodInfo *method)
{
  struct UIPopupList_o *current; // x8
  System_String_o *mSelectedItem; // x19

  if ( (byte_4C3BFC0 & 1) == 0 )
  {
    sub_1C32C20(&Localization_TypeInfo);
    this = (LanguageSelection___c_o *)sub_1C32C20(&UIPopupList_TypeInfo);
    byte_4C3BFC0 = 1;
  }
  current = UIPopupList_TypeInfo->static_fields->current;
  if ( !current )
    sub_1C32E7C(this);
  mSelectedItem = current->fields.mSelectedItem;
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__set_language(mSelectedItem, 0);
}