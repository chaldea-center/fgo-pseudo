void __fastcall ItemNumDispControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1A257 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemNumDispControl_TypeInfo, v1, v2);
    byte_4B1A257 = 1;
  }
  *ItemNumDispControl_TypeInfo->static_fields = (struct ItemNumDispControl_StaticFields)0x400000003F000000LL;
}


void __fastcall ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1A256 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B1A256 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SetAlphaDispInfoGroup,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemNumDispControl__InitEventAlphaAnim(
        ItemNumDispControl_o *this,
        System_Collections_Generic_List_GameObject__o *infoList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A252 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, infoList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15);
    byte_4B1A252 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SetAlphaDispInfoGroup,
    (int64_t)infoList,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v17) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v19);
    alphaAnimRoot = this->fields.alphaAnimRoot;
    this->fields.alphaAnimTgt = 1.0;
    if ( alphaAnimRoot )
    {
      ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))alphaAnimRoot->klass->vtable._8_set_alpha.method)(
        alphaAnimRoot,
        alphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      return;
    }
LABEL_17:
    sub_1BCAA3C(alphaAnimRoot, v18);
  }
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_17;
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))alphaAnimRoot->klass->vtable._8_set_alpha.method)(
    alphaAnimRoot,
    alphaAnimRoot->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  alphaAnimRoot = (struct UIWidget_o *)*p_SetAlphaDispInfoGroup;
  if ( !*p_SetAlphaDispInfoGroup )
    goto LABEL_17;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)alphaAnimRoot,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1BCAA3C(0LL, v21);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v24.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v23);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ItemNumDispControl_o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v3 = this;
  if ( (byte_4B1A253 & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                     method,
                                     v2);
    byte_4B1A253 = 1;
  }
  SetAlphaDispInfoGroup = v3->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_1BCAA3C(this, method);
  return SetAlphaDispInfoGroup->fields._size > 1;
}


void __fastcall ItemNumDispControl__NextDispEventInfoGroup(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemNumDispControl__SetDispEventInfoGroup(this, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemNumDispControl__SetDispEventInfoGroup(
        ItemNumDispControl_o *this,
        int32_t group_id,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *SetAlphaDispInfoGroup; // x0
  int32_t v16; // w8
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1A254 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&group_id, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13, v14);
    byte_4B1A254 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( (group_id & 0x80000000) != 0 )
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
    v16 = this->fields.infoGroupIdx + 1;
    this->fields.infoGroupIdx = v16;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_20;
    if ( v16 >= SetAlphaDispInfoGroup->fields._size )
      this->fields.infoGroupIdx = 0;
  }
  else
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
    this->fields.infoGroupIdx = group_id;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_20;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    SetAlphaDispInfoGroup,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1BCAA3C(0LL, v17);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v21.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v19);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SetAlphaDispInfoGroup,
                                                                               this->fields.infoGroupIdx,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__)) == 0LL
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_gameObject(
                                                                               (UnityEngine_GameObject_o *)SetAlphaDispInfoGroup,
                                                                               0LL)) == 0LL )
  {
LABEL_20:
    sub_1BCAA3C(SetAlphaDispInfoGroup, *(_QWORD *)&group_id);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SetAlphaDispInfoGroup, 1, 0LL);
}


void __fastcall ItemNumDispControl__Update(ItemNumDispControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( ItemNumDispControl__IsEventInfoGroups(this, method) )
    ItemNumDispControl__UpdateEventAlphaAnim(this, v3);
}


void __fastcall ItemNumDispControl__UpdateEventAlphaAnim(ItemNumDispControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  CommonUI_o *IsEventInfoGroups; // x0
  __int64 v15; // x1
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double inited; // q0
  float alphaAnimTgt; // s10
  float v20; // s8
  ItemNumDispControl_c *v21; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v23; // x0
  float alphaAnimTimeOld; // s12
  float v25; // s9
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1A255 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6, v7);
    sub_1BCA7E0(&ItemNumDispControl_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B1A255 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsEventInfoGroups = (CommonUI_o *)ItemNumDispControl__IsEventInfoGroups(this, method);
  alphaAnimRoot = this->fields.alphaAnimRoot;
  if ( !alphaAnimRoot )
    goto LABEL_28;
  klass = alphaAnimRoot->klass;
  if ( ((unsigned __int8)IsEventInfoGroups & 1) != 0 )
  {
    inited = ((long double (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer))klass->vtable._7_get_alpha.method)(
               this->fields.alphaAnimRoot,
               klass->vtable._8_set_alpha.methodPtr);
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v20 = *(float *)&inited;
    v21 = ItemNumDispControl_TypeInfo;
    if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo, v15);
      v21 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v21->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_28;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0LL) )
      {
        *(float *)&inited = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        v23 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v25 = *(float *)&inited;
        if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo, v15);
          v23 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v25 - alphaAnimTimeOld) >= v23->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        }
      }
    }
    *(float *)&inited = v20 + (float)((float)(alphaAnimTgt - v20) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&inited <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v26);
      LODWORD(inited) = 0;
    }
    IsEventInfoGroups = (CommonUI_o *)this->fields.alphaAnimRoot;
    if ( IsEventInfoGroups )
    {
      ((void (__fastcall *)(CommonUI_o *, Il2CppClass *, long double))IsEventInfoGroups->klass[1]._1.castClass)(
        IsEventInfoGroups,
        IsEventInfoGroups->klass[1]._1.declaringType,
        inited);
      return;
    }
LABEL_28:
    sub_1BCAA3C(IsEventInfoGroups, v15);
  }
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))klass->vtable._8_set_alpha.method)(
    this->fields.alphaAnimRoot,
    klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)IsEventInfoGroups,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v30.fields._current )
      sub_1BCAA3C(0LL, v27);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v30.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v29);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}