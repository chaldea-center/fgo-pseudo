void __fastcall BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42140AB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16810/*"bit_expedition_start_dog_{0}"*/, method);
    sub_B0D8A4(&StringLiteral_16809/*"bit_expedition_start"*/, v9);
    sub_B0D8A4(&StringLiteral_16753/*"bg_{0}"*/, v10);
    byte_42140AB = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_16809/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16809/*"bit_expedition_start"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.START_ANIMATION_NAME_BASE, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_16810/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16810/*"bit_expedition_start_dog_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_16753/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_16753/*"bg_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.BG_IMAGE_NAME_BASE, v19, v20, v21, v22, v23, v24, v25);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42140A9 & 1) == 0 )
  {
    sub_B0D8A4(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation);
    byte_42140A9 = 1;
  }
  v8 = sub_B0D974(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation, animationName);
  BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
    (BitExpeditionStartComponent__AnimationPlaying_d__11_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 48) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_42140AA & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_B0D8A4(
                                              &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                              method);
    byte_42140AA = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_B0D97C(this);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x23
  const MethodInfo *v22; // x1
  DataManager_o *Instance; // x0
  CommonConsumeEntity_o *Entity; // x0
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  int32_t eventId; // w26
  Il2CppObject *v30; // x0
  System_String_o *v31; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v44; // x22
  UnityEngine_GameObject_o *v45; // x22
  UnityEngine_Transform_o *v46; // x23
  UnityEngine_Transform_o *transform; // x22
  int v48; // s0
  System_String_o *v51; // x2
  const MethodInfo *v52; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v54; // x2
  System_Collections_IEnumerator_o *v55; // x0
  int32_t v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42140A7 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, eventExpeditionEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v12);
    sub_B0D8A4(&Method_System_Func_GameObject__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, v19);
    sub_B0D8A4(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo, v20);
    byte_42140A7 = 1;
  }
  v21 = sub_B0D974(
          BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo,
          eventExpeditionEntity,
          *(_QWORD *)&pieceIdx);
  BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
    (BitExpeditionStartComponent___c__DisplayClass9_0_o *)v21,
    0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v31 = System_String__Format(BG_IMAGE_NAME_BASE, v30, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, bgSprite, v31, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v56 = pieceIdx;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v33, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = Instance;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)Instance, v34, v35, v36, v37, v38, v39);
  dogList = this->fields.dogList;
  v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_GameObject__bool__TypeInfo,
                                                                             v41,
                                                                             v42);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v43,
    (Il2CppObject *)v21,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_GameObject__bool___ctor__);
  v44 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                    (System_Func_TSource__bool__o *)v43,
                                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                v44,
                                (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_25;
  v45 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_25;
  v46 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v46
    || (UnityEngine_Transform__SetParent(v46, (UnityEngine_Transform_o *)Instance, 0LL),
        transform = UnityEngine_GameObject__get_transform(v45, 0LL),
        *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v48, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_50564084(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(Instance);
  }
  UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v51, callback, v52);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v55 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v54);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v55, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B0D97C(0LL);
  UnityEngine_Animation__Stop(animation, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42140A8 & 1) == 0 )
  {
    sub_B0D8A4(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod);
    byte_42140A8 = 1;
  }
  v5 = sub_B0D974(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod, method);
  BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
    (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v14; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  struct UnityEngine_Animation_o *animation; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_bool__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_WaitUntil_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v31; // x8
  unsigned __int64 v32; // x10
  System_Collections_IEnumerator_c **v33; // x11
  __int64 v34; // x0
  UnityEngine_Component_o *v35; // x0
  __int64 v36; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x19
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0

  if ( (byte_4211DAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Transform_TypeInfo, v8);
    sub_B0D8A4(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__, v9);
    sub_B0D8A4(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v11);
    byte_4211DAE = 1;
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
      sub_B0D97C(0LL);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v28 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          p_offset += 4;
          if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v31 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        v33 = (System_Collections_IEnumerator_c **)&v31->_1.interfaceOffsets->offset;
        while ( *(v33 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v32;
          v33 += 2;
          if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v34 = (__int64)&v31->vtable[*(_DWORD *)v33 + 1].method;
      }
      else
      {
LABEL_22:
        v34 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v35 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v34)(
                                         Enumerator,
                                         *(_QWORD *)(v34 + 8));
      if ( !v35 )
        goto LABEL_42;
      v36 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (UnityEngine_Transform_c *)v35->klass->_2.typeHierarchy[v36 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v35 = (UnityEngine_Component_o *)sub_B0DC70(v35);
LABEL_42:
        sub_B0D97C(v35);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v35, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    }
    v38 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
    if ( v38 )
    {
      v39 = *(_QWORD *)v38;
      v40 = v38;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v41 = 0LL;
        v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
        {
          ++v41;
          v42 += 4;
          if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_36;
        }
        v43 = v39 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_36:
        v43 = sub_AA67A0(v38, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v14 = (Il2CppObject *)sub_B0D974(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, method, v2);
      System_Object___ctor(v14, 0LL);
      if ( v14 )
      {
        animation = this->fields.animation;
        v14[1].klass = (Il2CppClass *)animation;
        sub_B0D840(&v14[1], animation);
        v19 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v17, v18);
        System_Func_bool____ctor(
          v19,
          v14,
          Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
          (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
        v22 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v20, v21);
        UnityEngine_WaitUntil___ctor(v22, v19, 0LL);
        this->fields.__2__current = (Il2CppObject *)v22;
        p__2__current = &this->fields.__2__current;
        sub_B0D840(p__2__current, v22);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B0D97C(dogRoot);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v3; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v3 = this;
  if ( (byte_4211DAF & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_B0D8A4(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method);
    byte_4211DAF = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v3->fields.setTouchPanelMethod;
    v3->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    sub_B0D97C(this);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v7 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
  UnityEngine_WaitForSeconds___ctor(v7, WAIT_TOUCH_SKIP_TIME, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = &v3->fields.__2__current;
  sub_B0D840(p__2__current, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}