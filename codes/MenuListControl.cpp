void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_49FFBE8 & 1) == 0 )
  {
    sub_1B640C8(&MenuListControl_TypeInfo, v1);
    byte_49FFBE8 = 1;
  }
  static_fields = MenuListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  intptr_t v12; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  struct RestTimeNoticeControl_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_49FFBE7 & 1) == 0 )
  {
    sub_1B640C8(&MenuListControl_CombineKind_var, method);
    sub_1B640C8(&System_Enum_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v6);
    sub_1B640C8(&RestTimeNoticeControl___TypeInfo, v7);
    sub_1B640C8(&System_Type_TypeInfo, v8);
    byte_49FFBE7 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SetNoticeNumControl__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.setNoticeNumList, (int32_t)v9, v10, v11);
  v12 = (int)MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v18.fields.value = v12;
  TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_1B64324(0LL);
  v15 = (struct RestTimeNoticeControl_array *)sub_1B64170(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.restTimeNoticeList, (int32_t)v15, v16, v17);
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
  __int64 v6; // x1
  __int64 v7; // x2
  AlphaTransitionCalculator_o *v8; // x20

  if ( (byte_49FFBE2 & 1) == 0 )
  {
    sub_1B640C8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1B640C8(&MenuListControl_TypeInfo, v2);
    byte_49FFBE2 = 1;
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
  v8 = (AlphaTransitionCalculator_o *)sub_1B64314(AlphaTransitionCalculator_TypeInfo, v6, v7);
  AlphaTransitionCalculator___ctor(v8, v4, v5, 0LL);
  return v8;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t childCount; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int v14; // w24
  int32_t v15; // w21
  __int64 v16; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v18; // x22
  unsigned int v19; // w27
  int *v20; // x8
  EventNoticeControl_o *v21; // x23
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  __int64 v28; // x8

  if ( (byte_49FFBDB & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v5);
    byte_49FFBDB = 1;
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
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventNoticeControl__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v10;
  p_noticeList = &this->fields.noticeList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.noticeList, (int32_t)v10, v12, v13);
  v14 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v15 = 0;
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
                                                 v15,
                                                 0LL);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v18 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v15 == v14 )
        return;
    }
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= klass )
        sub_1B6432C(gameObject, v16);
      v20 = (int *)(&v18->klass + (int)v19);
      v21 = (EventNoticeControl_o *)*((_QWORD *)v20 + 4);
      if ( !v21 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v20 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v21, v22);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      v25 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v26 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v25 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v25 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v21,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = v25 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v28 + 32) = v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)v21, v23, v24);
      }
      klass = (int)v18[1].klass;
      if ( (int)++v19 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1B64324(gameObject);
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
  int v7; // w8
  unsigned __int64 v8; // x20
  __int64 v9; // x26
  __int64 i; // x27
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v17; // x1
  Il2CppClass **v18; // x0
  Il2CppObject *ComponentInChildren_object__48431348; // x21
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v24; // x0

  if ( (byte_49FFBDC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FFBDC = 1;
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
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v7 >= 1 )
  {
    v8 = 0LL;
    v9 = (unsigned int)v7;
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
                                                 v8,
                                                 0LL);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v15 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v17 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v11, v12);
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
                                                 v8,
                                                 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_object__48431348 = UnityEngine_Component__GetComponentInChildren_object__48431348(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)ComponentInChildren_object__48431348,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__48431348 )
        {
          gameObject = (UnityEngine_GameObject_o *)sub_1B64204(
                                                     ComponentInChildren_object__48431348,
                                                     restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v24 = sub_1B64348(0LL);
            sub_1B641F0(v24, 0LL);
          }
        }
        if ( v8 >= restTimeNoticeList->max_length )
          sub_1B6432C(gameObject, v20);
        restTimeNoticeList->m_Items[v8] = (RestTimeNoticeControl_o *)ComponentInChildren_object__48431348;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)((char *)restTimeNoticeList + i),
          (int32_t)ComponentInChildren_object__48431348,
          v21,
          v22);
      }
      if ( v9 == ++v8 )
        return;
    }
