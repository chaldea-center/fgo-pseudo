void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_48E5ED0 & 1) == 0 )
  {
    sub_1B00CCC(&MenuListControl_TypeInfo, v1);
    byte_48E5ED0 = 1;
  }
  static_fields = MenuListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  intptr_t v11; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v14; // x1
  struct RestTimeNoticeControl_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_48E5ECF & 1) == 0 )
  {
    sub_1B00CCC(&MenuListControl_CombineKind_var, method);
    sub_1B00CCC(&System_Enum_TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v5);
    sub_1B00CCC(&RestTimeNoticeControl___TypeInfo, v6);
    sub_1B00CCC(&System_Type_TypeInfo, v7);
    byte_48E5ECF = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.setNoticeNumList, (int32_t)v8, v9, v10);
  v11 = (int)MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_1B00F28(0LL, v14);
  v15 = (struct RestTimeNoticeControl_array *)sub_1B00D74(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.restTimeNoticeList, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MenuListControl__CreateAlphaCalculator(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  MenuListControl_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  AlphaTransitionCalculator_o *v6; // x20

  if ( (byte_48E5ECA & 1) == 0 )
  {
    sub_1B00CCC(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1B00CCC(&MenuListControl_TypeInfo, v2);
    byte_48E5ECA = 1;
  }
  v3 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v3 = MenuListControl_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0LL);
  v6 = (AlphaTransitionCalculator_o *)sub_1B00F18(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  return v6;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int32_t childCount; // w21
  System_Collections_Generic_List_object__o *v9; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w24
  int32_t v14; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v16; // x22
  unsigned int v17; // w27
  int *v18; // x8
  EventNoticeControl_o *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  __int64 v25; // x8

  if ( (byte_48E5EC3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v5);
    byte_48E5EC3 = 1;
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
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v9;
  p_noticeList = &this->fields.noticeList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.noticeList, (int32_t)v9, v11, v12);
  v13 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v14 = 0;
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
                                                 v14,
                                                 0LL);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_2D5A1A0 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v16 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v14 == v13 )
        return;
    }
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= klass )
        sub_1B00F30(gameObject, v7);
      v18 = (int *)(&v16->klass + (int)v17);
      v19 = (EventNoticeControl_o *)*((_QWORD *)v18 + 4);
      if ( !v19 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v18 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v19, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      v22 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v23 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v22 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v22 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v19,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = v22 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v25 + 32) = v19;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v19, v20, v21);
      }
      klass = (int)v16[1].klass;
      if ( (int)++v17 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B00F28(gameObject, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  int v8; // w8
  unsigned __int64 v9; // x20
  __int64 v10; // x26
  __int64 i; // x27
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v18; // x1
  Il2CppClass **v19; // x0
  Il2CppObject *ComponentInChildren_object__47552792; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v24; // x0

  if ( (byte_48E5EC4 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, method);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v4);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48E5EC4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
  if ( !gameObject )
    goto LABEL_29;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)gameObject,
                                             0LL);
  if ( !gameObject )
    goto LABEL_29;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v8 >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v8;
    for ( i = 32LL; ; i += 8LL )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v9,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__47552792(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_2D59918 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v16 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v18 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v19 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v18;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v12, v13);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetChild(
                                                 (UnityEngine_Transform_o *)gameObject,
                                                 v9,
                                                 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_object__47552792 = UnityEngine_Component__GetComponentInChildren_object__47552792(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_2D59918 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)ComponentInChildren_object__47552792,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__47552792 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_1B00E08(
                                                     ComponentInChildren_object__47552792,
                                                     restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v24 = sub_1B00F4C(0LL);
            sub_1B00DF4(v24, 0LL);
          }
        }
        if ( v9 >= restTimeNoticeList->max_length )
          sub_1B00F30(gameObject, v7);
        restTimeNoticeList->m_Items[v9] = (RestTimeNoticeControl_o *)ComponentInChildren_object__47552792;
        sub_1B00C70(
          (ServantStatusBattleListViewItem_o *)((char *)restTimeNoticeList + i),
          (int32_t)ComponentInChildren_object__47552792,
          v21,
          v22);
      }
      if ( v10 == ++v9 )
        return;
    }
