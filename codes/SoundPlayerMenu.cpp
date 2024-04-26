void __fastcall SoundPlayerMenu___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4350B3A & 1) == 0 )
  {
    sub_B70694(&SoundPlayerMenu_TypeInfo);
    sub_B70694(&StringLiteral_13105/*"SoundPlayerNewKey"*/);
    byte_4350B3A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)SoundPlayerMenu_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_13105/*"SoundPlayerNewKey"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_13105/*"SoundPlayerNewKey"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall SoundPlayerMenu___ctor(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4350B39 & 1) == 0 )
  {
    sub_B70694(&BaseMenu_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350B39 = 1;
  }
  *(_QWORD *)&this->fields.LISTENING_TIME = 0x141200000LL;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.playSoundName, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.isNewList = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isNewList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall SoundPlayerMenu__EndOpen(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4350B2B & 1) == 0 )
  {
    sub_B70694(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4350B2B = 1;
  }
  this->fields.state = 2;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v4 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B70764(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
  SoundPlayerListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
    0LL);
  if ( !soundPlayerListViewManager )
    sub_B7076C(v5, v6);
  soundPlayerListViewManager->fields.callbackFunc = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SoundPlayerListViewManager__SetMode_23230708(soundPlayerListViewManager, 2, v13);
  ActionExtensions__Call(this->fields.openedAct, 0LL);
}


void __fastcall SoundPlayerMenu__Init(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  ListViewManager_o *soundPlayerListViewManager; // x0

  if ( (byte_4350B26 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350B26 = 1;
  }
  this->fields.retTrialListening = 0LL;
  this->fields.state = 0;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v2, v3, v4, v5, v6, v7);
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v10, v11, v12, v13, v14, v15);
  soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager
    || (ListViewManager__DestroyList(soundPlayerListViewManager, 0LL),
        (soundPlayerListViewManager = (ListViewManager_o *)this->fields.soundPlayerListViewManager) == 0LL)
    || (soundPlayerListViewManager = (ListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)soundPlayerListViewManager,
                                                            0LL)) == 0LL )
  {
    sub_B7076C(soundPlayerListViewManager, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerMenu__OnSelectSound(
        SoundPlayerMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  SoundPlayerListViewItem_o *v10; // x20
  int32_t playSoundIdx; // w22
  SoundPlayerListViewItem_o *isNewList; // x0
  const MethodInfo *v13; // x1
  SoundManager_c *v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  struct BgmEntity_o *bgmEntity; // x8
  int32_t id; // w21
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BgmEntity_o *v27; // x8
  struct System_String_o **p_fileName; // x8
  struct System_String_o *v29; // x1
  const MethodInfo *v30; // x1
  System_String_o *playSoundName; // x20
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x2

  if ( (byte_4350B2C & 1) == 0 )
  {
    sub_B70694(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4350B2C = 1;
  }
  if ( this->fields.state == 2 )
  {
    Item = SoundPlayerMenu__getItem(this, index, *(const MethodInfo **)&index);
    if ( !Item )
      goto LABEL_34;
    v10 = Item;
    if ( !Item->fields.bgmEntity )
      goto LABEL_34;
    this->fields.selectIndex = index;
    if ( kind == 2 )
    {
      SoundPlayerMenu__attachSelectEffect(this, v8);
      SoundPlayerMenu__createOpenDlg(this, v10, v16);
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, v17);
    }
    else if ( kind == 1 )
    {
      playSoundIdx = this->fields.playSoundIdx;
      this->fields.playSoundIdx = index;
      isNewList = SoundPlayerMenu__getItem(this, playSoundIdx, v9);
      if ( isNewList )
      {
        isNewList->fields._isPlaySound_k__BackingField = 0;
        SoundPlayerListViewItem__applyUi(isNewList, v13);
      }
      if ( this->fields.playSoundIdx == playSoundIdx )
      {
        v14 = SoundManager_TypeInfo;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm((const MethodInfo *)v14);
        SoundPlayerMenu__resetPlaySoundData(this, v15);
      }
      else
      {
        bgmEntity = v10->fields.bgmEntity;
        if ( !bgmEntity )
          goto LABEL_36;
        id = bgmEntity->fields.id;
        *(_WORD *)&v10->fields._isPlaySound_k__BackingField = 1;
        SoundPlayerListViewItem__attachPlayEffect(v10, v13);
        SoundPlayerListViewItem__applyUi(v10, v20);
        isNewList = (SoundPlayerListViewItem_o *)this->fields.isNewList;
        if ( !isNewList )
          goto LABEL_36;
        if ( !System_Collections_Generic_List_int___Contains(
                (System_Collections_Generic_List_int__o *)isNewList,
                id,
                (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__) )
        {
          isNewList = (SoundPlayerListViewItem_o *)this->fields.isNewList;
          if ( !isNewList )
            goto LABEL_36;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)isNewList,
            id,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        if ( (byte_4350B05 & 1) == 0 )
        {
          sub_B70694(&StringLiteral_1/*""*/);
          byte_4350B05 = 1;
        }
        v27 = v10->fields.bgmEntity;
        if ( v27 )
          p_fileName = &v27->fields.fileName;
        else
          p_fileName = (struct System_String_o **)&StringLiteral_1/*""*/;
        v29 = *p_fileName;
        this->fields.playSoundName = *p_fileName;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.playSoundName,
          (System_Int32_array **)v29,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        playSoundName = this->fields.playSoundName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm(playSoundName, v30);
      }
LABEL_34:
      soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
      v33 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B70764(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
      SoundPlayerListViewManager_CallbackFunc___ctor(
        v33,
        (Il2CppObject *)this,
        (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
        0LL);
      if ( soundPlayerListViewManager )
      {
        soundPlayerListViewManager->fields.callbackFunc = v33;
        sub_B70630(
          (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        SoundPlayerListViewManager__SetMode_23230708(soundPlayerListViewManager, 2, v40);
        return;
      }
LABEL_36:
      sub_B7076C(isNewList, v13);
    }
  }
}


void __fastcall SoundPlayerMenu__SetEnableBlockTouchObj(SoundPlayerMenu_o *this, bool enable, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0

  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl )
    sub_B7076C(0LL, enable);
  UnityEngine_Collider__set_enabled(maskColl, enable, 0LL);
}


