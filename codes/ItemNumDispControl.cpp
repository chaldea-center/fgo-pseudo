void __fastcall ItemNumDispControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00276 & 1) == 0 )
  {
    sub_1B640C8(&ItemNumDispControl_TypeInfo, v1);
    byte_4A00276 = 1;
  }
  *ItemNumDispControl_TypeInfo->static_fields = (struct ItemNumDispControl_StaticFields)0x400000003F000000LL;
}


void __fastcall ItemNumDispControl___ctor(ItemNumDispControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A00275 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    byte_4A00275 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.SetAlphaDispInfoGroup = (struct System_Collections_Generic_List_GameObject__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SetAlphaDispInfoGroup, (int32_t)v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemNumDispControl__InitEventAlphaAnim(
        ItemNumDispControl_o *this,
        System_Collections_Generic_List_GameObject__o *infoList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_GameObject__o **p_SetAlphaDispInfoGroup; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  struct UIWidget_o *alphaAnimRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00271 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, infoList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_4A00271 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  this->fields.SetAlphaDispInfoGroup = infoList;
  p_SetAlphaDispInfoGroup = &this->fields.SetAlphaDispInfoGroup;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.SetAlphaDispInfoGroup,
    (int32_t)infoList,
    (int32_t)method,
    v3);
  if ( ItemNumDispControl__IsEventInfoGroups(this, v10) )
  {
    ItemNumDispControl__SetDispEventInfoGroup(this, 0, v11);
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
    sub_1B64324(alphaAnimRoot);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)alphaAnimRoot,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1B64324(0LL);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v14.fields._current, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


bool __fastcall ItemNumDispControl__IsEventInfoGroups(ItemNumDispControl_o *this, const MethodInfo *method)
{
  ItemNumDispControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *SetAlphaDispInfoGroup; // x8

  v2 = this;
  if ( (byte_4A00272 & 1) == 0 )
  {
    this = (ItemNumDispControl_o *)sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_4A00272 = 1;
  }
  SetAlphaDispInfoGroup = v2->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup )
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *SetAlphaDispInfoGroup; // x0
  int32_t v11; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A00273 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&group_id);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    byte_4A00273 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( (group_id & 0x80000000) != 0 )
  {
    SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
    v11 = this->fields.infoGroupIdx + 1;
    this->fields.infoGroupIdx = v11;
    if ( !SetAlphaDispInfoGroup )
      goto LABEL_20;
    if ( v11 >= SetAlphaDispInfoGroup->fields._size )
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    SetAlphaDispInfoGroup,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v14.fields._current )
      sub_1B64324(0LL);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v14.fields._current, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)this->fields.SetAlphaDispInfoGroup;
  if ( !SetAlphaDispInfoGroup
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SetAlphaDispInfoGroup,
                                                                               this->fields.infoGroupIdx,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__)) == 0LL
    || (SetAlphaDispInfoGroup = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_gameObject(
                                                                               (UnityEngine_GameObject_o *)SetAlphaDispInfoGroup,
                                                                               0LL)) == 0LL )
  {
LABEL_20:
    sub_1B64324(SetAlphaDispInfoGroup);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *IsEventInfoGroups; // x0
  struct UIWidget_o *alphaAnimRoot; // x8
  UIWidget_c *klass; // x9
  long double inited; // q0
  float alphaAnimTgt; // s10
  float v13; // s8
  ItemNumDispControl_c *v14; // x0
  float EVENT_ALPHA_ANIM_SPD_RATE; // s11
  ItemNumDispControl_c *v16; // x0
  float alphaAnimTimeOld; // s12
  float v18; // s9
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A00274 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B640C8(&ItemNumDispControl_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A00274 = 1;
  }
  memset(&v21, 0, sizeof(v21));
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
    v13 = *(float *)&inited;
    v14 = ItemNumDispControl_TypeInfo;
    if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
    {
      inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
      v14 = ItemNumDispControl_TypeInfo;
    }
    EVENT_ALPHA_ANIM_SPD_RATE = v14->static_fields->EVENT_ALPHA_ANIM_SPD_RATE;
    if ( !this->fields.isPauseEventAlphaAnim )
    {
      IsEventInfoGroups = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !IsEventInfoGroups )
        goto LABEL_28;
      if ( !CommonUI__IsActive_UserPresentBoxWindow(IsEventInfoGroups, 0LL) )
      {
        *(float *)&inited = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        v16 = ItemNumDispControl_TypeInfo;
        alphaAnimTimeOld = this->fields.alphaAnimTimeOld;
        v18 = *(float *)&inited;
        if ( !ItemNumDispControl_TypeInfo->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(ItemNumDispControl_TypeInfo);
          v16 = ItemNumDispControl_TypeInfo;
        }
        if ( (float)(v18 - alphaAnimTimeOld) >= v16->static_fields->EVENT_ALPHA_ANIM_TIME_INTERVAL )
        {
          this->fields.alphaAnimTgt = 0.0;
          this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        }
      }
    }
    *(float *)&inited = v13 + (float)((float)(alphaAnimTgt - v13) * EVENT_ALPHA_ANIM_SPD_RATE);
    if ( *(float *)&inited <= 0.01 && this->fields.alphaAnimTgt <= 0.0 )
    {
      this->fields.alphaAnimTgt = 1.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      ItemNumDispControl__SetDispEventInfoGroup(this, -1, v19);
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
    sub_1B64324(IsEventInfoGroups);
  }
  ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, float))klass->vtable._8_set_alpha.method)(
    this->fields.alphaAnimRoot,
    klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  IsEventInfoGroups = (CommonUI_o *)this->fields.SetAlphaDispInfoGroup;
  if ( !IsEventInfoGroups )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)IsEventInfoGroups,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1B64324(0LL);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v21.fields._current, 0LL);
    if ( !gameObject )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}