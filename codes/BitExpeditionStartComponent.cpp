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

  if ( (byte_40F9094 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16697/*"bit_expedition_start_dog_{0}"*/, method);
    sub_B16FFC(&StringLiteral_16696/*"bit_expedition_start"*/, v9);
    sub_B16FFC(&StringLiteral_16640/*"bg_{0}"*/, v10);
    byte_40F9094 = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_16696/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16696/*"bit_expedition_start"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.START_ANIMATION_NAME_BASE, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_16697/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16697/*"bit_expedition_start_dog_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_16640/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_16640/*"bg_{0}"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.BG_IMAGE_NAME_BASE, v19, v20, v21, v22, v23, v24, v25);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F9092 & 1) == 0 )
  {
    sub_B16FFC(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation);
    byte_40F9092 = 1;
  }
  v8 = sub_B170CC(
         BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo,
         animation,
         animationName,
         callBack,
         method);
  BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
    (BitExpeditionStartComponent__AnimationPlaying_d__11_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 48) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v5; // w9

  if ( (byte_40F9093 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    byte_40F9093 = 1;
  }
  dogList = this->fields.dogList;
  if ( !dogList )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  CommonConsumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CommonConsumeEntity_o *Entity; // x0
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  int32_t eventId; // w26
  Il2CppObject *v31; // x0
  System_String_o *v32; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v34; // x0
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v47; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v48; // x22
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v52; // x23
  UnityEngine_Transform_o *v53; // x0
  UnityEngine_Transform_o *v54; // x22
  int v55; // s0
  UnityEngine_Animation_o *animation; // x0
  UnityEngine_Animation_o *v59; // x0
  System_String_o *v60; // x2
  const MethodInfo *v61; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v63; // x2
  System_Collections_IEnumerator_o *v64; // x0
  int32_t v65; // [xsp+8h] [xbp-58h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40F9090 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventExpeditionEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v12);
    sub_B16FFC(&Method_System_Func_GameObject__bool___ctor__, v13);
    sub_B16FFC(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, v19);
    sub_B16FFC(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo, v20);
    byte_40F9090 = 1;
  }
  v21 = sub_B170CC(
          BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo,
          eventExpeditionEntity,
          *(_QWORD *)&pieceIdx,
          setTouchPanelMethod,
          callback);
  BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
    (BitExpeditionStartComponent___c__DisplayClass9_0_o *)v21,
    0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v22);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !eventExpeditionEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  Entity = CommonConsumeMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
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
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v32 = System_String__Format(BG_IMAGE_NAME_BASE, v31, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, bgSprite, v32, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v65 = pieceIdx;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
  v35 = (System_Int32_array **)System_String__Format(DOG_ANIMATION_NAME_BASE, v34, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = v35;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), v35, v36, v37, v38, v39, v40, v41);
  dogList = this->fields.dogList;
  v47 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_GameObject__bool__TypeInfo,
                                                                             v43,
                                                                             v44,
                                                                             v45,
                                                                             v46);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v47,
    (Il2CppObject *)v21,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_GameObject__bool___ctor__);
  v48 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                    (System_Func_TSource__bool__o *)v47,
                                                    (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v49 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v48,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v49 )
    goto LABEL_25;
  v50 = v49;
  transform = UnityEngine_GameObject__get_transform(v49, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_25;
  v52 = transform;
  v53 = UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v52
    || (UnityEngine_Transform__SetParent(v52, v53, 0LL),
        v54 = UnityEngine_GameObject__get_transform(v50, 0LL),
        *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_one(0LL),
        !v54)
    || (UnityEngine_Transform__set_localScale(v54, *(UnityEngine_Vector3_o *)&v55, 0LL),
        (animation = this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_49743480(animation, this->fields.START_ANIMATION_NAME_BASE, 0LL),
        (v59 = this->fields.animation) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  UnityEngine_Animation__Play_49744236(v59, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v60, callback, v61);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v64 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v63);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v64, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B170D4();
  UnityEngine_Animation__Stop(animation, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40F9091 & 1) == 0 )
  {
    sub_B16FFC(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod);
    byte_40F9091 = 1;
  }
  v7 = sub_B170CC(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod, method, v3, v4);
  BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
    (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = setTouchPanelMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v7 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  bool result; // w0
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **animation; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_bool__o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  UnityEngine_WaitUntil_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  UnityEngine_Component_o *v54; // x0
  __int64 v55; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x19
  unsigned __int64 v60; // x10
  int *v61; // x11
  __int64 v62; // x0

  if ( (byte_40F71E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Transform_TypeInfo, v10);
    sub_B16FFC(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__, v11);
    sub_B16FFC(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v13);
    byte_40F71E3 = 1;
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
    transform = UnityEngine_GameObject__get_transform(dogRoot, 0LL);
    if ( !transform )
      goto LABEL_43;
    Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
    if ( !Enumerator )
      sub_B170D4();
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v47 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v47;
          p_offset += 4;
          if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v50 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)&v50->_1.interfaceOffsets->offset;
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 1].method;
      }
      else
      {
LABEL_22:
        v53 = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v54 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v53)(
                                         Enumerator,
                                         *(_QWORD *)(v53 + 8));
      if ( !v54 )
        goto LABEL_42;
      v55 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v54->klass->_2.bitflags2 + 1) < (unsigned int)v55
        || (UnityEngine_Transform_c *)v54->klass->_2.typeHierarchy[v55 - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_B173C8(v54);
LABEL_42:
        sub_B170D4();
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v54, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    }
    v57 = sub_B170BC(Enumerator, System_IDisposable_TypeInfo);
    if ( v57 )
    {
      v58 = *(_QWORD *)v57;
      v59 = v57;
      if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
      {
        v60 = 0LL;
        v61 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
        {
          ++v60;
          v61 += 4;
          if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
            goto LABEL_36;
        }
        v62 = v58 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_36:
        v62 = sub_AAFEF8(v57, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v16 = sub_B170CC(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( v16 )
      {
        animation = (System_Int32_array **)this->fields.animation;
        *(_QWORD *)(v16 + 16) = animation;
        sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), animation, v17, v18, v19, v20, v21, v22);
        v28 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v24, v25, v26, v27);
        System_Func_bool____ctor(
          v28,
          (Il2CppObject *)v16,
          Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
          (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
        v33 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v29, v30, v31, v32);
        UnityEngine_WaitUntil___ctor(v33, v28, 0LL);
        this->fields.__2__current = (Il2CppObject *)v33;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v33,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  if ( (byte_40F71E4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, method);
    byte_40F71E4 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = this->fields.setTouchPanelMethod;
    this->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_B170D4();
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v9 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
  UnityEngine_WaitForSeconds___ctor(v9, WAIT_TOUCH_SKIP_TIME, 0LL);
  this->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
    sub_B170D4();
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
    sub_B170D4();
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}