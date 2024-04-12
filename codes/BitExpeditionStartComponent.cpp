void __fastcall BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42AFD05 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16876/*"bit_expedition_start_dog_{0}"*/);
    sub_B52984(&StringLiteral_16875/*"bit_expedition_start"*/);
    sub_B52984(&StringLiteral_16819/*"bg_{0}"*/);
    byte_42AFD05 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_16875/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16875/*"bit_expedition_start"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.START_ANIMATION_NAME_BASE, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_16876/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16876/*"bit_expedition_start_dog_{0}"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_16819/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_16819/*"bg_{0}"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.BG_IMAGE_NAME_BASE, v17, v18, v19, v20, v21, v22, v23);
  this->fields.WAIT_TOUCH_SKIP_TIME = 0.3;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__AnimationPlaying(
        BitExpeditionStartComponent_o *this,
        UnityEngine_Animation_o *animation,
        System_String_o *animationName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42AFD03 & 1) == 0 )
  {
    sub_B52984(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
    byte_42AFD03 = 1;
  }
  v8 = sub_B52A54(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
    (BitExpeditionStartComponent__AnimationPlaying_d__11_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  *(_QWORD *)(v8 + 48) = this;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B52920((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  BitExpeditionStartComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_42AFD04 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_42AFD04 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_B52A5C(this, method);
  size = dogList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BitExpeditionStartComponent__SetUp(
        BitExpeditionStartComponent_o *this,
        EventExpeditionEntity_o *eventExpeditionEntity,
        int32_t pieceIdx,
        System_Action_o *setTouchPanelMethod,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x23
  const MethodInfo *v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  CommonConsumeEntity_o *Entity; // x0
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  int32_t eventId; // w26
  Il2CppObject *v21; // x0
  System_String_o *v22; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v33; // x22
  UnityEngine_GameObject_o *v34; // x22
  UnityEngine_Transform_o *v35; // x23
  UnityEngine_Transform_o *transform; // x22
  int v37; // s0
  System_String_o *v40; // x2
  const MethodInfo *v41; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v43; // x2
  System_Collections_IEnumerator_o *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-58h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AFD01 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_CommonConsumeMaster___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
    sub_B52984(&Method_System_Func_GameObject__bool___ctor__);
    sub_B52984(&System_Func_GameObject__bool__TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__);
    sub_B52984(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
    byte_42AFD01 = 1;
  }
  v11 = sub_B52A54(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
    (BitExpeditionStartComponent___c__DisplayClass9_0_o *)v11,
    0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !eventExpeditionEntity || !Instance )
    goto LABEL_25;
  Entity = CommonConsumeMaster__GetEntity(
             (CommonConsumeMaster_o *)Instance,
             eventExpeditionEntity->fields.commonConsumeId,
             1,
             0LL);
  if ( Entity )
  {
    itemSprite = this->fields.itemSprite;
    objectId = Entity->fields.objectId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetItem(itemSprite, objectId, 0LL);
  }
  bgSprite = this->fields.bgSprite;
  BG_IMAGE_NAME_BASE = this->fields.BG_IMAGE_NAME_BASE;
  eventId = eventExpeditionEntity->fields.eventId;
  idx = eventExpeditionEntity->fields.idx;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v22 = System_String__Format(BG_IMAGE_NAME_BASE, v21, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, bgSprite, v22, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v45 = pieceIdx;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v24, 0LL);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = Instance;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)Instance, v25, v26, v27, v28, v29, v30);
  dogList = this->fields.dogList;
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_GameObject__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v11,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_GameObject__bool___ctor__);
  v33 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                    (System_Func_TSource__bool__o *)v32,
                                                    (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                v33,
                                (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_25;
  v34 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_25;
  v35 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v35
    || (UnityEngine_Transform__SetParent(v35, (UnityEngine_Transform_o *)Instance, 0LL),
        transform = UnityEngine_GameObject__get_transform(v34, 0LL),
        *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v37, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_51066988(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_25:
    sub_B52A5C(Instance, v14);
  }
  UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v40, callback, v41);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v44 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v43);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v44, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B52A5C(0LL, method);
  UnityEngine_Animation__Stop(animation, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42AFD02 & 1) == 0 )
  {
    sub_B52984(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
    byte_42AFD02 = 1;
  }
  v5 = sub_B52A54(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
    (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__MoveNext(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v5; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  __int64 v7; // x1
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  __int64 v13; // x1
  __int64 v14; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_IEnumerator_c *v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  UnityEngine_Component_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v29; // x0
  __int64 v30; // x3
  __int64 v31; // x8
  __int64 v32; // x19
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0

  if ( (byte_42AD64F & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_bool___ctor__);
    sub_B52984(&System_Func_bool__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UnityEngine_Transform_TypeInfo);
    sub_B52984(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__);
    sub_B52984(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
    sub_B52984(&UnityEngine_WaitUntil_TypeInfo);
    byte_42AD64F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0LL);
    if ( !_4__this )
      goto LABEL_43;
    dogRoot = _4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_43;
    dogRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dogRoot, 0LL);
    if ( !dogRoot )
      goto LABEL_43;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0LL);
    if ( !Enumerator )
      sub_B52A5C(0LL, v13);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v21 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v22 = 0LL;
        v23 = (System_Collections_IEnumerator_c **)&v21->_1.interfaceOffsets->offset;
        while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 2;
          if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v24 = (__int64)&v21->vtable[*(_DWORD *)v23 + 1].method;
      }
      else
      {
LABEL_22:
        v24 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v20);
      }
      v25 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v24)(
                                         Enumerator,
                                         *(_QWORD *)(v24 + 8));
      if ( !v25 )
        goto LABEL_42;
      v27 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (UnityEngine_Transform_c *)v25->klass->_2.typeHierarchy[v27 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v25 = (UnityEngine_Component_o *)sub_B52D50(v25);
LABEL_42:
        sub_B52A5C(v25, v26);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    }
    v29 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
    if ( v29 )
    {
      v31 = *(_QWORD *)v29;
      v32 = v29;
      if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
      {
        v33 = 0LL;
        v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
        {
          ++v33;
          v34 += 4;
          if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
            goto LABEL_36;
        }
        v35 = v31 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_36:
        v35 = sub_AEB880(v29, System_IDisposable_TypeInfo, 0LL, v30);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_B52A54(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v5, 0LL);
      if ( v5 )
      {
        v5[1].klass = (Il2CppClass *)this->fields.animation;
        sub_B52920(&v5[1]);
        v8 = (System_Func_bool__o *)sub_B52A54(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v8,
          v5,
          Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
          (const MethodInfo_27742F0 *)Method_System_Func_bool___ctor__);
        v9 = (UnityEngine_WaitUntil_o *)sub_B52A54(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
        this->fields.__2__current = (Il2CppObject *)v9;
        p__2__current = &this->fields.__2__current;
        sub_B52920(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B52A5C(dogRoot, v7);
    }
  }
  return result;
}


Il2CppObject *__fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_IEnumerator_Reset(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__System_Collections_IEnumerator_get_Current(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BitExpeditionStartComponent__AnimationPlaying_d__11__System_IDisposable_Dispose(
        BitExpeditionStartComponent__AnimationPlaying_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__MoveNext(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v2; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v2 = this;
  if ( (byte_42AD650 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD650 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v2->fields.setTouchPanelMethod;
    v2->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B52A5C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_IEnumerator_Reset(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__System_Collections_IEnumerator_get_Current(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BitExpeditionStartComponent__WaitTouchSkip_d__10__System_IDisposable_Dispose(
        BitExpeditionStartComponent__WaitTouchSkip_d__10_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BitExpeditionStartComponent___c__DisplayClass11_0___ctor(
        BitExpeditionStartComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BitExpeditionStartComponent___c__DisplayClass11_0___AnimationPlaying_b__0(
        BitExpeditionStartComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B52A5C(0LL, method);
  return !UnityEngine_Animation__get_isPlaying(animation, 0LL);
}


void __fastcall BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
        BitExpeditionStartComponent___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BitExpeditionStartComponent___c__DisplayClass9_0___SetUp_b__0(
        BitExpeditionStartComponent___c__DisplayClass9_0_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( !x )
    sub_B52A5C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}