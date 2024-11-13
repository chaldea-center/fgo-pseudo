void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_4B19B22 & 1) == 0 )
  {
    sub_1BCA7E0(&MenuListControl_TypeInfo, v1, v2);
    byte_4B19B22 = 1;
  }
  static_fields = MenuListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  intptr_t v23; // w20
  __int64 v24; // x1
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v27; // x1
  struct RestTimeNoticeControl_array *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_RuntimeTypeHandle_o v35; // 0:w0.4

  if ( (byte_4B19B21 & 1) == 0 )
  {
    sub_1BCA7E0(&MenuListControl_CombineKind_var, method, v2);
    sub_1BCA7E0(&System_Enum_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v9, v10);
    sub_1BCA7E0(&RestTimeNoticeControl___TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Type_TypeInfo, v13, v14);
    byte_4B19B21 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SetNoticeNumControl__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.setNoticeNumList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v23 = (int)MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v22);
  v35.fields.value = v23;
  TypeFromHandle = System_Type__GetTypeFromHandle(v35, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v24);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_1BCAA3C(0LL, v27);
  v28 = (struct RestTimeNoticeControl_array *)sub_1BCA888(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v28;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.restTimeNoticeList,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MenuListControl__CreateAlphaCalculator(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  MenuListControl_c *v5; // x0
  float v6; // s8
  System_Func_float__float__float__float__o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  AlphaTransitionCalculator_o *v11; // x20

  if ( (byte_4B19B1C & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&MenuListControl_TypeInfo, v3, v4);
    byte_4B19B1C = 1;
  }
  v5 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, method);
    v5 = MenuListControl_TypeInfo;
  }
  v6 = ChangedFPSUtil__CovertFrameNumToSecond(v5->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0LL);
  v11 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v8, v9, v10);
  AlphaTransitionCalculator___ctor(v11, v6, v7, 0LL);
  return v11;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int32_t childCount; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_List_object__o *v16; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int v24; // w24
  int32_t v25; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v27; // x22
  unsigned int v28; // w27
  int *v29; // x8
  EventNoticeControl_o *v30; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  __int64 v40; // x8

  if ( (byte_4B19B15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v8, v9);
    byte_4B19B15 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_25;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventNoticeControl__TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v16;
  p_noticeList = &this->fields.noticeList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.noticeList, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v25,
                                                 0LL);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v27 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v25 == v24 )
        return;
    }
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= klass )
        sub_1BCAA44(gameObject, v11);
      v29 = (int *)(&v27->klass + (int)v28);
      v30 = (EventNoticeControl_o *)*((_QWORD *)v29 + 4);
      if ( !v30 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v29 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v30, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      v37 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v38 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v37 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v37 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v30,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = v37 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v40 + 32) = v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v30, v31, v32, v33, v34, v35, v36);
      }
      klass = (int)v27[1].klass;
      if ( (int)++v28 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1BCAA3C(gameObject, v11);
  }
}


void __fastcall MenuListControl__ResetAlphaAnimTime(MenuListControl_o *this, const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0

  this->fields.alphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  this->fields.alphaAnimTimeOld = realtimeSinceStartup;
  if ( fadeUIAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
}


void __fastcall MenuListControl__SetBudgeNumNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t gameObject; // x0
  __int64 v11; // x1
  int v12; // w8
  unsigned __int64 v13; // x20
  __int64 v14; // x26
  __int64 i; // x27
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v24; // x10
  __int64 size; // x11
  int64_t v26; // x1
  Il2CppClass **v27; // x0
  __int64 v28; // x1
  Il2CppObject *ComponentInChildren_object__49322392; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v37; // x0

  if ( (byte_4B19B16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B19B16 = 1;
  }
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  v12 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v12 >= 1 )
  {
    v13 = 0LL;
    v14 = (unsigned int)v12;
    for ( i = 32LL; ; i += 8LL )
    {
      gameObject = (int64_t)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v13, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_object__49322392(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v24 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v26 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), v26, v16, v17, v18, v19, v20, v21);
      }
      gameObject = (int64_t)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v13, 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      gameObject = UnityEngine_Object__op_Inequality(
                     (UnityEngine_Object_o *)ComponentInChildren_object__49322392,
                     0LL,
                     0LL);
      if ( (gameObject & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__49322392 )
        {
          gameObject = sub_1BCA91C(
                         ComponentInChildren_object__49322392,
                         restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v37 = sub_1BCAA60(0LL);
            sub_1BCA908(v37, 0LL);
          }
        }
        if ( v13 >= restTimeNoticeList->max_length )
          sub_1BCAA44(gameObject, v11);
        restTimeNoticeList->m_Items[v13] = (RestTimeNoticeControl_o *)ComponentInChildren_object__49322392;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)((char *)restTimeNoticeList + i),
          (int64_t)ComponentInChildren_object__49322392,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
      }
      if ( v14 == ++v13 )
        return;
    }
