void __fastcall MenuListControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MenuListControl_StaticFields *static_fields; // x8

  if ( (byte_4C01218 & 1) == 0 )
  {
    sub_1C2E12C(&MenuListControl_TypeInfo, v1);
    byte_4C01218 = 1;
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  intptr_t v15; // w20
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  __int64 v18; // x1
  struct RestTimeNoticeControl_array *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_RuntimeTypeHandle_o v26; // 0:w0.4

  if ( (byte_4C01217 & 1) == 0 )
  {
    sub_1C2E12C(&MenuListControl_CombineKind_var, method);
    sub_1C2E12C(&System_Enum_TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_SetNoticeNumControl__TypeInfo, v5);
    sub_1C2E12C(&RestTimeNoticeControl___TypeInfo, v6);
    sub_1C2E12C(&System_Type_TypeInfo, v7);
    byte_4C01217 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_SetNoticeNumControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_SetNoticeNumControl___ctor__);
  this->fields.setNoticeNumList = (struct System_Collections_Generic_List_SetNoticeNumControl__o *)v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.setNoticeNumList, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (int)MenuListControl_CombineKind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v26.fields.value = v15;
  TypeFromHandle = System_Type__GetTypeFromHandle(v26, 0LL);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0LL);
  if ( !Names )
    sub_1C2E388(0LL, v18);
  v19 = (struct RestTimeNoticeControl_array *)sub_1C2E1D4(RestTimeNoticeControl___TypeInfo, Names->max_length);
  this->fields.restTimeNoticeList = v19;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.restTimeNoticeList,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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

  if ( (byte_4C01212 & 1) == 0 )
  {
    sub_1C2E12C(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C2E12C(&MenuListControl_TypeInfo, v2);
    byte_4C01212 = 1;
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
  v6 = (AlphaTransitionCalculator_o *)sub_1C2E378(AlphaTransitionCalculator_TypeInfo);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int v17; // w24
  int32_t v18; // w21
  int klass; // w8
  UnityEngine_GameObject_o *v20; // x22
  unsigned int v21; // w27
  int *v22; // x8
  EventNoticeControl_o *v23; // x23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8

  if ( (byte_4C0120B & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__Add__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_EventNoticeControl__TypeInfo, v5);
    byte_4C0120B = 1;
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
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventNoticeControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventNoticeControl___ctor__);
  this->fields.noticeList = (struct System_Collections_Generic_List_EventNoticeControl__o *)v9;
  p_noticeList = &this->fields.noticeList;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.noticeList, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  v17 = childCount - 1;
  if ( childCount - 1 >= 1 )
  {
    v18 = 0;
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
                                                 v18,
                                                 0LL);
      if ( !gameObject )
        goto LABEL_25;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)gameObject,
                                                 1,
                                                 (const MethodInfo_2FC8DC0 *)Method_UnityEngine_Component_GetComponentsInChildren_EventNoticeControl___);
      if ( !gameObject )
        goto LABEL_25;
      klass = (int)gameObject[1].klass;
      v20 = gameObject;
      if ( klass >= 1 )
        break;
