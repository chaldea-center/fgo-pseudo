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

  if ( (byte_41875E8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16761/*"bit_expedition_start_dog_{0}"*/, method);
    sub_B2C35C(&StringLiteral_16760/*"bit_expedition_start"*/, v9);
    sub_B2C35C(&StringLiteral_16704/*"bg_{0}"*/, v10);
    byte_41875E8 = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_16760/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16760/*"bit_expedition_start"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.START_ANIMATION_NAME_BASE, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_16761/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_16761/*"bit_expedition_start_dog_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_16704/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_16704/*"bg_{0}"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.BG_IMAGE_NAME_BASE, v19, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_41875E6 & 1) == 0 )
  {
    sub_B2C35C(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation);
    byte_41875E6 = 1;
  }
  v8 = sub_B2C42C(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo);
  BitExpeditionStartComponent__AnimationPlaying_d__11___ctor(
    (BitExpeditionStartComponent__AnimationPlaying_d__11_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 48) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 48), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 32) = animation;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)animation, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v23, v24, v25, v26, v27, v28);
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
  if ( (byte_41875E7 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                              method);
    byte_41875E7 = 1;
  }
  dogList = v2->fields.dogList;
  if ( !dogList )
    sub_B2C434(this, method);
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
  __int64 v24; // x1
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
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v42; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *v43; // x22
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_Transform_o *v45; // x23
  UnityEngine_Transform_o *transform; // x22
  int v47; // s0
  System_String_o *v50; // x2
  const MethodInfo *v51; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v53; // x2
  System_Collections_IEnumerator_o *v54; // x0
  int32_t v55; // [xsp+8h] [xbp-58h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_41875E4 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, eventExpeditionEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v12);
    sub_B2C35C(&Method_System_Func_GameObject__bool___ctor__, v13);
    sub_B2C35C(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_B2C35C(&int_TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, v19);
    sub_B2C35C(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo, v20);
    byte_41875E4 = 1;
  }
  v21 = sub_B2C42C(BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo);
  BitExpeditionStartComponent___c__DisplayClass9_0___ctor(
    (BitExpeditionStartComponent___c__DisplayClass9_0_o *)v21,
    0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v22);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
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
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v32 = System_String__Format(BG_IMAGE_NAME_BASE, v31, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, bgSprite, v32, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v55 = pieceIdx;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v34, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = Instance;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)Instance, v35, v36, v37, v38, v39, v40);
  dogList = this->fields.dogList;
  v42 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_GameObject__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v42,
    (Il2CppObject *)v21,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_GameObject__bool___ctor__);
  v43 = (UnityEngine_UI_Dropdown_DropdownItem_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
                                                    (System_Func_TSource__bool__o *)v42,
                                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                v43,
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_25;
  v44 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_25;
  v45 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v45
    || (UnityEngine_Transform__SetParent(v45, (UnityEngine_Transform_o *)Instance, 0LL),
        transform = UnityEngine_GameObject__get_transform(v44, 0LL),
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_one(0LL),
        !transform)
    || (UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v47, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_50200824(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_25:
    sub_B2C434(Instance, v24);
  }
  UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v50, callback, v51);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v54 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v53);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v54, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_B2C434(0LL, method);
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

  if ( (byte_41875E5 & 1) == 0 )
  {
    sub_B2C35C(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod);
    byte_41875E5 = 1;
  }
  v5 = sub_B2C42C(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo);
  BitExpeditionStartComponent__WaitTouchSkip_d__10___ctor(
    (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = setTouchPanelMethod;
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v13; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  __int64 v15; // x1
  struct UnityEngine_Animation_o *animation; // x1
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  __int64 v22; // x1
  __int64 v23; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v29; // x3
  System_Collections_IEnumerator_c *v30; // x8
  unsigned __int64 v31; // x10
  System_Collections_IEnumerator_c **v32; // x11
  __int64 v33; // x0
  UnityEngine_Component_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x9
  UnityEngine_Object_o *gameObject; // x20
  __int64 v38; // x0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x19
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0

  if ( (byte_4184E7F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Transform_TypeInfo, v7);
    sub_B2C35C(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__, v8);
    sub_B2C35C(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v10);
    byte_4184E7F = 1;
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
      sub_B2C434(0LL, v22);
    while ( 1 )
    {
      klass = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v26;
          p_offset += 4;
          if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v30 = Enumerator->klass;
      if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        v32 = (System_Collections_IEnumerator_c **)&v30->_1.interfaceOffsets->offset;
        while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v31;
          v32 += 2;
          if ( v31 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
            goto LABEL_22;
        }
        v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 1].method;
      }
      else
      {
LABEL_22:
        v33 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v29);
      }
      v34 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v33)(
                                         Enumerator,
                                         *(_QWORD *)(v33 + 8));
      if ( !v34 )
        goto LABEL_42;
      v36 = *(&UnityEngine_Transform_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34->klass->_2.bitflags2 + 1) < (unsigned int)v36
        || (UnityEngine_Transform_c *)v34->klass->_2.typeHierarchy[v36 - 1] != UnityEngine_Transform_TypeInfo )
      {
        v34 = (UnityEngine_Component_o *)sub_B2C728(v34);
LABEL_42:
        sub_B2C434(v34, v35);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v34, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    }
    v38 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
    if ( v38 )
    {
      v40 = *(_QWORD *)v38;
      v41 = v38;
      if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
      {
        v42 = 0LL;
        v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
        {
          ++v42;
          v43 += 4;
          if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
            goto LABEL_36;
        }
        v44 = v40 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_36:
        v44 = sub_AC5258(v38, System_IDisposable_TypeInfo, 0LL, v39);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
    }
    return 0;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v13 = (Il2CppObject *)sub_B2C42C(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v13, 0LL);
      if ( v13 )
      {
        animation = this->fields.animation;
        v13[1].klass = (Il2CppClass *)animation;
        sub_B2C2F8(&v13[1], animation);
        v17 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v17,
          v13,
          Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
          (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
        v18 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v18, v17, 0LL);
        this->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(p__2__current, v18);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_43:
      sub_B2C434(dogRoot, v15);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4184E80 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_B2C35C(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method);
    byte_4184E80 = 1;
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
    sub_B2C434(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v6 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v6, WAIT_TOUCH_SKIP_TIME, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v6;
  p__2__current = &v2->fields.__2__current;
  sub_B2C2F8(p__2__current, v6);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}