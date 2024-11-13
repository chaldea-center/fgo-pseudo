void __fastcall BitExpeditionStartComponent___ctor(BitExpeditionStartComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B1A038 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17405/*"bit_expedition_start_dog_{0}"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17404/*"bit_expedition_start"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17346/*"bg_{0}"*/, v11, v12);
    byte_4B1A038 = 1;
  }
  v13 = StringLiteral_17404/*"bit_expedition_start"*/;
  this->fields.START_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17404/*"bit_expedition_start"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.START_ANIMATION_NAME_BASE, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_17405/*"bit_expedition_start_dog_{0}"*/;
  this->fields.DOG_ANIMATION_NAME_BASE = (struct System_String_o *)StringLiteral_17405/*"bit_expedition_start_dog_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.DOG_ANIMATION_NAME_BASE, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_17346/*"bg_{0}"*/;
  this->fields.BG_IMAGE_NAME_BASE = (struct System_String_o *)StringLiteral_17346/*"bg_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.BG_IMAGE_NAME_BASE, v21, v22, v23, v24, v25, v26, v27);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B1A036 & 1) == 0 )
  {
    sub_1BCA7E0(&BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation, animationName);
    byte_4B1A036 = 1;
  }
  v8 = sub_1BCAA2C(BitExpeditionStartComponent__AnimationPlaying_d__11_TypeInfo, animation, animationName, callBack);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 48), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 32) = animation;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 32), (int64_t)animation, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v8 + 40) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)callBack, v21, v22, v23, v24, v25, v26);
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BitExpeditionStartComponent__SerializeFieldNotNullCheck(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BitExpeditionStartComponent_o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *dogList; // x8
  int size; // w8
  int v6; // w9

  v3 = this;
  if ( (byte_4B1A037 & 1) == 0 )
  {
    this = (BitExpeditionStartComponent_o *)sub_1BCA7E0(
                                              &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                              method,
                                              v2);
    byte_4B1A037 = 1;
  }
  dogList = v3->fields.dogList;
  if ( !dogList )
    sub_1BCAA3C(this, method);
  size = dogList->fields._size;
  v6 = -1;
  do
    ++v6;
  while ( v6 < size );
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x23
  const MethodInfo *v30; // x1
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  CommonConsumeEntity_o *Entity; // x0
  __int64 v34; // x1
  UISprite_o *itemSprite; // x25
  int32_t objectId; // w26
  int32_t eventId; // w26
  UISprite_o *bgSprite; // x25
  System_String_o *BG_IMAGE_NAME_BASE; // x27
  Il2CppObject *v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x24
  System_String_o *DOG_ANIMATION_NAME_BASE; // x24
  Il2CppObject *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Collections_Generic_List_GameObject__o *dogList; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Func_object__bool__o *v55; // x24
  __int64 v56; // x1
  Il2CppObject *v57; // x22
  UnityEngine_GameObject_o *v58; // x22
  UnityEngine_Transform_o *v59; // x23
  __int64 v60; // x2
  UnityEngine_Transform_o *v61; // x22
  System_String_o *v62; // x2
  const MethodInfo *v63; // x4
  System_Collections_IEnumerator_o *started; // x0
  const MethodInfo *v65; // x2
  System_Collections_IEnumerator_o *v66; // x0
  int32_t v67; // [xsp+8h] [xbp-68h] BYREF
  int32_t idx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1A034 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventExpeditionEntity, *(_QWORD *)&pieceIdx);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonConsumeMaster___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_GameObject___, v13, v14);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__, v25, v26);
    sub_1BCA7E0(&BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo, v27, v28);
    byte_4B1A034 = 1;
  }
  v29 = sub_1BCAA2C(
          BitExpeditionStartComponent___c__DisplayClass9_0_TypeInfo,
          eventExpeditionEntity,
          *(_QWORD *)&pieceIdx,
          setTouchPanelMethod);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  BitExpeditionStartComponent__SerializeFieldNotNullCheck(this, v30);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonConsumeMaster___);
  if ( !eventExpeditionEntity || !Instance )
    goto LABEL_24;
  Entity = CommonConsumeMaster__GetEntity(
             (CommonConsumeMaster_o *)Instance,
             eventExpeditionEntity->fields.commonConsumeId,
             1,
             0LL);
  if ( Entity )
  {
    itemSprite = this->fields.itemSprite;
    objectId = Entity->fields.objectId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34);
    AtlasManager__SetItem(itemSprite, objectId, 0LL);
  }
  eventId = eventExpeditionEntity->fields.eventId;
  bgSprite = this->fields.bgSprite;
  BG_IMAGE_NAME_BASE = this->fields.BG_IMAGE_NAME_BASE;
  idx = eventExpeditionEntity->fields.idx;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  v42 = System_String__Format(BG_IMAGE_NAME_BASE, v40, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
  AtlasManager__SetEventUI_38574572(eventId, bgSprite, v42, 0LL);
  DOG_ANIMATION_NAME_BASE = this->fields.DOG_ANIMATION_NAME_BASE;
  v67 = pieceIdx;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  Instance = (DataManager_o *)System_String__Format(DOG_ANIMATION_NAME_BASE, v44, 0LL);
  if ( !v29 )
    goto LABEL_24;
  *(_QWORD *)(v29 + 16) = Instance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)Instance, v45, v46, v47, v48, v49, v50);
  dogList = this->fields.dogList;
  v55 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v52, v53, v54);
  System_Func_object__bool____ctor(
    v55,
    (Il2CppObject *)v29,
    Method_BitExpeditionStartComponent___c__DisplayClass9_0__SetUp_b__0__,
    0LL);
  v57 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)dogList,
          (System_Func_TSource__bool__o *)v55,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
  Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                v57,
                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Instance )
    goto LABEL_24;
  v58 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !this->fields.dogRoot )
    goto LABEL_24;
  v59 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(this->fields.dogRoot, 0LL);
  if ( !v59 )
    goto LABEL_24;
  UnityEngine_Transform__SetParent(v59, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v58, 0LL);
  v61 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B109C6 )
  {
    Instance = (DataManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v32, v60);
    byte_4B109C6 = 1;
  }
  if ( !v61
    || (UnityEngine_Transform__set_localScale(v61, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Rewind_69898588(
          (UnityEngine_Animation_o *)Instance,
          this->fields.START_ANIMATION_NAME_BASE,
          0LL),
        (Instance = (DataManager_o *)this->fields.animation) == 0LL) )
  {
LABEL_24:
    sub_1BCAA3C(Instance, v32);
  }
  UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)Instance, this->fields.START_ANIMATION_NAME_BASE, 0LL);
  started = BitExpeditionStartComponent__AnimationPlaying(this, this->fields.animation, v62, callback, v63);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  v66 = BitExpeditionStartComponent__WaitTouchSkip(this, setTouchPanelMethod, v65);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v66, 0LL);
}


void __fastcall BitExpeditionStartComponent__SkipAnimation(
        BitExpeditionStartComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Animation__Stop(animation, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BitExpeditionStartComponent__WaitTouchSkip(
        BitExpeditionStartComponent_o *this,
        System_Action_o *setTouchPanelMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1A035 & 1) == 0 )
  {
    sub_1BCA7E0(&BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod, method);
    byte_4B1A035 = 1;
  }
  v6 = sub_1BCAA2C(BitExpeditionStartComponent__WaitTouchSkip_d__10_TypeInfo, setTouchPanelMethod, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = setTouchPanelMethod;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)setTouchPanelMethod, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  __int64 v20; // x20
  UnityEngine_GameObject_o *dogRoot; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct UnityEngine_Animation_o *animation; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Func_bool__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  UnityEngine_WaitUntil_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  bool result; // w0
  System_Action_o *callBack; // x0
  struct BitExpeditionStartComponent_o *_4__this; // x20
  __int64 v48; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v51; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v54; // x8
  __int64 v55; // x9
  System_Collections_IEnumerator_c **v56; // x10
  __int64 v57; // x0
  UnityEngine_Component_o *v58; // x0
  __int64 v59; // x1
  __int64 methodPtr_low; // x9
  __int64 v61; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x19
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0

  if ( (byte_4B1A039 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__, v13, v14);
    sub_1BCA7E0(&BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v17, v18);
    byte_4B1A039 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callBack = this->fields.callBack;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callBack, 0LL);
    if ( !_4__this )
      goto LABEL_41;
    dogRoot = _4__this->fields.dogRoot;
    if ( !dogRoot )
      goto LABEL_41;
    dogRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(dogRoot, 0LL);
    if ( !dogRoot )
      goto LABEL_41;
    Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)dogRoot, 0LL);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v48);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v51 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v51;
          p_offset += 4;
          if ( !v51 )
            goto LABEL_15;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_15:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v54 = Enumerator->klass;
      v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v56 = (System_Collections_IEnumerator_c **)&v54->_1.interfaceOffsets->offset;
        while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v55;
          v56 += 2;
          if ( !v55 )
            goto LABEL_22;
        }
        v57 = (__int64)&v54->vtable[*(_DWORD *)v56 + 1].method;
      }
      else
      {
LABEL_22:
        v57 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v58 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v57)(
                                         Enumerator,
                                         *(_QWORD *)(v57 + 8));
      if ( !v58 )
        goto LABEL_40;
      methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v58->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (UnityEngine_Transform_c *)v58->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1BCACFC(v58);
LABEL_40:
        sub_1BCAA3C(v58, v59);
      }
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v58, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    }
    v63 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
    if ( v63 )
    {
      v64 = *(_QWORD *)v63;
      v65 = v63;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_35;
        }
        v68 = v64 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_35:
        v68 = sub_1C1C7C0(v63, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v20 = sub_1BCAA2C(BitExpeditionStartComponent___c__DisplayClass11_0_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v20, 0LL);
    if ( v20 )
    {
      animation = this->fields.animation;
      *(_QWORD *)(v20 + 16) = animation;
      sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)animation, v23, v24, v25, v26, v27, v28);
      v33 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v30, v31, v32);
      System_Func_bool____ctor(
        v33,
        (Il2CppObject *)v20,
        Method_BitExpeditionStartComponent___c__DisplayClass11_0__AnimationPlaying_b__0__,
        0LL);
      v37 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v34, v35, v36);
      UnityEngine_WaitUntil___ctor(v37, v33, 0LL);
      this->fields.__2__current = (Il2CppObject *)v37;
      p__2__current = &this->fields.__2__current;
      sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)v37, v39, v40, v41, v42, v43, v44);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_41:
    sub_1BCAA3C(dogRoot, v22);
  }
  return 0;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BitExpeditionStartComponent__AnimationPlaying_d__11_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  BitExpeditionStartComponent__WaitTouchSkip_d__10_o *v4; // x19
  int32_t _1__state; // w8
  struct BitExpeditionStartComponent_o *_4__this; // x8
  float WAIT_TOUCH_SKIP_TIME; // s8
  UnityEngine_WaitForSeconds_o *v8; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  System_Action_o *setTouchPanelMethod; // x0

  v4 = this;
  if ( (byte_4B1A03A & 1) == 0 )
  {
    this = (BitExpeditionStartComponent__WaitTouchSkip_d__10_o *)sub_1BCA7E0(
                                                                   &UnityEngine_WaitForSeconds_TypeInfo,
                                                                   method,
                                                                   v2);
    byte_4B1A03A = 1;
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
    sub_1BCAA3C(this, method);
  WAIT_TOUCH_SKIP_TIME = _4__this->fields.WAIT_TOUCH_SKIP_TIME;
  v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
  UnityEngine_WaitForSeconds___ctor(v8, WAIT_TOUCH_SKIP_TIME, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v8, v10, v11, v12, v13, v14, v15);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BitExpeditionStartComponent__WaitTouchSkip_d__10_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(this, 0LL);
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
  return System_String__op_Equality(name, this->fields.name, 0LL);
}