LABEL_29:
    sub_1B00F28(gameObject, v7);
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w8
  int v6; // w21
  int32_t v7; // w20
  __int64 v8; // x1

  if ( (byte_48E5ECB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_48E5ECB = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    v6 = size - 1;
    if ( size >= 1 )
    {
      v7 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v7,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)noticeList, 0LL) )
        {
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v7,
                                                                      (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, 0LL);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v7,
                                                                      (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)noticeList, 0LL);
        }
        if ( v6 == v7 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        ++v7;
      }
      while ( noticeList );
      sub_1B00F28(noticeList, v8);
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
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v6; // x0
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v10; // x8

  if ( (byte_48E5ECE & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E5ECE = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v8 = this->fields.menuListScrollView;
    if ( !v8 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v8->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v10 = this->fields.menuListScrollView;
      if ( v10 )
      {
        v6 = v10->fields.verticalScrollBar;
        if ( v6 )
        {
          UIProgressBar__set_value(v6, value, 0LL);
          return;
        }
      }
LABEL_14:
      sub_1B00F28(v6, v7);
    }
  }
}


void __fastcall MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  __int64 v5; // x1
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  __int64 v7; // x8
  int64_t v8; // x19
  unsigned __int64 v9; // x22
  UnityEngine_Object_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_48E5EC2 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48E5EC2 = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1B00F28(Time, v5);
  v7 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = Time;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1B00F30(Time, v5);
      v10 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Time = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v10, v8, v11);
      }
      LODWORD(v7) = restTimeNoticeList->max_length;
      ++v9;
    }
    while ( (__int64)v9 < (int)v7 );
  }
}


void __fastcall MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v13; // s8
  MenuListControl_c *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_48E5EC9 & 1) == 0 )
  {
    sub_1B00CCC(&MenuListControl_TypeInfo, method);
    sub_1B00CCC(&Method_TransitionCalculator_float__Update__, v3);
    sub_1B00CCC(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_48E5EC9 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.fadeUIAlphaCalculator,
      (int32_t)AlphaCalculator,
      v8,
      v9);
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
    (const MethodInfo_367BC54 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v13 = realtimeSinceStartup;
    v14 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v14 = MenuListControl_TypeInfo;
    }
    if ( (float)(v13 - alphaAnimTimeOld) >= v14->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    MenuListControl__SetEventNotice(this, v15);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_19:
    sub_1B00F28(fadeUIAlphaCalculator, v10);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v10);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E5ECD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v5);
    byte_48E5ECD = 1;
  }
  memset(&v8, 0, sizeof(v8));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1B00F28(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    noticeList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B00F28(0LL, v7);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v8.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v6; // w20
  __int64 v7; // x1

  if ( (byte_48E5ECC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_48E5ECC = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v6,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, 0LL);
        if ( size == ++v6 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1B00F28(noticeList, v7);
    }
  }
  else
  {
    MenuListControl__InitMenuEventNotice(this, method);
  }
}