LABEL_23:
      if ( ++v18 == v17 )
        return;
    }
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= klass )
        sub_1C2E390(gameObject, v7);
      v22 = (int *)(&v20->klass + (int)v21);
      v23 = (EventNoticeControl_o *)*((_QWORD *)v22 + 4);
      if ( !v23 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(*((UnityEngine_Component_o **)v22 + 4), 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      EventNoticeControl__Initialize(v23, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_noticeList;
      if ( !*p_noticeList )
        break;
      v30 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
      v31 = Method_System_Collections_Generic_List_EventNoticeControl__Add__;
      ++HIDWORD(gameObject[1].klass);
      if ( !v30 )
        break;
      klass_low = SLODWORD(gameObject[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v23,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * klass_low;
        LODWORD(gameObject[1].klass) = klass_low + 1;
        *(_QWORD *)(v33 + 32) = v23;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
      }
      klass = (int)v20[1].klass;
      if ( (int)++v21 >= klass )
        goto LABEL_23;
    }
LABEL_25:
    sub_1C2E388(gameObject, v7);
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
  int64_t gameObject; // x0
  __int64 v7; // x1
  int v8; // w8
  unsigned __int64 v9; // x20
  __int64 v10; // x26
  __int64 i; // x27
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_object__o *setNoticeNumList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  int64_t v22; // x1
  Il2CppClass **v23; // x0
  Il2CppObject *ComponentInChildren_object__50103608; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct RestTimeNoticeControl_array *restTimeNoticeList; // x28
  __int64 v32; // x0

  if ( (byte_4C0120C & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___, method);
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_SetNoticeNumControl__Add__, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C0120C = 1;
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
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)gameObject, 0LL) - 1;
  if ( v8 >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v8;
    for ( i = 32LL; ; i += 8LL )
    {
      gameObject = (int64_t)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v9, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_object__50103608(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_SetNoticeNumControl___);
      setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
      if ( !setNoticeNumList )
        break;
      items = setNoticeNumList->fields._items;
      v20 = Method_System_Collections_Generic_List_SetNoticeNumControl__Add__;
      ++setNoticeNumList->fields._version;
      if ( !items )
        break;
      size = setNoticeNumList->fields._size;
      v22 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          setNoticeNumList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        setNoticeNumList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 4), v22, v12, v13, v14, v15, v16, v17);
      }
      gameObject = (int64_t)this->fields.menuListGrid;
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        break;
      gameObject = (int64_t)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)gameObject, v9, 0LL);
      if ( !gameObject )
        break;
      ComponentInChildren_object__50103608 = UnityEngine_Component__GetComponentInChildren_object__50103608(
                                               (UnityEngine_Component_o *)gameObject,
                                               (const MethodInfo_2FC8538 *)Method_UnityEngine_Component_GetComponentInChildren_RestTimeNoticeControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = UnityEngine_Object__op_Inequality(
                     (UnityEngine_Object_o *)ComponentInChildren_object__50103608,
                     0LL,
                     0LL);
      if ( (gameObject & 1) != 0 )
      {
        restTimeNoticeList = this->fields.restTimeNoticeList;
        if ( !restTimeNoticeList )
          break;
        if ( ComponentInChildren_object__50103608 )
        {
          gameObject = sub_1C2E268(
                         ComponentInChildren_object__50103608,
                         restTimeNoticeList->obj.klass->_1.element_class);
          if ( !gameObject )
          {
            v32 = sub_1C2E3AC(0LL);
            sub_1C2E254(v32, 0LL);
          }
        }
        if ( v9 >= restTimeNoticeList->max_length )
          sub_1C2E390(gameObject, v7);
        restTimeNoticeList->m_Items[v9] = (RestTimeNoticeControl_o *)ComponentInChildren_object__50103608;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)((char *)restTimeNoticeList + i),
          (int64_t)ComponentInChildren_object__50103608,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      if ( v10 == ++v9 )
        return;
    }