void __fastcall SoundPlayerMenu___openEvent_b__37_0(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x20
  SoundPlayerListViewManager_CallbackFunc_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2

  if ( (byte_4350B3B & 1) == 0 )
  {
    sub_B70694(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_4350B3B = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 0, 0LL),
        soundPlayerListViewManager = this->fields.soundPlayerListViewManager,
        v5 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B70764(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        SoundPlayerListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
          0LL),
        !soundPlayerListViewManager) )
  {
    sub_B7076C(maskColl, method);
  }
  soundPlayerListViewManager->fields.callbackFunc = v5;
  sub_B70630(
    (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SoundPlayerListViewManager__SetMode_23230708(soundPlayerListViewManager, 2, v12);
}


void __fastcall SoundPlayerMenu__add_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4350B24 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4350B24 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_B70A60(v8);
  SoundPlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SoundPlayerMenu__analyzeNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_c *v3; // x0
  System_String_o *String; // x20
  __int64 v5; // x1
  __int64 isNewList; // x0
  __int64 v7; // x8
  __int64 v8; // x20
  unsigned __int64 v9; // x21
  signed __int64 v10; // x22
  __int64 v11; // x0

  if ( (byte_4350B28 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&SoundPlayerMenu_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350B28 = 1;
  }
  v3 = SoundPlayerMenu_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
    v3 = SoundPlayerMenu_TypeInfo;
  }
  String = UnityEngine_PlayerPrefs__GetString(
             v3->static_fields->SOUND_PLAYER_NEW_KEY,
             (System_String_o *)StringLiteral_1/*""*/,
             0LL);
  if ( !System_String__IsNullOrEmpty(String, 0LL) )
  {
    isNewList = (__int64)this->fields.isNewList;
    if ( !isNewList )
      goto LABEL_19;
    System_Collections_Generic_List_int___Clear(
      (System_Collections_Generic_List_int__o *)isNewList,
      (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
    isNewList = sub_B706AC(char___TypeInfo, 1LL);
    if ( !isNewList )
      goto LABEL_19;
    v5 = isNewList;
    if ( !*(_DWORD *)(isNewList + 24) )
    {
LABEL_17:
      v11 = sub_B70798(isNewList);
      sub_B70738(v11, 0LL);
    }
    *(_WORD *)(isNewList + 32) = 44;
    if ( !String || (isNewList = (__int64)System_String__Split(String, (System_Char_array *)isNewList, 0LL)) == 0 )
LABEL_19:
      sub_B7076C(isNewList, v5);
    v7 = *(_QWORD *)(isNewList + 24);
    v8 = isNewList;
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      v10 = (int)v7;
      while ( 1 )
      {
        isNewList = System_Int32__Parse(*(System_String_o **)(v8 + 32 + 8 * v9), 0LL);
        if ( !this->fields.isNewList )
          goto LABEL_19;
        System_Collections_Generic_List_int___Add(
          this->fields.isNewList,
          isNewList,
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        if ( (__int64)++v9 >= v10 )
          return;
        if ( v9 >= *(unsigned int *)(v8 + 24) )
          goto LABEL_17;
      }
    }
  }
}


void __fastcall SoundPlayerMenu__attachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  const MethodInfo *v4; // x2
  UnityEngine_GameObject_o *Item; // x0
  __int64 v6; // x1
  void *monitor; // x8
  __int64 v8; // x11
  UnityEngine_Component_o **v9; // x20

  if ( (byte_4350B2E & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SoundPlayerListViewObject_TypeInfo);
    byte_4350B2E = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    Item = (UnityEngine_GameObject_o *)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v4);
    if ( !Item )
      goto LABEL_24;
    monitor = Item[4].monitor;
    if ( monitor
      && (v8 = *(&SoundPlayerListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(unsigned __int8 *)(*(_QWORD *)monitor + 300LL) >= (unsigned int)v8) )
    {
      if ( *(SoundPlayerListViewObject_c **)(*(_QWORD *)(*(_QWORD *)monitor + 200LL) + 8 * v8 - 8) == SoundPlayerListViewObject_TypeInfo )
        v9 = (UnityEngine_Component_o **)Item[4].monitor;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
    {
      Item = this->fields.selectEffect;
      if ( Item )
      {
        UnityEngine_GameObject__SetActive(Item, 1, 0LL);
        if ( v9 )
        {
          GameObjectExtensions__SafeSetParent(this->fields.selectEffect, v9[16], 0LL);
          GameObjectExtensions__ResetLocalPosition(this->fields.selectEffect, 0LL);
          GameObjectExtensions__ResetLocalScale(this->fields.selectEffect, 0LL);
          Item = this->fields.selectEffect;
          if ( Item )
          {
            Item = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 Item,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectComponent___);
            if ( Item )
            {
              CommonEffectComponent__ForceStart((CommonEffectComponent_o *)Item, 0LL);
              return;
            }
          }
        }
      }
LABEL_24:
      sub_B7076C(Item, v6);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__busyWaitStopBgm(
        SoundPlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4350B37 & 1) == 0 )
  {
    sub_B70694(&SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
    byte_4350B37 = 1;
  }
  v3 = sub_B70764(SoundPlayerMenu__busyWaitStopBgm_d__41_TypeInfo);
  SoundPlayerMenu__busyWaitStopBgm_d__41___ctor((SoundPlayerMenu__busyWaitStopBgm_d__41_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall SoundPlayerMenu__createOpenDlg(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  SoundPlayerListViewItem_o *v3; // x20
  SoundPlayerMenu_o *v4; // x23
  struct BgmEntity_o *bgmEntity; // x8
  Il2CppObject *v6; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  struct BgmEntity_o *v9; // x20
  System_String_o *v10; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  ItemMaster_o *v12; // x24
  System_String_o *v13; // x21
  UserItemMaster_o *v14; // x25
  WarEntity_o *v15; // x8
  struct System_String_o *name; // x9
  System_String_c *klass; // x9
  System_Int32_array **v18; // x19
  char v19; // w20
  __int64 v20; // x22
  System_String_o *v21; // x23
  struct System_String_o *v22; // x8
  unsigned __int64 v23; // x28
  SoundPlayerMenu_o *v24; // x26
  struct System_String_o *v25; // x8
  int enterTransform; // w8
  __int64 v27; // x8
  __int64 v28; // x8
  Il2CppObject *v29; // x27
  Il2CppObject *CountText; // x28
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  bool v35; // w24
  System_Int32_array **v36; // x27
  System_Int32_array **v37; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  SoundPlayerMenu_o *v44; // x26
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_o *v69; // x21
  System_String_o *v70; // x22
  System_String_o *v71; // x23
  System_String_o *v72; // x25
  CommonUI_o *Instance; // x26
  TripleButtonDlgComponent_CallbackFunc_o *v74; // x27
  __int64 v75; // x0
  __int64 v76; // x0
  SoundPlayerMenu_o *v77; // [xsp+60h] [xbp-80h]
  System_String_o *title; // [xsp+68h] [xbp-78h]
  Il2CppObject *object; // [xsp+70h] [xbp-70h]
  __int64 v80; // [xsp+78h] [xbp-68h]
  UserItemEntity_o *v81; // [xsp+80h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-58h] BYREF

  v3 = item;
  v4 = this;
  if ( (byte_4350B38 & 1) == 0 )
  {
    sub_B70694(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_12449/*"SOUNDPLAYER_OPEN_CHECK"*/);
    sub_B70694(&StringLiteral_12447/*"SOUNDPLAYER_ITEM_COST_WARNING"*/);
    sub_B70694(&StringLiteral_12445/*"SOUNDPLAYER_DIALOG_OK"*/);
    sub_B70694(&StringLiteral_12448/*"SOUNDPLAYER_ITEM_DISP"*/);
    sub_B70694(&StringLiteral_12443/*"SOUNDPLAYER_DIALOG_CANCEL"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_69/*"\r"*/);
    sub_B70694(&StringLiteral_12446/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/);
    sub_B70694(&StringLiteral_12454/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/);
    this = (SoundPlayerMenu_o *)sub_B70694(&StringLiteral_12444/*"SOUNDPLAYER_DIALOG_MIDDLE"*/);
    byte_4350B38 = 1;
  }
  v81 = 0LL;
  entity = 0LL;
  if ( !v3 )
    goto LABEL_58;
  bgmEntity = v3->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)bgmEntity->fields.name;
  if ( !this )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)System_String__Replace_44765404(
                                (System_String_o *)this,
                                (System_String_o *)StringLiteral_69/*"\r"*/,
                                (System_String_o *)StringLiteral_1/*""*/,
                                0LL);
  if ( !this )
    goto LABEL_58;
  v6 = (Il2CppObject *)System_String__Replace_44765404(
                         (System_String_o *)this,
                         (System_String_o *)StringLiteral_26/*"\n"*/,
                         (System_String_o *)StringLiteral_1/*""*/,
                         0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12454/*"SOUNDPLAYER_SOUND_OPEN_TITLE"*/, 0LL);
  v8 = System_String__Format(v7, v6, 0LL);
  v9 = v3->fields.bgmEntity;
  v10 = v8;
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ShopMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  title = v10;
  v12 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)this,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_58;
  this = (SoundPlayerMenu_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)this,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !v9 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_58;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  v14 = (UserItemMaster_o *)this;
  object = (Il2CppObject *)v4;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v9->fields.shopId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__TryGetEntity__) )
  {
    v35 = 0;
    v36 = (System_Int32_array **)v13;
    v21 = v13;
    v18 = (System_Int32_array **)v13;
    goto LABEL_66;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (SoundPlayerMenu_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"SOUNDPLAYER_HAVE_ITEM_NUM"*/, 0LL);
  v15 = entity;
  if ( !entity || (name = entity->fields.name) == 0LL )
LABEL_58:
    sub_B7076C(this, item);
  klass = name[1].klass;
  v18 = (System_Int32_array **)this;
  if ( (int)klass < 1 )
  {
    v19 = 0;
    v21 = v13;
  }
  else
  {
    v77 = this;
    v80 = (int)klass;
    v19 = 0;
    v20 = 8LL;
    v21 = v13;
    while ( 1 )
    {
      v22 = v15->fields.name;
      if ( !v22 )
        goto LABEL_58;
      v23 = v20 - 8;
      if ( v20 - 8 >= (unsigned __int64)LODWORD(v22[1].klass) )
        goto LABEL_88;
      if ( !v12 )
        goto LABEL_58;
      this = (SoundPlayerMenu_o *)ItemMaster__GetItemData(v12, *((_DWORD *)&v22->klass + v20), 0LL);
      if ( this )
      {
        v24 = this;
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        this = (SoundPlayerMenu_o *)NetworkManager__get_UserId(0LL);
        if ( !entity )
          goto LABEL_58;
        v25 = entity->fields.name;
        if ( !v25 )
          goto LABEL_58;
        if ( v23 >= LODWORD(v25[1].klass) )
          goto LABEL_88;
        if ( !v14 )
          goto LABEL_58;
        this = (SoundPlayerMenu_o *)UserItemMaster__TryGetEntity(
                                      v14,
                                      &v81,
                                      (int64_t)this,
                                      *((_DWORD *)&v25->klass + v20),
                                      0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v81 )
            goto LABEL_58;
          item = (SoundPlayerListViewItem_o *)(unsigned int)v81->fields.num;
        }
        else
        {
          this = (SoundPlayerMenu_o *)UserGameMaster__getSelfUserGame(0LL);
          enterTransform = (int)v24->fields.enterTransform;
          if ( enterTransform == 5 )
          {
            if ( !this )
              goto LABEL_58;
            item = (SoundPlayerListViewItem_o *)LODWORD(this->fields.playSoundName);
          }
          else if ( enterTransform == 22 )
          {
            if ( !this )
              goto LABEL_58;
            item = (SoundPlayerListViewItem_o *)HIDWORD(this->fields.playSoundName);
          }
          else
          {
            item = 0LL;
          }
        }
        if ( !entity )
          goto LABEL_58;
        v27 = *(_QWORD *)&entity->fields.startType;
        if ( !v27 )
          goto LABEL_58;
        if ( v23 >= *(unsigned int *)(v27 + 24) )
          goto LABEL_88;
        if ( (int)item < *(_DWORD *)(v27 + 4 * v20) )
          v19 = 1;
        this = (SoundPlayerMenu_o *)ItemType__GetCountText((int32_t)v24->fields.enterTransform, (int32_t)item, 0LL);
        if ( !entity )
          goto LABEL_58;
        v28 = *(_QWORD *)&entity->fields.startType;
        if ( !v28 )
          goto LABEL_58;
        if ( v23 >= *(unsigned int *)(v28 + 24) )
          goto LABEL_88;
        v29 = (Il2CppObject *)this;
        CountText = (Il2CppObject *)ItemType__GetCountText(
                                      (int32_t)v24->fields.enterTransform,
                                      *(_DWORD *)(v28 + 4 * v20),
                                      0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
        v32 = System_String__Format_44753704(v31, &v24->fields.basePanelList->obj, v29, 0LL);
        v21 = System_String__Concat_44758168(v21, v32, 0LL);
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SOUNDPLAYER_ITEM_DISP"*/, 0LL);
        v34 = System_String__Format_44753704(v33, &v24->fields.basePanelList->obj, CountText, 0LL);
        this = (SoundPlayerMenu_o *)System_String__Concat_44758168(v13, v34, 0LL);
        v13 = (System_String_o *)this;
      }
      if ( v20 - 7 >= v80 )
        break;
      v15 = entity;
      ++v20;
      if ( !entity )
        goto LABEL_58;
    }
    v18 = (System_Int32_array **)v77;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SOUNDPLAYER_ITEM_COST_WARNING"*/, 0LL);
  v35 = v19 & 1;
LABEL_66:
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SOUNDPLAYER_OPEN_CHECK"*/, 0LL);
  this = (SoundPlayerMenu_o *)sub_B706AC(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_58;
  v44 = this;
  if ( v18 )
  {
    this = (SoundPlayerMenu_o *)sub_B70754(v18, this->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( !LODWORD(v44->fields.basePanelList) )
    goto LABEL_88;
  v44->fields.baseWindow = (struct UnityEngine_GameObject_o *)v18;
  sub_B70630((BattleServantConfConponent_o *)&v44->fields.baseWindow, v18, v38, v39, v40, v41, v42, v43);
  if ( v21 )
  {
    this = (SoundPlayerMenu_o *)sub_B70754(v21, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v44->fields.basePanelList) <= 1 )
    goto LABEL_88;
  v44->fields.closeTransform = (struct UnityEngine_Transform_o *)v21;
  sub_B70630(
    (BattleServantConfConponent_o *)&v44->fields.closeTransform,
    (System_Int32_array **)v21,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  if ( v36 )
  {
    this = (SoundPlayerMenu_o *)sub_B70754(v36, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v44->fields.basePanelList) <= 2 )
    goto LABEL_88;
  v44->fields.enterTransform = (struct UnityEngine_Transform_o *)v36;
  sub_B70630((BattleServantConfConponent_o *)&v44->fields.enterTransform, v36, v51, v52, v53, v54, v55, v56);
  if ( v13 )
  {
    this = (SoundPlayerMenu_o *)sub_B70754(v13, v44->klass->_1.element_class);
    if ( !this )
      goto LABEL_89;
  }
  if ( LODWORD(v44->fields.basePanelList) <= 3 )
    goto LABEL_88;
  *(_QWORD *)&v44->fields.isBasePosition = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&v44->fields.isBasePosition,
    (System_Int32_array **)v13,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( v37 )
  {
    this = (SoundPlayerMenu_o *)sub_B70754(v37, v44->klass->_1.element_class);
    if ( !this )
    {
LABEL_89:
      v76 = sub_B7078C(this);
      sub_B70738(v76, 0LL);
    }
  }
  if ( LODWORD(v44->fields.basePanelList) <= 4 )
  {
LABEL_88:
    v75 = sub_B70798(this);
    sub_B70738(v75, 0LL);
  }
  *(_QWORD *)&v44->fields.basePosition.fields.y = v37;
  sub_B70630((BattleServantConfConponent_o *)&v44->fields.basePosition.fields.y, v37, v63, v64, v65, v66, v67, v68);
  v69 = System_String__Concat_44838292((System_String_array *)v44, 0LL);
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SOUNDPLAYER_DIALOG_CANCEL"*/, 0LL);
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_12444/*"SOUNDPLAYER_DIALOG_MIDDLE"*/, 0LL);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"SOUNDPLAYER_DIALOG_OK"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v74 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B70764(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
  TripleButtonDlgComponent_CallbackFunc___ctor(v74, object, Method_SoundPlayerMenu_openCheckDlgCallback__, 0LL);
  if ( !Instance )
    goto LABEL_58;
  CommonUI__OpenTripleButtonDlg(Instance, title, v69, v70, v71, v72, v74, 30, 10, 10, 1, 0, 8, 1, 0, 0, 0, 0, 0LL);
  this = (SoundPlayerMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_58;
  CommonUI__setStateTripleButtonDlgRightButton((CommonUI_o *)this, v35, 0LL);
}


void __fastcall SoundPlayerMenu__createSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectEffect; // x20
  UnityEngine_Object_o *selectEffect; // x21
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  UnityEngine_GameObject_o *EffetData; // x21
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4350B2D & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_18484/*"ef_soundchoice"*/);
    byte_4350B2D = 1;
  }
  SoundPlayerMenu__releaseSelectEffect(this, method);
  p_selectEffect = &this->fields.selectEffect;
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    if ( !soundPlayerListViewManager )
      goto LABEL_18;
    EffetData = SoundPlayerListViewManager__getEffetData(
                  soundPlayerListViewManager,
                  (System_String_o *)StringLiteral_18484/*"ef_soundchoice"*/,
                  v6);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)EffetData, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)EffetData,
                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      *p_selectEffect = (struct UnityEngine_GameObject_o *)v9;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.selectEffect, v9, v10, v11, v12, v13, v14, v15);
      soundPlayerListViewManager = (SoundPlayerListViewManager_o *)*p_selectEffect;
      if ( *p_selectEffect )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerListViewManager, 0, 0LL);
        GameObjectExtensions__SafeSetParent_32503456(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
        return;
      }
LABEL_18:
      sub_B7076C(soundPlayerListViewManager, v5);
    }
  }
}