void __fastcall MenuListControl__checkEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  MenuListControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_object__o *v19; // x22
  System_Collections_Generic_List_object__o **p_combineEventList; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x22
  int max_length; // w8
  __int64 v25; // x23
  EventEntity_o *v26; // x8
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  MenuListControl_o *v32; // x1
  Il2CppClass **v33; // x0
  __int64 v34; // x23
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t current; // w1
  __int64 v40; // x0
  __int64 v41; // x1
  int v42; // w29
  System_Func_object__bool__o *v43; // x24
  Il2CppObject *v44; // x0
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  EventInfoData_o *v47; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v49; // w23
  Il2CppObject *Item; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  System_Collections_Generic_List_object__o *v53; // x0
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_List_object__o *v61; // x0
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x8
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_48E5EC5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_1B00CCC(&System_Func_EventEntity__bool__TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventInfoData__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_EventInfoData__TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v14);
    sub_1B00CCC(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v15);
    this = (MenuListControl_o *)sub_1B00CCC(&MenuListControl___c__DisplayClass20_0_TypeInfo, v16);
    byte_48E5EC5 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v2->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v19;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v2->fields.combineEventList;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.combineEventList, (int32_t)v19, v21, v22);
    v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v25 >= max_length )
          sub_1B00F30(this, method);
        v26 = combineEventList->m_Items[v25];
        if ( !v26 )
          break;
        this = (MenuListControl_o *)v2->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v26->fields.id, 0LL);
        if ( this )
        {
          if ( !v23 )
            break;
          items = v23->fields._items;
          v30 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          v32 = this;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)this,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v32;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v25 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1B00F28(this, method);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v23,
                                  0LL);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v66,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v67 = v66;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v67,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v34 = sub_1B00F18(MenuListControl___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v34, 0LL);
      if ( !v34 )
        sub_1B00F28(v35, v36);
      current = (int32_t)v67.fields._current;
      *(_QWORD *)(v34 + 16) = v67.fields._current;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v34 + 16), current, v37, v38);
      if ( !*(_QWORD *)(v34 + 16) )
        sub_1B00F28(v40, v41);
      v42 = *(_DWORD *)(*(_QWORD *)(v34 + 16) + 20LL) - 1;
      if ( (unsigned int)v42 < 0x21 && ((0x1840782BBuLL >> v42) & 1) != 0 )
      {
        v43 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_EventEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v43,
          (Il2CppObject *)v34,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0LL);
        v44 = System_Linq_Enumerable__FirstOrDefault_object__47729964(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v43,
                (const MethodInfo_2D84D2C *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v47 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v44,
                *(EventCampaignEntity_o **)(v34 + 16),
                (EventEntity_o *)v44,
                v45);
        noticeList = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !noticeList )
          sub_1B00F28(0LL, v46);
        v49 = dword_BAB7BC[v42];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v49,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1B00F28(0LL, v51);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v47, 0LL);
        v53 = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !v53 )
          sub_1B00F28(0LL, v52);
        v54 = System_Collections_Generic_List_object___get_Item(
                v53,
                v49,
                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v54 )
          sub_1B00F28(0LL, v55);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v54, 0LL);
        if ( !gameObject )
          sub_1B00F28(0LL, v57);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v61 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1B00F28(0LL, v58);
        v62 = v61->fields._items;
        v63 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v61->fields._version;
        if ( !v62 )
          sub_1B00F28(v61, v58);
        v64 = v61->fields._size;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            (Il2CppObject *)v47,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v61->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v47;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v47, v59, v60);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v67,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  UnityEngine_Object_o *menuListScrollView; // x20
  UIProgressBar_o *v4; // x0
  __int64 v5; // x1
  struct UIScrollView_o *v6; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v8; // x8

  if ( (byte_48E5EC1 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E5EC1 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.menuListScrollView;
    if ( !v6 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v6->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v8 = this->fields.menuListScrollView;
      if ( v8 )
      {
        v4 = v8->fields.verticalScrollBar;
        if ( v4 )
          return UIProgressBar__get_value(v4, 0LL);
      }
LABEL_14:
      sub_1B00F28(v4, v5);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1B00F28(0LL, method);
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

  if ( (byte_48E5EC7 & 1) == 0 )
  {
    sub_1B00CCC(&AtlasManager_TypeInfo, targetSprite);
    byte_48E5EC7 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_1B00F28(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_48E5EC8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__, enableData);
    byte_48E5EC8 = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                          9,
                                                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          10,
                                                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1B00F28(setNoticeNumList, enableData);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Int32_array *targetIds; // x1
  System_String_o *EventName; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_String_o *detail; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48E5EC6 & 1) == 0 )
  {
    sub_1B00CCC(&EventInfoData_TypeInfo, combineEventEnt);
    byte_48E5EC6 = 1;
  }
  v6 = sub_1B00F18(EventInfoData_TypeInfo);
  EventInfoData___ctor((EventInfoData_o *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1B00F28(v7, v8);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)targetIds, v9, v10);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)EventName, v13, v14);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)detail, v16, v17);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v6 + 80), (int32_t)eventEnt, v18, v19);
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
    sub_1B00F28(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}