LABEL_29:
    sub_1C2E388(gameObject, v7);
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

  if ( (byte_4C01213 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_4C01213 = 1;
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
                                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
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
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
          if ( !noticeList )
            break;
          EventNoticeControl__UpdateEventNotice((EventNoticeControl_o *)noticeList, 0LL);
          noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
          if ( !noticeList )
            break;
          noticeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      noticeList,
                                                                      v7,
                                                                      (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
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
      sub_1C2E388(noticeList, v8);
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

  if ( (byte_4C01216 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C01216 = 1;
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
      sub_1C2E388(v6, v7);
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

  if ( (byte_4C0120A & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C0120A = 1;
  }
  MenuListControl__UpdateAnim(this, method);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  restTimeNoticeList = this->fields.restTimeNoticeList;
  if ( !restTimeNoticeList )
LABEL_17:
    sub_1C2E388(Time, v5);
  v7 = *(_QWORD *)&restTimeNoticeList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = Time;
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1C2E390(Time, v5);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  const MethodInfo *v14; // x1
  float realtimeSinceStartup; // s0
  float alphaAnimTimeOld; // s9
  float v17; // s8
  MenuListControl_c *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4C01211 & 1) == 0 )
  {
    sub_1C2E12C(&MenuListControl_TypeInfo, method);
    sub_1C2E12C(&Method_TransitionCalculator_float__Update__, v3);
    sub_1C2E12C(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_4C01211 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = MenuListControl__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.fadeUIAlphaCalculator,
      (int64_t)AlphaCalculator,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    (const MethodInfo_392A0C4 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_19;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
    v17 = realtimeSinceStartup;
    v18 = MenuListControl_TypeInfo;
    if ( !MenuListControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MenuListControl_TypeInfo);
      v18 = MenuListControl_TypeInfo;
    }
    if ( (float)(v17 - alphaAnimTimeOld) >= v18->static_fields->ALPHA_ANIMATION_INTERVAL )
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
    MenuListControl__SetEventNotice(this, v19);
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_19:
    sub_1C2E388(fadeUIAlphaCalculator, v14);
  this->fields.alphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  MenuListControl__UpdateEventNoticeAlpha(this, v14);
}


void __fastcall MenuListControl__UpdateEventNotice(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C01215 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__get_Current__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__, v5);
    byte_4C01215 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
  if ( !noticeList )
    sub_1C2E388(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    noticeList,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventNoticeControl__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C2E388(0LL, v7);
    EventNoticeControl__CheckCombineCampaignData((EventNoticeControl_o *)v8.fields._current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl__Dispose__);
}


void __fastcall MenuListControl__UpdateEventNoticeAlpha(MenuListControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *noticeList; // x0
  int size; // w21
  int32_t v6; // w20
  __int64 v7; // x1

  if ( (byte_4C01214 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v3);
    byte_4C01214 = 1;
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
                                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !noticeList )
          break;
        EventNoticeControl__SetAlpha((EventNoticeControl_o *)noticeList, this->fields.alphaAnimNow, 0LL);
        if ( size == ++v6 )
          return;
        noticeList = (System_Collections_Generic_List_object__o *)this->fields.noticeList;
      }
      while ( noticeList );
      sub_1C2E388(noticeList, v7);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x22
  int max_length; // w8
  __int64 v29; // x23
  EventEntity_o *v30; // x8
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  MenuListControl_o *v40; // x1
  Il2CppClass **v41; // x0
  __int64 v42; // x23
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  Il2CppObject *current; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  int v54; // w29
  System_Func_object__bool__o *v55; // x24
  Il2CppObject *v56; // x0
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  EventInfoData_o *v59; // x22
  System_Collections_Generic_List_object__o *noticeList; // x0
  int32_t v61; // w23
  Il2CppObject *Item; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  System_Collections_Generic_List_object__o *v65; // x0
  Il2CppObject *v66; // x0
  __int64 v67; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v69; // x1
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_List_object__o *v77; // x0
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x8
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  v2 = this;
  if ( (byte_4C0120D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v5);
    sub_1C2E12C(&System_Func_EventEntity__bool__TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoData__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventInfoData___ctor__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventNoticeControl__get_Item__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_EventInfoData__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v14);
    sub_1C2E12C(&Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__, v15);
    this = (MenuListControl_o *)sub_1C2E12C(&MenuListControl___c__DisplayClass20_0_TypeInfo, v16);
    byte_4C0120D = 1;
  }
  memset(&v83, 0, sizeof(v83));
  combineData = v2->fields.combineData;
  if ( !combineData )
    goto LABEL_36;
  combineEventList = combineData->fields.combineEventList;
  if ( combineEventList )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventInfoData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventInfoData___ctor__);
    v2->fields.combineEventList = (struct System_Collections_Generic_List_EventInfoData__o *)v19;
    p_combineEventList = (System_Collections_Generic_List_object__o **)&v2->fields.combineEventList;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.combineEventList, (int64_t)v19, v21, v22, v23, v24, v25, v26);
    v27 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v27,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    max_length = combineEventList->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v29 >= max_length )
          sub_1C2E390(this, method);
        v30 = combineEventList->m_Items[v29];
        if ( !v30 )
          break;
        this = (MenuListControl_o *)v2->fields.combineData;
        if ( !this )
          break;
        this = (MenuListControl_o *)CombineInitData__getCombineEventData((CombineInitData_o *)this, v30->fields.id, 0LL);
        if ( this )
        {
          if ( !v27 )
            break;
          items = v27->fields._items;
          v38 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v27->fields._version;
          if ( !items )
            break;
          size = v27->fields._size;
          v40 = this;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v27,
              (Il2CppObject *)this,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v27->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v40;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)v40, v31, v32, v33, v34, v35, v36);
          }
        }
        max_length = combineEventList->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_17;
      }