void __fastcall SoundPlayerMenu__detachSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectEffect; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_4350B2F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350B2F = 1;
  }
  selectEffect = (UnityEngine_Object_o *)this->fields.selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(selectEffect, 0LL, 0LL) )
  {
    v5 = this->fields.selectEffect;
    if ( !v5 )
      sub_B7076C(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, 0, 0LL);
    GameObjectExtensions__SafeSetParent_32503456(this->fields.selectEffect, this->fields.selectEffectHideObj, 0LL);
  }
}


void __fastcall SoundPlayerMenu__endPurchaseRequest(
        SoundPlayerMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  SoundPlayerListViewManager_CallbackFunc_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2
  struct SoundPlayerListViewManager_o *v23; // x8
  const MethodInfo *v24; // x2
  System_Int32_array **Item; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x8
  __int64 v33; // x8
  Il2CppObject *v34; // x20
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v38; // x22

  if ( (byte_4350B33 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SoundPlayerMenu_OnSelectSound__);
    sub_B70694(&Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__);
    sub_B70694(&SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
    sub_B70694(&StringLiteral_26/*"\n"*/);
    sub_B70694(&StringLiteral_12453/*"SOUNDPLAYER_SOUND_OPEN"*/);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_69/*"\r"*/);
    byte_4350B33 = 1;
  }
  v5 = sub_B70764(SoundPlayerMenu___c__DisplayClass36_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass36_0___ctor((SoundPlayerMenu___c__DisplayClass36_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  v6 = (System_String_o *)System_String__op_Equality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    SoundPlayerMenu__detachSelectEffect(this, v7);
    soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
    v15 = (SoundPlayerListViewManager_CallbackFunc_o *)sub_B70764(SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    SoundPlayerListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_SoundPlayerMenu_OnSelectSound__,
      0LL);
    if ( soundPlayerListViewManager )
    {
      soundPlayerListViewManager->fields.callbackFunc = v15;
      sub_B70630(
        (BattleServantConfConponent_o *)&soundPlayerListViewManager->fields.callbackFunc,
        (System_Int32_array **)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      SoundPlayerListViewManager__SetMode_23230708(soundPlayerListViewManager, 2, v22);
      return;
    }
LABEL_17:
    sub_B7076C(v6, v7);
  }
  v23 = this->fields.soundPlayerListViewManager;
  if ( !v23 )
    goto LABEL_17;
  ++v23->fields.canPlaySoundNum;
  SoundPlayerMenu__setCanPlaySoundDisp(this, v7);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v24);
  *(_QWORD *)(v5 + 24) = Item;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), Item, v26, v27, v28, v29, v30, v31);
  v32 = *(_QWORD *)(v5 + 24);
  if ( !v32 )
    goto LABEL_17;
  v33 = *(_QWORD *)(v32 + 112);
  if ( !v33 )
    goto LABEL_17;
  v6 = *(System_String_o **)(v33 + 32);
  if ( !v6 )
    goto LABEL_17;
  v6 = System_String__Replace_44765404(v6, (System_String_o *)StringLiteral_69/*"\r"*/, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v6 )
    goto LABEL_17;
  v34 = (Il2CppObject *)System_String__Replace_44765404(
                          v6,
                          (System_String_o *)StringLiteral_26/*"\n"*/,
                          (System_String_o *)StringLiteral_1/*""*/,
                          0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12453/*"SOUNDPLAYER_SOUND_OPEN"*/, 0LL);
  v36 = System_String__Format(v35, v34, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v5,
    Method_SoundPlayerMenu___c__DisplayClass36_0__endPurchaseRequest_b__0__,
    0LL);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v36,
    v38,
    -1,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0LL,
    0LL);
}


