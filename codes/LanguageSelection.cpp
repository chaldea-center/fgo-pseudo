void LanguageSelection___ctor(LanguageSelection_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LanguageSelection__Awake(LanguageSelection_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_5974F73 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPopupList___);
    byte_5974F73 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPopupList___);
  this->fields.mList = (struct UIPopupList_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mList,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  LanguageSelection__Refresh(this, v10);
}


void LanguageSelection__Refresh(LanguageSelection_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mList; // x20
  __int64 v4; // x1
  System_String_o *knownLanguages; // x0
  Il2CppObject *v6; // x1
  struct UIPopupList_o *v7; // x8
  struct System_Collections_Generic_List_string__o *items; // x8
  int32_t size; // w2
  int v10; // w9
  unsigned __int64 v11; // x22
  __int64 klass; // x24
  struct UIPopupList_o *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  UIPopupList_o *v25; // x19

  if ( (byte_5974F75 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Localization_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F75 = 1;
  }
  mList = (UnityEngine_Object_o *)this->fields.mList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mList, 0, 0) )
  {
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v4);
    knownLanguages = (System_String_o *)Localization__get_knownLanguages(0);
    if ( knownLanguages )
    {
      v7 = this->fields.mList;
      if ( !v7 )
        goto LABEL_34;
      items = v7->fields.items;
      if ( !items )
        goto LABEL_34;
      size = items->fields._size;
      v10 = items->fields._version + 1;
      items->fields._size = 0;
      items->fields._version = v10;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)items->fields._items, 0, size, 0);
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v6);
      knownLanguages = (System_String_o *)Localization__get_knownLanguages(0);
      if ( !knownLanguages )
        goto LABEL_34;
      if ( (int)knownLanguages[1].klass >= 1 )
      {
        v11 = 0;
        klass = (unsigned int)knownLanguages[1].klass;
        while ( 1 )
        {
          v13 = this->fields.mList;
          if ( !v13 )
            break;
          v14 = (System_Collections_Generic_List_object__o *)v13->fields.items;
          if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v6);
          knownLanguages = (System_String_o *)Localization__get_knownLanguages(0);
          if ( !knownLanguages )
            break;
          if ( v11 >= LODWORD(knownLanguages[1].klass) )
            sub_2213CE4(knownLanguages);
          if ( !v14 )
            break;
          v21 = v14->fields._items;
          v6 = (Il2CppObject *)*((_QWORD *)&knownLanguages[1].monitor + v11);
          v22 = Method_System_Collections_Generic_List_string__Add__;
          ++v14->fields._version;
          if ( !v21 )
            break;
          v23 = v14->fields._size;
          if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v6,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->obj.klass + v23;
            v14->fields._size = v23 + 1;
            v24[4] = (Il2CppClass *)v6;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v6, v15, v16, v17, v18, v19, v20);
          }
          if ( klass == ++v11 )
            goto LABEL_29;
        }
LABEL_34:
        sub_2213CDC(knownLanguages, v6);
      }
LABEL_29:
      v25 = this->fields.mList;
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v6);
      knownLanguages = Localization__get_language(0);
      if ( !v25 )
        goto LABEL_34;
      UIPopupList__set_value(v25, knownLanguages, 0);
    }
  }
}


void LanguageSelection__Start(LanguageSelection_o *this, const MethodInfo *method)
{
  LanguageSelection_o *v2; // x19
  struct UIPopupList_o *mList; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x19
  LanguageSelection___c_c *v5; // x0
  struct LanguageSelection___c_StaticFields *static_fields; // x8
  EventDelegate_Callback_o *_9__2_0; // x20
  Il2CppObject *v8; // x21
  struct LanguageSelection___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v2 = this;
  if ( (byte_5974F74 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_LanguageSelection___c__Start_b__2_0__);
    this = (LanguageSelection_o *)sub_2213A60(&LanguageSelection___c_TypeInfo);
    byte_5974F74 = 1;
  }
  mList = v2->fields.mList;
  if ( !mList )
    sub_2213CDC(this, method);
  onChange = mList->fields.onChange;
  v5 = LanguageSelection___c_TypeInfo;
  if ( !*(&LanguageSelection___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(LanguageSelection___c_TypeInfo, method);
    v5 = LanguageSelection___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__2_0 = static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      static_fields = LanguageSelection___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(_9__2_0, v8, Method_LanguageSelection___c__Start_b__2_0__, 0);
    v9 = LanguageSelection___c_TypeInfo->static_fields;
    v9->__9__2_0 = _9__2_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__2_0, (int32_t)_9__2_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method);
  EventDelegate__Add(onChange, _9__2_0, 0);
}


void LanguageSelection___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974F76 & 1) == 0 )
  {
    sub_2213A60(&LanguageSelection___c_TypeInfo);
    byte_5974F76 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(LanguageSelection___c_TypeInfo);
  System_Object___ctor(v1, 0);
  LanguageSelection___c_TypeInfo->static_fields->__9 = (struct LanguageSelection___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)LanguageSelection___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void LanguageSelection___c___ctor(LanguageSelection___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void LanguageSelection___c___Start_b__2_0(LanguageSelection___c_o *this, const MethodInfo *method)
{
  struct UIPopupList_o *current; // x8
  System_String_o *mSelectedItem; // x19

  if ( (byte_5974F77 & 1) == 0 )
  {
    sub_2213A60(&Localization_TypeInfo);
    this = (LanguageSelection___c_o *)sub_2213A60(&UIPopupList_TypeInfo);
    byte_5974F77 = 1;
  }
  current = UIPopupList_TypeInfo->static_fields->current;
  if ( !current )
    sub_2213CDC(this, method);
  mSelectedItem = current->fields.mSelectedItem;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
  Localization__set_language(mSelectedItem, 0);
}