void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13B71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo, v5, v6);
    byte_4B13B71 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgAnimationObjDic, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBackgroundComponent__ChangeColorDarkness(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.5, immediate, method);
}


void __fastcall WarBoardBackgroundComponent__ChangeColorNormal(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.0, immediate, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(
        WarBoardBackgroundComponent_o *this,
        float alpha,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v10; // x1
  struct UISprite_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v14; // x8
  TweenAlpha_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x20

  if ( (byte_4B13B6D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, immediate, method);
    sub_1BCA7E0(&UICommonButtonColor_TypeInfo, v7, v8);
    byte_4B13B6D = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v11 = this->fields.maskSprite;
    if ( !v11 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    v14 = UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v12);
      v14 = UICommonButtonColor_TypeInfo;
    }
    v15 = TweenAlpha__Begin(gameObject, v14->static_fields->duration, alpha, 0LL);
    if ( immediate )
    {
      v17 = (UnityEngine_Object_o *)v15;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      v11 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( v17 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v17, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0LL);
          return;
        }
LABEL_16:
        sub_1BCAA3C(v11, v10);
      }
    }
  }
}


WarBoardBGEffectComponent_o *__fastcall WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
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
  WarBoardBGEffectComponent_o *result; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21
  bool v16; // w8
  __int64 v17; // x1
  Il2CppObject *Component_object; // x21
  bool v19; // w8

  if ( (byte_4B13B6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__, objName, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B13B6E = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)result,
         (Il2CppObject *)objName,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)result,
                                              (Il2CppObject *)objName,
                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_17:
    sub_1BCAA3C(result, objName);
  }
  v15 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v16 = UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
  result = 0LL;
  if ( !v16 )
  {
    if ( !v15 )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v15,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( !v19 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_17;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)result,
        (Il2CppObject *)objName,
        Component_object,
        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
      return (WarBoardBGEffectComponent_o *)Component_object;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WarBoardBackgroundComponent__GetBgDiffByIndex(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *Item; // x0
  __int64 v9; // x1

  if ( (byte_4B13B6B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__,
      *(_QWORD *)&idx,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__,
      v5,
      v6);
    byte_4B13B6B = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.bgDiffList;
  if ( result )
  {
    if ( SLODWORD(result[1].klass) >= idx + 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)result,
               idx,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
      if ( !Item )
        sub_1BCAA3C(0LL, v9);
      return (UnityEngine_GameObject_o *)Item[1].klass;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall WarBoardBackgroundComponent__InitBgDiff(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
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
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppClass *klass; // x20
  _BOOL8 IsOpen; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B13B6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__,
      v12,
      v13);
    byte_4B13B6A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( this->fields.bgDiffList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_object__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_1BCAA3C(Master_object, v15);
    v17 = (WarBoardCommonReleaseMaster_o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      bgDiffList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v18 )
        break;
      if ( !v23.fields._current )
        sub_1BCAA3C(v18, v19);
      if ( !v17 )
        sub_1BCAA3C(v18, v19);
      klass = v23.fields._current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v17, (int32_t)v23.fields._current[1].monitor, 0LL);
      if ( !klass )
        sub_1BCAA3C(IsOpen, v22);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void __fastcall WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *ObjectName; // x0
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WarBoardData_o *bgAnimationObjDic; // x21
  bool v16; // zf
  WarBoardBackgroundComponent_o *v17; // x22
  const MethodInfo *v18; // x2
  System_String_o *AnimationName; // x21
  const MethodInfo *v20; // x3

  v4 = this;
  if ( (byte_4B13B6F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6);
    this = (WarBoardBackgroundComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B13B6F = 1;
  }
  if ( !entity )
    goto LABEL_18;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
  {
    v10 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v4, v10, v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0LL);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        bgAnimationObjDic = (WarBoardData_o *)this[6].fields.bgAnimationObjDic;
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
        v16 = IsStop == 1;
        v17 = this;
        if ( v16 )
        {
          if ( bgAnimationObjDic )
          {
            WarBoardData__SetBgAnimationInfo(
              bgAnimationObjDic,
              (System_String_o *)this,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v18);
              return;
            }
          }
        }
        else
        {
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
          if ( bgAnimationObjDic )
          {
            WarBoardData__SetBgAnimationInfo(bgAnimationObjDic, (System_String_o *)v17, (System_String_o *)this, 0LL);
            AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
            this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v20);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_1BCAA3C(this, entity);
    }
  }
}


void __fastcall WarBoardBackgroundComponent__ResumeBgAnimation(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        System_String_o *animName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *WarBoardBGEffectComponent; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B13B70 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, objName, animName);
    byte_4B13B70 = 1;
  }
  WarBoardBGEffectComponent = (UnityEngine_Object_o *)WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
                                                        this,
                                                        objName,
                                                        (const MethodInfo *)animName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Equality(WarBoardBGEffectComponent, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !WarBoardBGEffectComponent )
      sub_1BCAA3C(v9, v10);
    WarBoardBGEffectComponent__ResumeAnimation((WarBoardBGEffectComponent_o *)WarBoardBGEffectComponent, animName, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackgroundComponent__SetDispBgDiff(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppObject *Component_object; // x21
  System_String_o **v19; // x8
  System_String_o *v20; // x19

  if ( (byte_4B13B6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, *(_QWORD *)&idx, isDisp);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_24860/*"wall_0"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24861/*"wall_1"*/, v11, v12);
    byte_4B13B6C = 1;
  }
  BgDiffByIndex = (UnityEngine_Object_o *)WarBoardBackgroundComponent__GetBgDiffByIndex(
                                            this,
                                            idx,
                                            (const MethodInfo *)isDisp);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  v15 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0LL, 0LL);
  if ( !v15 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)BgDiffByIndex,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v15 )
    {
      v19 = (System_String_o **)&StringLiteral_24861/*"wall_1"*/;
      if ( !isDisp )
        v19 = (System_String_o **)&StringLiteral_24860/*"wall_0"*/;
      if ( Component_object )
      {
        v20 = *v19;
        SimpleAnimation__Rewind_64541596((SimpleAnimation_o *)Component_object, *v19, 0LL);
        SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, v20, 0LL);
        return;
      }
LABEL_15:
      sub_1BCAA3C(v15, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BgDiffByIndex, isDisp, 0LL);
  }
}


UITexture_o *__fastcall WarBoardBackgroundComponent__get_BoardBackground(
        WarBoardBackgroundComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardBg;
}


void __fastcall WarBoardBackgroundComponent_BackgroundDiffInfo___ctor(
        WarBoardBackgroundComponent_BackgroundDiffInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}