SoundPlayerListViewItem_o *__fastcall SoundPlayerMenu__getItem(
        SoundPlayerMenu_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0

  if ( (idx & 0x80000000) != 0 )
    return 0LL;
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_B7076C(0LL, idx);
  return SoundPlayerListViewManager__GetItem(soundPlayerListViewManager, idx, method);
}


System_String_o *__fastcall SoundPlayerMenu__getPlaySoundName(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  return this->fields.playSoundName;
}


void __fastcall SoundPlayerMenu__hideMenu(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    sub_B7076C(0LL, method);
  SoundPlayerListViewManager__releaseSoundPlayerEffect(soundPlayerListViewManager, method);
  SoundPlayerMenu__releaseSelectEffect(this, v4);
  SoundPlayerMenu__inputNewList(this, v5);
  SoundPlayerMenu__Init(this, v6);
}


void __fastcall SoundPlayerMenu__inputNewList(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  SoundPlayerMenu_o *v2; // x19
  struct System_Collections_Generic_List_int__o *isNewList; // x8
  signed __int64 size; // x20
  System_String_array *v5; // x21
  unsigned __int64 v6; // x24
  BattleServantConfConponent_o *p_baseWindow; // x22
  struct System_Collections_Generic_List_int__o *v8; // x23
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x23
  System_String_o *v16; // x19
  SoundPlayerMenu_c *v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4350B29 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B70694(&SoundPlayerMenu_TypeInfo);
    sub_B70694(&string___TypeInfo);
    this = (SoundPlayerMenu_o *)sub_B70694(&StringLiteral_712/*","*/);
    byte_4350B29 = 1;
  }
  v20 = 0;
  isNewList = v2->fields.isNewList;
  if ( !isNewList )
