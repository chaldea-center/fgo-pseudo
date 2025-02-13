void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_4BDFF79 & 1) == 0 )
  {
    sub_1C21E38(&MenuListControl_TypeInfo);
    byte_4BDFF79 = 1;
  }
  static_fields = MenuListControl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x73F000000LL;
  static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MenuListControl___ctor(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  intptr_t v10; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v13; // x1
  struct RestTimeNoticeControl_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  if ( (byte_4BDFF78 & 1) == 0 )
  {
    sub_1C21E38(&MenuListControl_CombineKind_var);
    sub_1C21E38(&System_Enum_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
    sub_1C21E38(&RestTimeNoticeControl___TypeInfo);
    sub_1C21E38(&System_Type_TypeInfo);
    byte_4BDFF78 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.setNoticeNumList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_1C22094(0LL, v13);
  v14 = (struct RestTimeNoticeControl_array *)sub_1C21EE0(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v14;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.restTimeNoticeList,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


AlphaTransitionCalculator_o *__fastcall MenuListControl__CreateAlphaCalculator(
        MenuListControl_o *this,
        const MethodInfo *method)
{
  MenuListControl_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4BDFF73 & 1) == 0 )
  {
    sub_1C21E38(&AlphaTransitionCalculator_TypeInfo);
    sub_1C21E38(&MenuListControl_TypeInfo);
    byte_4BDFF73 = 1;
  }
  v2 = MenuListControl_TypeInfo;
  if ( !MenuListControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
    v2 = MenuListControl_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_ANIMATION_FRAME_NUM, 0LL);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_SPD,
         (float)MenuListControl_TypeInfo->static_fields->ALPHA_ANIMATION_FRAME_NUM,
         0LL);
  v5 = (AlphaTransitionCalculator_o *)sub_1C22084(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0LL);
  return v5;
}


void __fastcall MenuListControl__InitMenuEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t childCount; // w21
  System_Collections_Generic_List_object__o *v6; // x22
  struct System_Collections_Generic_List_EventNoticeControl__o **p_noticeList; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int v14; // w24
  int32_t v15; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v17; // x22
  unsigned int v18; // w27
  int *v19; // x8
  EventNoticeControl_o *v20; // x23
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 klass_low; // x10
  __int64 v30; // x8

  if ( (byte_4BDFF6C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventNoticeControl__TypeInfo);
    byte_4BDFF6C = 1;
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
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v6;
  p_noticeList = &this->fields.noticeList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.noticeList, (int64_t)v6, v8, v9, v10, v11, v12, v13);
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
                                                 (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v17 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v15 == v14 )
        return;
    }
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= klass )
        sub_1C2209C(gameObject, v4);
      v19 = (int *)(&v17->klass + (int)v18);
      v20 = (EventNoticeControl_o *)*((_QWORD *)v19 + 4);
      if ( !v20 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v19 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v20, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      v27 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v28 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v27 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v27 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v20,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = v27 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v30 + 32) = v20;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 32), (int64_t)v20, v21, v22, v23, v24, v25, v26);
      }
      klass = (int)v17[1].klass;
      if ( (int)++v18 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C22094(gameObject, v4);
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
  int64_t gameObject; // x0
  __int64 v4; // x1
  int v5; // w8
  unsigned __int64 v6; // x20
  __int64 v7; // x26
  __int64 i; // x27
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  int64_t v19; // x1
  Il2CppClass **v20; // x0
  Il2CppObject *ComponentInChildren_object__49965836; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v29; // x0

  if ( (byte_4BDFF6D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFF6D = 1;
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
  v5 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v5 >= 1 )
  {
    v6 = 0LL;
    v7 = (unsigned int)v5;
    for ( i = 32LL; ; i += 8LL )
    {
      gameObject = (int64_t)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v6, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_object__49965836(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v17 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v19 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), v19, v9, v10, v11, v12, v13, v14);
      }
      gameObject = (int64_t)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v6, 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_object__49965836 = UnityEngine_Component__GetComponentInChildren_object__49965836(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Inequality(
                     (UnityEngine_Object_o *)ComponentInChildren_object__49965836,
                     0LL,
                     0LL);
      if ( (gameObject & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__49965836 )
        {
          gameObject = sub_1C21F74(
                         ComponentInChildren_object__49965836,
                         restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v29 = sub_1C220B8(0LL);
            sub_1C21F60(v29, 0LL);
          }
        }
        if ( v6 >= restTimeNoticeList->max_length )
          sub_1C2209C(gameObject, v4);
        restTimeNoticeList->m_Items[v6] = (RestTimeNoticeControl_o *)ComponentInChildren_object__49965836;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)((char *)restTimeNoticeList + i),
          (int64_t)ComponentInChildren_object__49965836,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      if ( v7 == ++v6 )
        return;
    }
LABEL_29:
    sub_1C22094(gameObject, v4);
  }
}