LABEL_36:
      sub_1C2E388(this, method);
    }
LABEL_17:
    this = (MenuListControl_o *)EventCampaignMaster__CheckCampaignGrouping(
                                  (System_Collections_Generic_List_EventCampaignEntity__o *)v27,
                                  0LL);
    if ( !this )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v82,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v83 = v82;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v83,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__) )
    {
      v42 = sub_1C2E378(MenuListControl___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v42, 0LL);
      if ( !v42 )
        sub_1C2E388(v43, v44);
      current = v83.fields._current;
      *(_QWORD *)(v42 + 16) = v83.fields._current;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v42 + 16), (int64_t)current, v45, v46, v47, v48, v49, v50);
      if ( !*(_QWORD *)(v42 + 16) )
        sub_1C2E388(v52, v53);
      v54 = *(_DWORD *)(*(_QWORD *)(v42 + 16) + 20LL) - 1;
      if ( (unsigned int)v54 < 0x21 && ((0x1840782BBuLL >> v54) & 1) != 0 )
      {
        v55 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v55,
          (Il2CppObject *)v42,
          Method_MenuListControl___c__DisplayClass20_0__checkEventNotice_b__0__,
          0LL);
        v56 = System_Linq_Enumerable__FirstOrDefault_object__50289116(
                (System_Collections_Generic_IEnumerable_TSource__o *)combineEventList,
                (System_Func_TSource__bool__o *)v55,
                (const MethodInfo_2FF59DC *)Method_System_Linq_Enumerable_FirstOrDefault_EventEntity___);
        v59 = MenuListControl__setEventInfo(
                (MenuListControl_o *)v56,
                *(EventCampaignEntity_o **)(v42 + 16),
                (EventEntity_o *)v56,
                v57);
        noticeList = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !noticeList )
          sub_1C2E388(0LL, v58);
        v61 = dword_C42088[v54];
        Item = System_Collections_Generic_List_object___get_Item(
                 noticeList,
                 v61,
                 (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !Item )
          sub_1C2E388(0LL, v63);
        EventNoticeControl__SetCombineEventData((EventNoticeControl_o *)Item, v59, 0LL);
        v65 = (System_Collections_Generic_List_object__o *)v2->fields.noticeList;
        if ( !v65 )
          sub_1C2E388(0LL, v64);
        v66 = System_Collections_Generic_List_object___get_Item(
                v65,
                v61,
                (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_EventNoticeControl__get_Item__);
        if ( !v66 )
          sub_1C2E388(0LL, v67);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v66, 0LL);
        if ( !gameObject )
          sub_1C2E388(0LL, v69);
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v77 = *p_combineEventList;
        if ( !*p_combineEventList )
          sub_1C2E388(0LL, v70);
        v78 = v77->fields._items;
        v79 = Method_System_Collections_Generic_List_EventInfoData__Add__;
        ++v77->fields._version;
        if ( !v78 )
          sub_1C2E388(v77, v70);
        v80 = v77->fields._size;
        if ( (unsigned int)v80 >= v78->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v77,
            (Il2CppObject *)v59,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &v78->obj.klass + v80;
          v77->fields._size = v80 + 1;
          v81[4] = (Il2CppClass *)v59;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v81 + 4), (int64_t)v59, v71, v72, v73, v74, v75, v76);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v83,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_4C01209 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C01209 = 1;
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
      sub_1C2E388(v4, v5);
    }
  }
  return 0.0;
}