LABEL_19:
    sub_B7076C(this, method);
  size = isNewList->fields._size;
  if ( (int)size >= 1 )
  {
    this = (SoundPlayerMenu_o *)sub_B706AC(string___TypeInfo, (unsigned int)size);
    v5 = (System_String_array *)this;
    v6 = 0LL;
    p_baseWindow = (BattleServantConfConponent_o *)&this->fields.baseWindow;
    do
    {
      v8 = v2->fields.isNewList;
      if ( !v8 )
        goto LABEL_19;
      if ( v6 >= (unsigned int)v8->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v20 = v8->fields._items->m_Items[v6 + 1];
      this = (SoundPlayerMenu_o *)System_Int32__ToString((int32_t)&v20, 0LL);
      if ( !v5 )
        goto LABEL_19;
      v15 = (System_Int32_array **)this;
      if ( this )
      {
        this = (SoundPlayerMenu_o *)sub_B70754(this, v5->obj.klass->_1.element_class);
        if ( !this )
        {
          v19 = sub_B7078C(0LL);
          sub_B70738(v19, 0LL);
        }
      }
      if ( v6 >= v5->max_length )
      {
        v18 = sub_B70798(this);
        sub_B70738(v18, 0LL);
      }
      p_baseWindow->klass = (BattleServantConfConponent_c *)v15;
      sub_B70630(p_baseWindow, v15, v9, v10, v11, v12, v13, v14);
      ++v6;
      p_baseWindow = (BattleServantConfConponent_o *)((char *)p_baseWindow + 8);
    }
    while ( (__int64)v6 < size );
    v16 = System_String__Join((System_String_o *)StringLiteral_712/*","*/, v5, 0LL);
    v17 = SoundPlayerMenu_TypeInfo;
    if ( (BYTE3(SoundPlayerMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundPlayerMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundPlayerMenu_TypeInfo);
      v17 = SoundPlayerMenu_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetString(v17->static_fields->SOUND_PLAYER_NEW_KEY, v16, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall SoundPlayerMenu__open(
        SoundPlayerMenu_o *this,
        System_Action_o *opened_act,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
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
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2

  if ( (byte_4350B2A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__);
    sub_B70694(&SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
    byte_4350B2A = 1;
  }
  v7 = sub_B70764(SoundPlayerMenu___c__DisplayClass27_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass27_0___ctor((SoundPlayerMenu___c__DisplayClass27_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = opened_act;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)opened_act, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  v29 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)v7, Method_SoundPlayerMenu___c__DisplayClass27_0__open_b__0__, 0LL);
  if ( !soundPlayerListViewManager )
LABEL_6:
    sub_B7076C(v8, v9);
  SoundPlayerListViewManager__loadSoundPlayerEffect(soundPlayerListViewManager, v29, v30);
}


void __fastcall SoundPlayerMenu__openCheckDlgCallback(
        SoundPlayerMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  System_Int32_array **Item; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  CommonUI_o *Instance; // x19
  System_Action_o *v24; // x0
  __int64 *v25; // x8
  const MethodInfo *v26; // x2
  System_Collections_IEnumerator_o *v27; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CommonUI_o *v35; // x20
  TripleButtonDlgComponent_CallbackFunc_o *v36; // x21
  const MethodInfo *v37; // x1
  System_Action_o *v38; // x21

  if ( (byte_4350B31 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&TripleButtonDlgComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SoundPlayerMenu_openCheckDlgCallback__);
    sub_B70694(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__);
    sub_B70694(&Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__);
    sub_B70694(&SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
    byte_4350B31 = 1;
  }
  v5 = sub_B70764(SoundPlayerMenu___c__DisplayClass34_0_TypeInfo);
  SoundPlayerMenu___c__DisplayClass34_0___ctor((SoundPlayerMenu___c__DisplayClass34_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  Item = (System_Int32_array **)SoundPlayerMenu__getItem(this, this->fields.selectIndex, v14);
  *(_QWORD *)(v5 + 16) = Item;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), Item, v16, v17, v18, v19, v20, v21);
  switch ( result )
  {
    case 2:
      SoundPlayerMenu__stopTrialListening(this, v22);
      SoundPlayerMenu__detachSelectEffect(this, v37);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v25 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__1__;
LABEL_11:
      v38 = v24;
      System_Action___ctor(v24, (Il2CppObject *)v5, *v25, 0LL);
      if ( Instance )
      {
        CommonUI__CloseTripleButtonDlg(Instance, v38, 0LL);
        return;
      }
LABEL_14:
      sub_B7076C(v6, v7);
    case 1:
      SoundPlayerMenu__stopTrialListening(this, v22);
      v27 = SoundPlayerMenu__trialListening(this, *(SoundPlayerListViewItem_o **)(v5 + 16), v26);
      started = UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
      this->fields.retTrialListening = started;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.retTrialListening,
        (System_Int32_array **)started,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v35 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v36 = (TripleButtonDlgComponent_CallbackFunc_o *)sub_B70764(TripleButtonDlgComponent_CallbackFunc_TypeInfo);
      TripleButtonDlgComponent_CallbackFunc___ctor(
        v36,
        (Il2CppObject *)this,
        Method_SoundPlayerMenu_openCheckDlgCallback__,
        0LL);
      if ( v35 )
      {
        CommonUI__setCallbackTripleButtonDlg(v35, v36, 0LL);
        return;
      }
      goto LABEL_14;
    case 0:
      SoundPlayerMenu__stopTrialListening(this, v22);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v24 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      v25 = &Method_SoundPlayerMenu___c__DisplayClass34_0__openCheckDlgCallback_b__0__;
      goto LABEL_11;
  }
}


void __fastcall SoundPlayerMenu__openEvent(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *maskColl; // x0
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4350B34 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu__openEvent_b__37_0__);
    byte_4350B34 = 1;
  }
  maskColl = (UnityEngine_Collider_o *)this->fields.maskColl;
  if ( !maskColl
    || (UnityEngine_Collider__set_enabled(maskColl, 1, 0LL),
        v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo),
        System_Action___ctor(v6, (Il2CppObject *)this, Method_SoundPlayerMenu__openEvent_b__37_0__, 0LL),
        !item) )
  {
    sub_B7076C(maskColl, item);
  }
  SoundPlayerListViewItem__startOpenAnim(item, v6, v7);
}


void __fastcall SoundPlayerMenu__releaseSelectEffect(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_selectEffect; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *selectEffect; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4350B30 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350B30 = 1;
  }
  selectEffect = this->fields.selectEffect;
  p_selectEffect = (BattleServantConfConponent_o *)&this->fields.selectEffect;
  v4 = (UnityEngine_Object_o *)selectEffect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_selectEffect->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(klass, 0LL);
    p_selectEffect->klass = 0LL;
    sub_B70630(p_selectEffect, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SoundPlayerMenu__remove_callbackFunc(
        SoundPlayerMenu_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SoundPlayerMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4350B25 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4350B25 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B650AC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SoundPlayerMenu_o *)sub_B70A60(v8);
  SoundPlayerMenu__releaseSelectEffect(v11, v12);
}


void __fastcall SoundPlayerMenu__resetPlaySoundData(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4350B27 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350B27 = 1;
  }
  this->fields.playSoundIdx = -1;
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.playSoundName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.playSoundName, v9, v2, v3, v4, v5, v6, v7);
}


void __fastcall SoundPlayerMenu__setCanPlaySoundDisp(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UILabel_o *canPlaySoundStr; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  UILabel_o *canPlaySoundCnt; // x20
  __int64 v7; // x2
  struct SoundPlayerListViewManager_o *soundPlayerListViewManager; // x8
  System_String_o *v9; // x21
  __int64 v10; // x2
  struct SoundPlayerListViewManager_o *v11; // x8
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x0
  int32_t playSoundMax; // [xsp+8h] [xbp-28h] BYREF
  int32_t canPlaySoundNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4350B32 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_12450/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/);
    sub_B70694(&StringLiteral_12451/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/);
    byte_4350B32 = 1;
  }
  canPlaySoundStr = this->fields.canPlaySoundStr;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12450/*"SOUNDPLAYER_SOUND_CAN_PLAY_MAX"*/, 0LL);
  if ( !canPlaySoundStr )
    goto LABEL_11;
  UILabel__set_text(canPlaySoundStr, v4, 0LL);
  canPlaySoundCnt = this->fields.canPlaySoundCnt;
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_12451/*"SOUNDPLAYER_SOUND_CAN_PLAY_NUM"*/, 0LL);
  soundPlayerListViewManager = this->fields.soundPlayerListViewManager;
  if ( !soundPlayerListViewManager )
    goto LABEL_11;
  v9 = v4;
  canPlaySoundNum = soundPlayerListViewManager->fields.canPlaySoundNum;
  v4 = (System_String_o *)j_il2cpp_value_box_0(int_TypeInfo, &canPlaySoundNum, v7);
  v11 = this->fields.soundPlayerListViewManager;
  if ( !v11
    || (v12 = (Il2CppObject *)v4,
        playSoundMax = v11->fields.playSoundMax,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &playSoundMax, v10),
        v4 = System_String__Format_44753704(v9, v12, v13, 0LL),
        !canPlaySoundCnt) )
  {
LABEL_11:
    sub_B7076C(v4, v5);
  }
  UILabel__set_text(canPlaySoundCnt, v4, 0LL);
}