LABEL_29:
    sub_1BCAA3C(gameObject, v11);
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w8
  int v8; // w21
  int32_t v9; // w20
  __int64 v10; // x1

  if ( (byte_4B19B1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v4, v5);
    byte_4B19B1D = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    v8 = size - 1;
    if ( size >= 1 )
    {
      v9 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v9,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)noticeList, 0LL) )
        {
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v9,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, 0LL);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v9,
                                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)noticeList, 0LL);
        }
        if ( v8 == v9 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        ++v9;
      }
      while ( noticeList );
      sub_1BCAA3C(noticeList, v10);
    }
  }
}


void __fastcall MenuListControl__SetMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MenuListControl__checkEventNotice(this, method);
  MenuListControl__SetEventNotice(this, v3);
}


void __fastcall MenuListControl__SetScrollBarValue(MenuListControl_o *this, float value, const MethodInfo *method)
{
  __int64 v3; // x2
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v7; // x0
  __int64 v8; // x1
  struct UIScrollView_o *v9; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v11; // x8

  if ( (byte_4B19B20 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B19B20 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v9 = this->fields.menuListScrollView;
    if ( !v9 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v9->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v7 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v11 = this->fields.menuListScrollView;
      if ( v11 )
      {
        v7 = v11->fields.verticalScrollBar;
        if ( v7 )
        {
          UIProgressBar__set_value(v7, value, 0LL);
          return;
        }
      }
LABEL_14:
      sub_1BCAA3C(v7, v8);
    }
  }
}


void __fastcall MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  int64_t Time; // x0
  __int64 v8; // x1
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  __int64 v10; // x8
  int64_t v11; // x19
  unsigned __int64 v12; // x22
  UnityEngine_Object_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B19B14 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19B14 = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1BCAA3C(Time, v8);
  v10 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = Time;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1BCAA44(Time, v8);
      v13 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v12];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      Time = UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v13, v11, v14);
      }
      LODWORD(v10) = restTimeNoticeList->max_length;
      ++v12;
    }
    while ( (__int64)v12 < (int)v10 );
  }
}


void __fastcall MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v20; // s8
  MenuListControl_c *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4B19B1B & 1) == 0 )
  {
    sub_1BCA7E0(&MenuListControl_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, v4, v5);
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, v6, v7);
    byte_4B19B1B = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.fadeUIAlphaCalculator,
      (int64_t)AlphaCalculator,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_19;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v20 = realtimeSinceStartup;
    v21 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo, v17);
      v21 = MenuListControl_TypeInfo;
    }
    if ( (float)(v20 - alphaAnimTimeOld) >= v21->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_19;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0LL);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(
                                                           fadeUIAlphaCalculator,
                                                           0LL);
  if ( ((unsigned __int8)fadeUIAlphaCalculator & 1) != 0 )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_19;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0LL);
    this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    MenuListControl__SetEventNotice(this, v22);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_19:
    sub_1BCAA3C(fadeUIAlphaCalculator, v17);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v17);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *noticeList; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19B1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v8, v9);
    byte_4B19B1F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    noticeList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v12.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v8; // w20
  __int64 v9; // x1

  if ( (byte_4B19B1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v4, v5);
    byte_4B19B1E = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v8,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, 0LL);
        if ( size == ++v8 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1BCAA3C(noticeList, v9);
    }
  }
  else
  {
    MenuListControl__InitMenuEventNotice(this, method);
  }
}