void __fastcall MenuListControl__resetScrollView(MenuListControl_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *menuListScrollView; // x0

  menuListScrollView = this->fields.menuListScrollView;
  if ( !menuListScrollView )
    sub_1C2E388(0LL, method);
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

  if ( (byte_4C0120F & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, targetSprite);
    byte_4C0120F = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetBannerIcon(targetSprite, eventEntity, 0LL);
  if ( !targetSprite
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetSprite, 0LL)) == 0LL )
  {
    sub_1C2E388(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall MenuListControl__setCombineEnableNum(
        MenuListControl_o *this,
        CombineEnableData_o *enableData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *setNoticeNumList; // x0

  if ( (byte_4C01210 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__, enableData);
    byte_4C01210 = 1;
  }
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    1,
                                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
  if ( !setNoticeNumList )
    goto LABEL_17;
  SetNoticeNumControl__setNoticeNum((SetNoticeNumControl_o *)setNoticeNumList, enableData->fields.limitUpEnableNum, 0LL);
  setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList;
  if ( !setNoticeNumList )
    goto LABEL_17;
  setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    setNoticeNumList,
                                                                    5,
                                                                    (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__);
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
                                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.npUpEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          11,
                                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL
    || (SetNoticeNumControl__setNoticeNum(
          (SetNoticeNumControl_o *)setNoticeNumList,
          enableData->fields.lvExceedEnableNum,
          0LL),
        (setNoticeNumList = (System_Collections_Generic_List_object__o *)this->fields.setNoticeNumList) == 0LL)
    || (setNoticeNumList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          setNoticeNumList,
                                                                          12,
                                                                          (const MethodInfo_366B5DC *)Method_System_Collections_Generic_List_SetNoticeNumControl__get_Item__)) == 0LL )
  {
LABEL_17:
    sub_1C2E388(setNoticeNumList, enableData);
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

  if ( (byte_4C0120E & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoData_TypeInfo, combineEventEnt);
    byte_4C0120E = 1;
  }
  v6 = sub_1C2E378(EventInfoData_TypeInfo);
  EventInfoData___ctor((EventInfoData_o *)v6, 0LL);
  if ( !eventEnt || !v6 || (*(_DWORD *)(v6 + 16) = eventEnt->fields.id, !combineEventEnt) )
    sub_1C2E388(v7, v8);
  *(_DWORD *)(v6 + 20) = combineEventEnt->fields.target;
  targetIds = combineEventEnt->fields.targetIds;
  *(_QWORD *)(v6 + 32) = targetIds;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)targetIds, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 24) = eventEnt->fields.iconId;
  EventName = EventEntity__getEventName(eventEnt, 0LL);
  *(_QWORD *)(v6 + 40) = EventName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)EventName, v17, v18, v19, v20, v21, v22);
  detail = eventEnt->fields.detail;
  *(_QWORD *)(v6 + 48) = detail;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)detail, v24, v25, v26, v27, v28, v29);
  *(float *)(v6 + 56) = (float)combineEventEnt->fields.value / 1000.0;
  *(_OWORD *)(v6 + 64) = *(_OWORD *)&eventEnt->fields.startedAt;
  *(_QWORD *)(v6 + 80) = eventEnt;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 80), (int64_t)eventEnt, v30, v31, v32, v33, v34, v35);
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
    sub_1C2E388(this, entity);
  return entity->fields.id == eventCampaignEntity->fields.eventId;
}