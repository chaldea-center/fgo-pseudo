void __fastcall BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E7E6F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16967/*"bit_expedition_start_dog_{0}"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16966/*"bit_expedition_start"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16910/*"bg_{0}"*/, v12, v13, v14);
    byte_42E7E6F = 1;
  }
  v15 = (System_Int32_array **)StringLiteral_16966/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16966/*"bit_expedition_start"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.START_ANIMATION_NAME_BASE, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_16967/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16967/*"bit_expedition_start_dog_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_16910/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_16910/*"bg_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.BG_IMAGE_NAME_BASE, v23, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_42E7E6D & 1) == 0 )
  {
    sub_B5D5C4(
      &BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo,
      (_DWORD)animation,
      (_DWORD)animationName,
      callBack);
    byte_42E7E6D = 1;
  }
  v8 = sub_B5D694(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
    (BitExpeditionStartComponent__AnimationPlaying_d__11_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  *(_QWORD *)(v8 + 48) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v23, v24, v25, v26, v27, v28);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BitExpeditionStartComponent_o *v4; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v7; // w9

  v4 = this;
  if ( (byte_42E7E6E & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                              (_DWORD)method,
                                              v2,
                                              v3);
    byte_42E7E6E = 1;
  }
  dogList = v4->fields.dogList;
  if ( !dogList )
    sub_B5D69C(this, method);
  size = dogList->fields._size;
  v7 = -1;
  do
    ++v7;
  while ( v7 < size );
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  __int64 v41; // x23
  const MethodInfo *v42; // x1
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  CommonConsumeEntity_o *Entity; // x0
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  int32_t eventId; // w26
  Il2CppObject *v51; // x0
  System_String_o *v52; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v62; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v63; // x22
  UnityEngine_GameObject_o *v64; // x22
  UnityEngine_Transform_o *v65; // x23
  UnityEngine_Transform_o *transform; // x22
  int v67; // s0
  System_String_o *v70; // x2
  const MethodInfo *v71; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v73; // x2
  System_Collections_IEnumerator_o *v74; // x0
  int32_t v75; // [xsp+8h] [xbp-58h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E7E6B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventExpeditionEntity, pieceIdx, setTouchPanelMethod);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_GameObject__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_GameObject__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, v35, v36, v37);
    sub_B5D5C4(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo, v38, v39, v40);
    byte_42E7E6B = 1;
  }
  v41 = sub_B5D694(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
    (BitExpeditionStartComponent___c__DisplayClass9_0_o *)v41,
    0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v42);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v52 = System_String__Format(BG_IMAGE_NAME_BASE, v51, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, bgSprite, v52, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v75 = pieceIdx;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v54, 0LL);
  if ( !v41 )
    goto LABEL_25;
  *(_QWORD *)(v41 + 16) = Instance;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 16), (System_Int32_array **)Instance, v55, v56, v57, v58, v59, v60);
  dogList = this->fields.dogList;
  v62 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameObject__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v62,
    (Il2CppObject *)v41,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_GameObject__bool___ctor__);
  v63 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                    (System_Func_TSource__bool__o *)v62,
                                                    (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                v63,
                                (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_25;
  v64 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_25;
  v65 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v65
    || (UnityEngine_Transform__SetParent(v65, (UnityEngine_Transform_o *)Instance, 0LL),
        transform = UnityEngine_GameObject__get_transform(v64, 0LL),
        *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v67, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_51248368(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(Instance, v44);
  }
  UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v70, callback, v71);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v74 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v73);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v74, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B5D69C(0LL, method);
  UnityEngine_Animation__Stop(animation, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E7E6C & 1) == 0 )
  {
    sub_B5D5C4(
      &BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo,
      (_DWORD)setTouchPanelMethod,
      (_DWORD)method,
      v3);
    byte_42E7E6C = 1;
  }
  v6 = sub_B5D694(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
    (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = setTouchPanelMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)setTouchPanelMethod,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v31; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  __int64 v33; // x1
  System_Func_bool__o *v34; // x21
  UnityEngine_WaitUntil_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  __int64 v39; // x1
  __int64 v40; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v46; // x3
  System_Collections_IEnumerator_c *v47; // x8
  unsigned __int64 v48; // x10
  System_Collections_IEnumerator_c **v49; // x11
  __int64 v50; // x0
  UnityEngine_Component_o *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  __int64 v58; // x19
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0

  if ( (byte_42E5E06 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Transform_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__, v20, v21, v22);
    sub_B5D5C4(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v26, v27, v28);
    byte_42E5E06 = 1;
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
      sub_B5D69C(0LL, v39);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v43;
          p_offset += 4;
          if ( v43 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v40);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v47 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v48 = 0LL;
        v49 = (System_Collections_IEnumerator_c **)&v47->_1.interfaceOffsets->offset;
        while ( *(v49 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v48;
          v49 += 2;
          if ( v48 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 1].method;
      }
      else
      {
LABEL_22:
        v50 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v46);
      }
      v51 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v50)(
                                         Enumerator,
                                         *(_QWORD *)(v50 + 8));
      if ( !v51 )
        goto LABEL_42;
      v53 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v51->klass->_2.bitflags2 + 1) < (unsigned int)v53
        || (UnityEngine_Transform_c *)v51->klass->_2.typeHierarchy[v53 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v51 = (UnityEngine_Component_o *)sub_B5D990(v51);
LABEL_42:
        sub_B5D69C(v51, v52);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v51, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    }
    v55 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
    if ( v55 )
    {
      v57 = *(_QWORD *)v55;
      v58 = v55;
      if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
      {
        v59 = 0LL;
        v60 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
        {
          ++v59;
          v60 += 4;
          if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
            goto LABEL_36;
        }
        v61 = v57 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_36:
        v61 = sub_AF54C0(v55, System_IDisposable_TypeInfo, 0LL, v56);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v61)(v58, *(_QWORD *)(v61 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v31 = (Il2CppObject *)sub_B5D694(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v31, 0LL);
      if ( v31 )
      {
        v31[1].klass = (Il2CppClass *)this->fields.animation;
        sub_B5D560(&v31[1]);
        v34 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v34,
          v31,
          Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
          (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
        v35 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v35, v34, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_B5D560(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B5D69C(dogRoot, v33);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v4; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v4 = this;
  if ( (byte_42E5E07 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_B5D5C4(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   (_DWORD)method,
                                                                   v2,
                                                                   v3);
    byte_42E5E07 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    setTouchPanelMethod = v4->fields.setTouchPanelMethod;
    v4->fields.__1__state = -1;
    ActionExtensions__Call(setTouchPanelMethod, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_B5D69C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v8 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v8, WAIT_TOUCH_SKIP_TIME, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}