void __fastcall MenuListControl__checkEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  MenuListControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_object__o *v35; // x22
  System_Collections_Generic_List_object__o **p_combineEventList; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Collections_Generic_List_object__o *v46; // x22
  int max_length; // w8
  __int64 v48; // x23
  EventEntity_o *v49; // x8
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  MenuListControl_o *v59; // x1
  Il2CppClass **v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x23
  __int64 v65; // x0
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *current; // x1
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  int v78; // w29
  System_Func_object__bool__o *v79; // x24
  Il2CppObject *v80; // x0
  const MethodInfo *v81; // x3
  __int64 v82; // x1
  EventInfoData_o *v83; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v85; // w23
  Il2CppObject *Item; // x0
  __int64 v87; // x1
  __int64 v88; // x1
  System_Collections_Generic_List_object__o *v89; // x0
  Il2CppObject *v90; // x0
  __int64 v91; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v93; // x1
  __int64 v94; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Collections_Generic_List_object__o *v101; // x0
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x8
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B19B17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v9, v10);
    sub_1BCA7E0(&System_Func_EventEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoData__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v29, v30);
    this = (MenuListControl_o *)sub_1BCA7E0(&MenuListControl___c__DisplayClass20_0_TypeInfo, v31, v32);
    byte_4B19B17 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  combineData = v4->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventInfoData__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v35,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v4->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v35;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v4->fields.combineEventList;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.combineEventList, (int64_t)v35, v37, v38, v39, v40, v41, v42);
    v46 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                         v43,
                                                         v44,
                                                         v45);
    System_Collections_Generic_List_object____ctor(
      v46,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v48 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v48 >= max_length )
          sub_1BCAA44(this, method);
        v49 = combineEventList->m_Items[v48];
        if ( !v49 )
          break;
        this = (MenuListControl_o *)v4->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v49->fields.id, 0LL);
        if ( this )
        {
          if ( !v46 )
            break;
          items = v46->fields._items;
          v57 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v46->fields._version;
          if ( !items )
            break;
          size = v46->fields._size;
          v59 = this;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v46,
              (Il2CppObject *)this,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &items->obj.klass + size;
            v46->fields._size = size + 1;
            v60[4] = (Il2CppClass *)v59;
            sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), (int64_t)v59, v50, v51, v52, v53, v54, v55);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v48 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1BCAA3C(this, method);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v46,
                                  0LL);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v106,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v107 = v106;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v107,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v64 = sub_1BCAA2C(MenuListControl___c__DisplayClass20_0_TypeInfo, v61, v62, v63);
      System_Object___ctor((Il2CppObject *)v64, 0LL);
      if ( !v64 )
        sub_1BCAA3C(v65, v66);
      current = v107.fields._current;
      *(_QWORD *)(v64 + 16) = v107.fields._current;
      sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 16), (int64_t)current, v67, v68, v69, v70, v71, v72);
      if ( !*(_QWORD *)(v64 + 16) )
        sub_1BCAA3C(v74, v75);
      v78 = *(_DWORD *)(*(_QWORD *)(v64 + 16) + 20LL) - 1;
      if ( (unsigned int)v78 < 0x21 && ((0x1840782BBuLL >> v78) & 1) != 0 )
      {
        v79 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_EventEntity__bool__TypeInfo, v75, v76, v77);
        System_Func_object__bool____ctor(
          v79,
          (Il2CppObject *)v64,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0LL);
        v80 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v79,
                (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v83 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v80,
                *(EventCampaignEntity_o **)(v64 + 16),
                (EventEntity_o *)v80,
                v81);
        noticeList = (System_Collections_Generic_List_object__o *)v4->fields.noticeList;
        if ( !noticeList )
          sub_1BCAA3C(0LL, v82);
        v85 = dword_C0E0B4[v78];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v85,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1BCAA3C(0LL, v87);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v83, 0LL);
        v89 = (System_Collections_Generic_List_object__o *)v4->fields.noticeList;
        if ( !v89 )
          sub_1BCAA3C(0LL, v88);
        v90 = System_Collections_Generic_List_object___get_Item(
                v89,
                v85,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v90 )
          sub_1BCAA3C(0LL, v91);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v90, 0LL);
        if ( !gameObject )
          sub_1BCAA3C(0LL, v93);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v101 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1BCAA3C(0LL, v94);
        v102 = v101->fields._items;
        v103 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v101->fields._version;
        if ( !v102 )
          sub_1BCAA3C(v101, v94);
        v104 = v101->fields._size;
        if ( (unsigned int)v104 >= v102->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v101,
            (Il2CppObject *)v83,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = &v102->obj.klass + v104;
          v101->fields._size = v104 + 1;
          v105[4] = (Il2CppClass *)v83;
          sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 4), (int64_t)v83, v95, v96, v97, v98, v99, v100);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v107,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoData__o *__fastcall MenuListControl__getCombineEventList(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  return this->fields.combineEventList;
}