void __fastcall SoundPlayerMenu__stopTrialListening(SoundPlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *retTrialListening; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *v11; // x1
  SoundManager_c *v12; // x0
  BattleServantConfConponent_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *klass; // x20
  System_Int32_array **v23; // x1

  if ( (byte_4350B36 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4350B36 = 1;
  }
  retTrialListening = this->fields.retTrialListening;
  if ( retTrialListening )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_36062728((UnityEngine_MonoBehaviour_o *)this, retTrialListening, 0LL);
    this->fields.retTrialListening = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.retTrialListening, 0LL, v4, v5, v6, v7, v8, v9);
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( BgmManager__get_IsBusy(0LL) )
    {
      v11 = SoundPlayerMenu__busyWaitStopBgm(this, v10);
      UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
    }
    else
    {
      v12 = SoundManager_TypeInfo;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopBgm((const MethodInfo *)v12);
      backupBgmName = this->fields.backupBgmName;
      p_backupBgmName = (BattleServantConfConponent_o *)&this->fields.backupBgmName;
      if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
      {
        klass = (System_String_o *)p_backupBgmName->klass;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playBgm(klass, v15);
      }
      v23 = (System_Int32_array **)StringLiteral_1/*""*/;
      p_backupBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
      sub_B70630(p_backupBgmName, v23, v16, v17, v18, v19, v20, v21);
    }
  }
}