void __fastcall MenuListControl__SetEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w8
  int v5; // w21
  int32_t v6; // w20
  __int64 v7; // x1

  if ( (byte_4BDFF74 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_4BDFF74 = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    v5 = size - 1;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v6,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)noticeList, 0LL) )
        {
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v6,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, 0LL);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v6,
                                                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__ChangeEventInfo((EventNoticeControl_o *)noticeList, 0LL);
        }
        if ( v5 == v6 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
        ++v6;
      }
      while ( noticeList );
      sub_1C22094(noticeList, v7);
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

  if ( (byte_4BDFF77 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFF77 = 1;
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
      sub_1C22094(v6, v7);
    }
  }
}


void __fastcall MenuListControl__Update(MenuListControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x21
  __int64 v6; // x8
  int64_t v7; // x19
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4BDFF6B & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFF6B = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1C22094(Time, v4);
  v6 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = Time;
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1C2209C(Time, v4);
      v9 = (UnityEngine_Object_o *)restTimeNoticeList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Time = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( (Time & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_17;
        RestTimeNoticeControl__UpdateRestTime((RestTimeNoticeControl_o *)v9, v7, v10);
      }
      LODWORD(v6) = restTimeNoticeList->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
}


void __fastcall MenuListControl__UpdateAnim(MenuListControl_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  const MethodInfo *v12; // x1
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v15; // s8
  MenuListControl_c *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4BDFF72 & 1) == 0 )
  {
    sub_1C21E38(&MenuListControl_TypeInfo);
    sub_1C21E38(&Method_TransitionCalculator_float__Update__);
    sub_1C21E38(&Method_TransitionCalculator_float__get_Current__);
    byte_4BDFF72 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.fadeUIAlphaCalculator,
      (int64_t)AlphaCalculator,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
    (const MethodInfo_390F058 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v15 = realtimeSinceStartup;
    v16 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v16 = MenuListControl_TypeInfo;
    }
    if ( (float)(v15 - alphaAnimTimeOld) >= v16->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    MenuListControl__SetEventNotice(this, v17);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_19:
    sub_1C22094(fadeUIAlphaCalculator, v12);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v12);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDFF76 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
    byte_4BDFF76 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    noticeList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C22094(0LL, v4);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v5.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v5; // w20
  __int64 v6; // x1

  if ( (byte_4BDFF75 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    byte_4BDFF75 = 1;
  }
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( noticeList )
  {
    size = noticeList->fields._size;
    if ( size >= 1 )
    {
      v5 = 0;
      do
      {
        noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    noticeList,
                                                                    v5,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, 0LL);
        if ( size == ++v5 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1C22094(noticeList, v6);
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
  struct CombineInitData_o *combineData; // x8
  struct EventEntity_array *combineEventList; // x20
  System_Collections_Generic_List_object__o *v5; // x22
  System_Collections_Generic_List_object__o **p_combineEventList; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x22
  int max_length; // w8
  __int64 v15; // x23
  EventEntity_o *v16; // x8
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  MenuListControl_o *v26; // x1
  Il2CppClass **v27; // x0
  __int64 v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *current; // x1
  __int64 v38; // x0
  __int64 v39; // x1
  int v40; // w29
  System_Func_object__bool__o *v41; // x24
  Il2CppObject *v42; // x0
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  EventInfoData_o *v45; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v47; // w23
  Il2CppObject *Item; // x0
  __int64 v49; // x1
  __int64 v50; // x1
  System_Collections_Generic_List_object__o *v51; // x0
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v55; // x1
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_List_object__o *v63; // x0
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x8
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4BDFF6E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C21E38(&System_Func_EventEntity__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventInfoData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_EventInfoData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C21E38(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__);
    this = (MenuListControl_o *)sub_1C21E38(&MenuListControl___c__DisplayClass20_0_TypeInfo);
    byte_4BDFF6E = 1;
  }
  memset(&v69, 0, sizeof(v69));
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v2->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v5;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v2->fields.combineEventList;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.combineEventList, (int64_t)v5, v7, v8, v9, v10, v11, v12);
    v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v13,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1C2209C(this, method);
        v16 = combineEventList->m_Items[v15];
        if ( !v16 )
          break;
        this = (MenuListControl_o *)v2->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v16->fields.id, 0LL);
        if ( this )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v24 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          v26 = this;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)this,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v27 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v27[4] = (Il2CppClass *)v26;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v26, v17, v18, v19, v20, v21, v22);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1C22094(this, method);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v13,
                                  0LL);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v69 = v68;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v69,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v28 = sub_1C22084(MenuListControl___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( !v28 )
        sub_1C22094(v29, v30);
      current = v69.fields._current;
      *(_QWORD *)(v28 + 16) = v69.fields._current;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)current, v31, v32, v33, v34, v35, v36);
      if ( !*(_QWORD *)(v28 + 16) )
        sub_1C22094(v38, v39);
      v40 = *(_DWORD *)(*(_QWORD *)(v28 + 16) + 20LL) - 1;
      if ( (unsigned int)v40 < 0x21 && ((0x1840782BBuLL >> v40) & 1) != 0 )
      {
        v41 = (System_Func_object__bool__o *)sub_1C22084(System_Func_EventEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v41,
          (Il2CppObject *)v28,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0LL);
        v42 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v41,
                (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v45 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v42,
                *(EventCampaignEntity_o **)(v28 + 16),
                (EventEntity_o *)v42,
                v43);
        noticeList = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !noticeList )
          sub_1C22094(0LL, v44);
        v47 = dword_C39FB0[v40];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v47,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1C22094(0LL, v49);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v45, 0LL);
        v51 = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !v51 )
          sub_1C22094(0LL, v50);
        v52 = System_Collections_Generic_List_object___get_Item(
                v51,
                v47,
                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v52 )
          sub_1C22094(0LL, v53);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
        if ( !gameObject )
          sub_1C22094(0LL, v55);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v63 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1C22094(0LL, v56);
        v64 = v63->fields._items;
        v65 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v63->fields._version;
        if ( !v64 )
          sub_1C22094(v63, v56);
        v66 = v63->fields._size;
        if ( (unsigned int)v66 >= v64->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v63,
            (Il2CppObject *)v45,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &v64->obj.klass + v66;
          v63->fields._size = v66 + 1;
          v67[4] = (Il2CppClass *)v45;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)v45, v57, v58, v59, v60, v61, v62);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v69,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_4BDFF6A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDFF6A = 1;
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
      sub_1C22094(v4, v5);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1C22094(0LL, method);
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

  if ( (byte_4BDFF70 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    byte_4BDFF70 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_1C22094(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_4BDFF71 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
    byte_4BDFF71 = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          12,
                                                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1C22094(setNoticeNumList, enableData);
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

  if ( (byte_4BDFF6F & 1) == 0 )
  {
    sub_1C21E38(&EventInfoData_TypeInfo);
    byte_4BDFF6F = 1;
  }
  v6 = sub_1C22084(EventInfoData_TypeInfo);
  EventInfoData___ctor((EventInfoData_o *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1C22094(v7, v8);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)targetIds, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)EventName, v17, v18, v19, v20, v21, v22);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)detail, v24, v25, v26, v27, v28, v29);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 80), (int64_t)eventEnt, v30, v31, v32, v33, v34, v35);
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
    sub_1C22094(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}