float __fastcall MenuListControl__get_AlphaAnimNow(MenuListControl_o *this, const MethodInfo *method)
{
  return this->fields.alphaAnimNow;
}


float __fastcall MenuListControl__get_ScrollBarValue(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v5; // x0
  __int64 v6; // x1
  struct UIScrollView_o *v7; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v9; // x8

  if ( (byte_4B19B13 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19B13 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.menuListScrollView;
    if ( !v7 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v7->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v5 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v9 = this->fields.menuListScrollView;
      if ( v9 )
      {
        v5 = v9->fields.verticalScrollBar;
        if ( v5 )
          return UIProgressBar__get_value(v5, 0LL);
      }
LABEL_14:
      sub_1BCAA3C(v5, v6);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))menuListScrollView->klass->vtable._9_SetDragAmount.method)(
    menuListScrollView,
    0LL,
    menuListScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
}


void __fastcall MenuListControl__setBannerIcon(
        MenuListControl_o *this,
        UISprite_o *targetSprite,
        EventEntity_o *eventEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B19B19 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, targetSprite, eventEntity);
    byte_4B19B19 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, targetSprite);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_4B19B1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__, enableData, method);
    byte_4B19B1A = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !enableData )
    goto LABEL_17;
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.skillUpEnableNum, 0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    3,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum(
    (SetNoticeNumControl_o *)setNoticeNumList,
    enableData->fields.friendshipExceedEnableNum,
    0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          10,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          12,
                                                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(setNoticeNumList, enableData);
  }
  SetNoticeNumControl__setNoticeNum(
    (SetNoticeNumControl_o *)setNoticeNumList,
    enableData->fields.costumeCombineEnableNum,
    0LL);
}


EventInfoData_o *__fastcall MenuListControl__setEventInfo(
        MenuListControl_o *this,
        EventCampaignEntity_o *combineEventEnt,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Int32_array *targetIds; // x1
  System_String_o *EventName; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_String_o *detail; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B19B18 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoData_TypeInfo, combineEventEnt, eventEnt);
    byte_4B19B18 = 1;
  }
  v6 = sub_1BCAA2C(EventInfoData_TypeInfo, combineEventEnt, eventEnt, method);
  EventInfoData___ctor((EventInfoData_o *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1BCAA3C(v7, v8);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)targetIds, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)EventName, v17, v18, v19, v20, v21, v22);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)detail, v24, v25, v26, v27, v28, v29);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 80), (int64_t)eventEnt, v30, v31, v32, v33, v34, v35);
  return (EventInfoData_o *)v6;
}


void __fastcall MenuListControl___c__DisplayClass20_0___ctor(
        MenuListControl___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MenuListControl___c__DisplayClass20_0___checkEventNotice_b__0(
        MenuListControl___c__DisplayClass20_0_o *this,
        EventEntity_o *entity,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *eventCampaignEntity; // x8

  if ( !entity || (eventCampaignEntity = this->fields.eventCampaignEntity) == 0LL )
    sub_1BCAA3C(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}