System_Collections_IEnumerator_o *__fastcall SoundPlayerMenu__trialListening(
        SoundPlayerMenu_o *this,
        SoundPlayerListViewItem_o *item,
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

  if ( (byte_4350B35 & 1) == 0 )
  {
    sub_B70694(&SoundPlayerMenu__trialListening_d__39_TypeInfo);
    byte_4350B35 = 1;
  }
  v5 = sub_B70764(SoundPlayerMenu__trialListening_d__39_TypeInfo);
  SoundPlayerMenu__trialListening_d__39___ctor((SoundPlayerMenu__trialListening_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = item;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)item, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SoundPlayerMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F8C2 & 1) == 0 )
  {
    sub_B70694(&SoundPlayerMenu___c_TypeInfo);
    byte_434F8C2 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(SoundPlayerMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SoundPlayerMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall SoundPlayerMenu___c___ctor(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SoundPlayerMenu___c___busyWaitStopBgm_b__41_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_434F8C4 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_434F8C4 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


bool __fastcall SoundPlayerMenu___c___trialListening_b__39_0(SoundPlayerMenu___c_o *this, const MethodInfo *method)
{
  if ( (byte_434F8C3 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    byte_434F8C3 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return !BgmManager__get_IsBusy(0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass27_0___ctor(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass27_0___open_b__0(
        SoundPlayerMenu___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct SoundPlayerMenu_o *v10; // x20
  System_Action_o *v11; // x21
  System_Int32_array **opened_act; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **callback; // x1
  struct SoundPlayerMenu_o *v20; // x8
  struct SoundPlayerMenu_o *v21; // x8
  struct SoundPlayerMenu_o *v22; // x8
  struct SoundPlayerMenu_o *v23; // x8
  struct SoundPlayerMenu_o *v24; // x8
  UnityEngine_Object_o *baseWindow; // x20
  struct SoundPlayerMenu_o *v26; // x8
  srcLineSprite_o *Component_srcLineSprite; // x20
  struct SoundPlayerMenu_o *v28; // x8

  if ( (byte_434F8C5 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu_EndOpen__);
    byte_434F8C5 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerMenu__createSelectEffect((SoundPlayerMenu_o *)_4__this, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_36;
  if ( v10->fields.state )
  {
    v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)v10, Method_SoundPlayerMenu_EndOpen__, 0LL);
  }
  else
  {
    opened_act = (System_Int32_array **)this->fields.opened_act;
    v10->fields.openedAct = (struct System_Action_o *)opened_act;
    sub_B70630((BattleServantConfConponent_o *)&v10->fields.openedAct, opened_act, v4, v5, v6, v7, v8, v9);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    callback = (System_Int32_array **)this->fields.callback;
    *((_QWORD *)_4__this + 18) = callback;
    sub_B70630((BattleServantConfConponent_o *)((char *)_4__this + 144), callback, v13, v14, v15, v16, v17, v18);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v20 = this->fields.__4__this;
    if ( !v20 )
      goto LABEL_36;
    _4__this = v20->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    _4__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
    if ( !_4__this )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL);
    v21 = this->fields.__4__this;
    if ( !v21 )
      goto LABEL_36;
    _4__this = v21->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerListViewManager__CreateList((SoundPlayerListViewManager_o *)_4__this, 0LL);
    v22 = this->fields.__4__this;
    if ( !v22 )
      goto LABEL_36;
    _4__this = v22->fields.soundPlayerListViewManager;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerListViewManager__SetMode_23230708((SoundPlayerListViewManager_o *)_4__this, 1, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_36;
    SoundPlayerMenu__setCanPlaySoundDisp((SoundPlayerMenu_o *)_4__this, 0LL);
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_36;
    v23->fields.state = 1;
    v10 = this->fields.__4__this;
    v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)v10, Method_SoundPlayerMenu_EndOpen__, 0LL);
    if ( !v10 )
      goto LABEL_36;
  }
  BaseMenu__Open((BaseMenu_o *)v10, v11, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_36;
  baseWindow = (UnityEngine_Object_o *)v24->fields.baseWindow;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (void *)UnityEngine_Object__op_Inequality(baseWindow, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) == 0 )
    goto LABEL_33;
  v26 = this->fields.__4__this;
  if ( !v26 || (_4__this = v26->fields.baseWindow) == 0LL )
LABEL_36:
    sub_B7076C(_4__this, method);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)_4__this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  _4__this = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_36;
    LODWORD(Component_srcLineSprite->fields.mcLineSprite) = 1045220557;
    LODWORD(Component_srcLineSprite->fields.mFSM) = 2;
  }
LABEL_33:
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_36;
  _4__this = v28->fields.soundPlayerListViewManager;
  if ( !_4__this )
    goto LABEL_36;
  SoundPlayerListViewManager__setUiApplyAllItem(
    (SoundPlayerListViewManager_o *)_4__this,
    v28->fields.isNewList,
    v28->fields.playSoundName,
    0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___ctor(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__0(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  struct SoundPlayerListViewItem_o *item; // x8
  struct BgmEntity_o *bgmEntity; // x8
  int32_t shopId; // w20
  Il2CppObject *_4__this; // x22
  NetworkManager_ResultCallbackFunc_o *v7; // x21
  struct SoundPlayerMenu_o *v8; // x8

  v2 = this;
  if ( (byte_434F8C6 & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_PurchaseRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu_endPurchaseRequest__);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_B70694(&StringLiteral_21560/*"ok"*/);
    byte_434F8C6 = 1;
  }
  item = v2->fields.item;
  if ( !item )
    goto LABEL_14;
  bgmEntity = item->fields.bgmEntity;
  if ( !bgmEntity )
    goto LABEL_14;
  shopId = bgmEntity->fields.shopId;
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( shopId )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v7, _4__this, Method_SoundPlayerMenu_endPurchaseRequest__, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                        v7,
                                                        (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_PurchaseRequest___);
    v8 = v2->fields.__4__this;
    if ( v8 && this )
    {
      PurchaseRequest__beginRequest((PurchaseRequest_o *)this, shopId, v8->fields.PURCHASE_NUM, 0, 0LL);
      return;
    }
LABEL_14:
    sub_B7076C(this, method);
  }
  if ( !_4__this )
    goto LABEL_14;
  SoundPlayerMenu__endPurchaseRequest((SoundPlayerMenu_o *)_4__this, (System_String_o *)StringLiteral_21560/*"ok"*/, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass34_0___openCheckDlgCallback_b__1(
        SoundPlayerMenu___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu___c__DisplayClass34_0_o *v2; // x19
  struct SoundPlayerMenu_o *_4__this; // x20
  SoundPlayerListViewManager_o *soundPlayerListViewManager; // x19
  __int64 v5; // x21
  __int64 v6; // x9
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_434F8C7 & 1) == 0 )
  {
    sub_B70694(&SoundPlayerListViewManager_CallbackFunc_TypeInfo);
    this = (SoundPlayerMenu___c__DisplayClass34_0_o *)sub_B70694(&Method_SoundPlayerMenu_OnSelectSound__);
    byte_434F8C7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (soundPlayerListViewManager = _4__this->fields.soundPlayerListViewManager,
        v5 = sub_B70764(SoundPlayerListViewManager_CallbackFunc_TypeInfo),
        v6 = *(_QWORD *)Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v5 + 40) = Method_SoundPlayerMenu_OnSelectSound__,
        *(_QWORD *)(v5 + 16) = v6,
        *(_QWORD *)(v5 + 32) = _4__this,
        sub_B70630(
          (BattleServantConfConponent_o *)(v5 + 32),
          (System_Int32_array **)_4__this,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        !soundPlayerListViewManager) )
  {
    sub_B7076C(this, method);
  }
  SoundPlayerListViewManager__SetMode(
    soundPlayerListViewManager,
    2,
    (SoundPlayerListViewManager_CallbackFunc_o *)v5,
    0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass36_0___ctor(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SoundPlayerMenu___c__DisplayClass36_0___endPurchaseRequest_b__0(
        SoundPlayerMenu___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  SoundPlayerMenu_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (SoundPlayerMenu__detachSelectEffect(_4__this, 0LL), (_4__this = this->fields.__4__this) == 0LL) )
    sub_B7076C(_4__this, method);
  SoundPlayerMenu__openEvent(_4__this, this->fields.item, 0LL);
}


void __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41___ctor(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__MoveNext(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  SoundPlayerMenu___c_c *v4; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__41_0; // x20
  Il2CppObject *v7; // x21
  struct SoundPlayerMenu___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_WaitUntil_o *v15; // x21
  Il2CppObject **p__2__current; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool result; // w0
  struct SoundPlayerMenu_o *_4__this; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  BattleServantConfConponent_o *p_backupBgmName; // x19
  System_String_o *backupBgmName; // t1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *klass; // x20
  System_Int32_array **v36; // x1

  if ( (byte_434F8C8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__);
    sub_B70694(&SoundPlayerMenu___c_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F8C8 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      sub_B7076C(v25, v26);
    backupBgmName = _4__this->fields.backupBgmName;
    p_backupBgmName = (BattleServantConfConponent_o *)&_4__this->fields.backupBgmName;
    if ( !System_String__IsNullOrEmpty(backupBgmName, 0LL) )
    {
      klass = (System_String_o *)p_backupBgmName->klass;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(klass, 0LL);
    }
    v36 = (System_Int32_array **)StringLiteral_1/*""*/;
    p_backupBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1/*""*/;
    sub_B70630(p_backupBgmName, v36, v29, v30, v31, v32, v33, v34);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  v4 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v4 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__41_0 = static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__41_0,
      v7,
      Method_SoundPlayerMenu___c__busyWaitStopBgm_b__41_0__,
      (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
    v8 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v8->__9__41_0 = _9__41_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v15, _9__41_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v15, v17, v18, v19, v20, v21, v22);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SoundPlayerMenu__busyWaitStopBgm_d__41_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SoundPlayerMenu__busyWaitStopBgm_d__41__System_IDisposable_Dispose(
        SoundPlayerMenu__busyWaitStopBgm_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SoundPlayerMenu__trialListening_d__39___ctor(
        SoundPlayerMenu__trialListening_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SoundPlayerMenu__trialListening_d__39__MoveNext(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct SoundPlayerMenu_o *_4__this; // x20
  System_Int32_array **BgmName; // x0
  __int64 v6; // x1
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
  System_Int32_array **playSoundName; // x1
  System_String_o *BgmCueName; // x0
  float LISTENING_TIME; // s8
  UnityEngine_WaitForSeconds_o *v22; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool result; // w0
  SoundPlayerMenu___c_c *v31; // x0
  struct SoundPlayerMenu___c_StaticFields *static_fields; // x8
  System_Func_bool__o *_9__39_0; // x20
  Il2CppObject *v34; // x21
  struct SoundPlayerMenu___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_WaitUntil_o *v42; // x21
  Il2CppObject **v43; // x19
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_o *backupBgmName; // x19

  if ( (byte_434F8C9 & 1) == 0 )
  {
    sub_B70694(&BgmManager_TypeInfo);
    sub_B70694(&Method_System_Func_bool___ctor__);
    sub_B70694(&System_Func_bool__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&Method_SoundPlayerMenu___c__trialListening_b__39_0__);
    sub_B70694(&SoundPlayerMenu___c_TypeInfo);
    sub_B70694(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B70694(&UnityEngine_WaitUntil_TypeInfo);
    byte_434F8C9 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
    goto LABEL_31;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      BgmName = (System_Int32_array **)SoundManager__getBgmName(0LL);
      if ( _4__this )
      {
        _4__this->fields.backupBgmName = (struct System_String_o *)BgmName;
        sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.backupBgmName, BgmName, v7, v8, v9, v10, v11, v12);
        if ( !System_String__IsNullOrEmpty(_4__this->fields.playSoundName, 0LL) )
        {
          playSoundName = (System_Int32_array **)_4__this->fields.playSoundName;
          _4__this->fields.backupBgmName = (struct System_String_o *)playSoundName;
          sub_B70630(
            (BattleServantConfConponent_o *)&_4__this->fields.backupBgmName,
            playSoundName,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopBgm(0LL);
        BgmName = (System_Int32_array **)this->fields.item;
        if ( BgmName )
        {
          BgmCueName = SoundPlayerListViewItem__getBgmCueName((SoundPlayerListViewItem_o *)BgmName, 0LL);
          SoundManager__playBgm(BgmCueName, 0LL);
          LISTENING_TIME = _4__this->fields.LISTENING_TIME;
          v22 = (UnityEngine_WaitForSeconds_o *)sub_B70764(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v22, LISTENING_TIME, 0LL);
          this->fields.__2__current = (Il2CppObject *)v22;
          p__2__current = &this->fields.__2__current;
          sub_B70630(
            (BattleServantConfConponent_o *)p__2__current,
            (System_Int32_array **)v22,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_42:
      sub_B7076C(BgmName, v6);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !BgmManager__get_IsBusy(0LL) )
  {
LABEL_31:
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__stopBgm(0LL);
    if ( !_4__this )
      goto LABEL_42;
    if ( !System_String__IsNullOrEmpty(_4__this->fields.backupBgmName, 0LL) )
    {
      backupBgmName = _4__this->fields.backupBgmName;
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playBgm(backupBgmName, 0LL);
    }
    _4__this->fields.retTrialListening = 0LL;
    sub_B70630((BattleServantConfConponent_o *)&_4__this->fields.retTrialListening, 0LL, v50, v51, v52, v53, v54, v55);
    return 0;
  }
  v31 = SoundPlayerMenu___c_TypeInfo;
  if ( (BYTE3(SoundPlayerMenu___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SoundPlayerMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundPlayerMenu___c_TypeInfo);
    v31 = SoundPlayerMenu___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__39_0 = static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = SoundPlayerMenu___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_bool__o *)sub_B70764(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__39_0,
      v34,
      Method_SoundPlayerMenu___c__trialListening_b__39_0__,
      (const MethodInfo_299432C *)Method_System_Func_bool___ctor__);
    v35 = SoundPlayerMenu___c_TypeInfo->static_fields;
    v35->__9__39_0 = _9__39_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v35->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (UnityEngine_WaitUntil_o *)sub_B70764(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v42, _9__39_0, 0LL);
  this->fields.__2__current = (Il2CppObject *)v42;
  v43 = &this->fields.__2__current;
  sub_B70630((BattleServantConfConponent_o *)v43, (System_Int32_array **)v42, v44, v45, v46, v47, v48, v49);
  *((_DWORD *)v43 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall SoundPlayerMenu__trialListening_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_Reset(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_SoundPlayerMenu__trialListening_d__39_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall SoundPlayerMenu__trialListening_d__39__System_Collections_IEnumerator_get_Current(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SoundPlayerMenu__trialListening_d__39__System_IDisposable_Dispose(
        SoundPlayerMenu__trialListening_d__39_o *this,
        const MethodInfo *method)
{
  ;
}