LABEL_29:
    sub_1B64324(gameObject);
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w8
  int v6; // w21
  int32_t v7; // w20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_49FFBE3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_49FFBE3 = 1;
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
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
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
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, v8);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v7,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)noticeList, v9);
        }
        if ( v6 == v7 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        ++v7;
      }
      while ( noticeList );
      sub_1B64324(noticeList);
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
  struct UIScrollView_o *v7; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v9; // x8

  if ( (byte_49FFBE6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFBE6 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v7 = this->fields.menuListScrollView;
    if ( !v7 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v7->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      v9 = this->fields.menuListScrollView;
      if ( v9 )
      {
        v6 = v9->fields.verticalScrollBar;
        if ( v6 )
        {
          UIProgressBar__set_value(v6, value, 0LL);
          return;
        }
      }
LABEL_14:
      sub_1B64324(v6);
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

  if ( (byte_49FFBDA & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FFBDA = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1B64324(Time);
  v7 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = Time;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1B6432C(Time, v5);
      v10 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Time = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v10, v8, 0LL);
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
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v12; // s8
  MenuListControl_c *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_49FFBE1 & 1) == 0 )
  {
    sub_1B640C8(&MenuListControl_TypeInfo, method);
    sub_1B640C8(&Method_TransitionCalculator_float__Update__, v3);
    sub_1B640C8(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_49FFBE1 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1B6406C(
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
    (const MethodInfo_376C0A0 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v12 = realtimeSinceStartup;
    v13 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v13 = MenuListControl_TypeInfo;
    }
    if ( (float)(v12 - alphaAnimTimeOld) >= v13->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    sub_1B64324(fadeUIAlphaCalculator);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v14);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FFBE5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v5);
    byte_49FFBE5 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    noticeList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_49FFBE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_49FFBE4 = 1;
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
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, v7);
        if ( size == ++v6 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1B64324(noticeList);
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
  MenuListControl_o *v3; // x19
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
  __int64 v17; // x1
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_object__o *v20; // x22
  System_Collections_Generic_List_object__o **p_combineEventList; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x22
  __int64 v27; // x1
  int max_length; // w8
  __int64 v29; // x23
  EventEntity_o *v30; // x8
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  MenuListControl_o *v36; // x1
  Il2CppClass **v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x23
  __int64 v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t current; // w1
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  int v48; // w29
  System_Func_object__bool__o *v49; // x24
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x3
  EventInfoData_o *v52; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v54; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v56; // x2
  System_Collections_Generic_List_object__o *v57; // x0
  Il2CppObject *v58; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_List_object__o *v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x8
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+20h] [xbp-80h] BYREF

  v3 = this;
  if ( (byte_49FFBDD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v6);
    sub_1B640C8(&System_Func_EventEntity__bool__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventInfoData__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v15);
    sub_1B640C8(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v16);
    this = (MenuListControl_o *)sub_1B640C8(&MenuListControl___c__DisplayClass20_0_TypeInfo, v17);
    byte_49FFBDD = 1;
  }
  memset(&v68, 0, sizeof(v68));
  combineData = v3->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventInfoData__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v3->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v20;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v3->fields.combineEventList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.combineEventList, (int32_t)v20, v22, v23);
    v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                         v24,
                                                         v25);
    System_Collections_Generic_List_object____ctor(
      v26,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v29 >= max_length )
          sub_1B6432C(this, v27);
        v30 = combineEventList->m_Items[v29];
        if ( !v30 )
          break;
        this = (MenuListControl_o *)v3->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v30->fields.id, 0LL);
        if ( this )
        {
          if ( !v26 )
            break;
          items = v26->fields._items;
          v34 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          v36 = this;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)this,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v36;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v31, v32);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1B64324(this);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v26,
                                  0LL);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v67,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v68 = v67;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v68,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v40 = sub_1B64314(MenuListControl___c__DisplayClass20_0_TypeInfo, v38, v39);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      if ( !v40 )
        sub_1B64324(v41);
      current = (int32_t)v68.fields._current;
      *(_QWORD *)(v40 + 16) = v68.fields._current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 16), current, v42, v43);
      if ( !*(_QWORD *)(v40 + 16) )
        sub_1B64324(v45);
      v48 = *(_DWORD *)(*(_QWORD *)(v40 + 16) + 20LL) - 1;
      if ( (unsigned int)v48 < 0x21 && ((0x1840782BBuLL >> v48) & 1) != 0 )
      {
        v49 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventEntity__bool__TypeInfo, v46, v47);
        System_Func_object__bool____ctor(
          v49,
          (Il2CppObject *)v40,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0LL);
        v50 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v49,
                (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v52 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v50,
                *(EventCampaignEntity_o **)(v40 + 16),
                (EventEntity_o *)v50,
                v51);
        noticeList = (System_Collections_Generic_List_object__o *)v3->fields.noticeList;
        if ( !noticeList )
          sub_1B64324(0LL);
        v54 = dword_BDDEB4[v48];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v54,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1B64324(0LL);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v52, v56);
        v57 = (System_Collections_Generic_List_object__o *)v3->fields.noticeList;
        if ( !v57 )
          sub_1B64324(0LL);
        v58 = System_Collections_Generic_List_object___get_Item(
                v57,
                v54,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v58 )
          sub_1B64324(0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v58, 0LL);
        if ( !gameObject )
          sub_1B64324(0LL);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v62 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1B64324(0LL);
        v63 = v62->fields._items;
        v64 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v62->fields._version;
        if ( !v63 )
          sub_1B64324(v62);
        v65 = v62->fields._size;
        if ( (unsigned int)v65 >= v63->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v62,
            (Il2CppObject *)v52,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = &v63->obj.klass + v65;
          v62->fields._size = v65 + 1;
          v66[4] = (Il2CppClass *)v52;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v52, v60, v61);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v68,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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
  struct UIScrollView_o *v5; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v7; // x8

  if ( (byte_49FFBD9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FFBD9 = 1;
  }
  menuListScrollView = (UnityEngine_Object_o *)this->fields.menuListScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(menuListScrollView, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v5 = this->fields.menuListScrollView;
    if ( !v5 )
      goto LABEL_14;
    verticalScrollBar = (UnityEngine_Object_o *)v5->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v7 = this->fields.menuListScrollView;
      if ( v7 )
      {
        v4 = v7->fields.verticalScrollBar;
        if ( v4 )
          return UIProgressBar__get_value(v4, 0LL);
      }
LABEL_14:
      sub_1B64324(v4);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1B64324(0LL);
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

  if ( (byte_49FFBDF & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, targetSprite);
    byte_49FFBDF = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_49FFBE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__, enableData);
    byte_49FFBE0 = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          10,
                                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1B64324(setNoticeNumList);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *targetIds; // x1
  System_String_o *EventName; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_o *detail; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FFBDE & 1) == 0 )
  {
    sub_1B640C8(&EventInfoData_TypeInfo, combineEventEnt);
    byte_49FFBDE = 1;
  }
  v6 = sub_1B64314(EventInfoData_TypeInfo, combineEventEnt, eventEnt);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1B64324(v7);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 32), (int32_t)targetIds, v8, v9);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)EventName, v12, v13);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 48), (int32_t)detail, v15, v16);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 80), (int32_t)eventEnt, v17, v18);
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
    sub_1B64324(this);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}