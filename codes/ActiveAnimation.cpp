void ActiveAnimation___ctor(ActiveAnimation_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59750A5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59750A5 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.mClip = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mClip, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ActiveAnimation__Finish(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  __int64 v4; // x1
  UnityEngine_Animation_o *v5; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *i; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_AnimationState_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_AnimationState_o *v22; // x20
  int32_t mLastDirection; // w8
  float length; // s0
  int32_t v25; // w8
  UnityEngine_Object_o *mAnimator; // x20
  float v27; // s0
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_Collections_IEnumerator_o *v34; // [xsp+28h] [xbp-38h]

  if ( (byte_597509E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597509E = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    v5 = this->fields.mAnim;
    if ( v5 )
    {
      Enumerator = UnityEngine_Animation__GetEnumerator(v5, 0);
      v34 = Enumerator;
      if ( !Enumerator )
        sub_2213CDC(0, v7);
      for ( i = Enumerator; ; i = v34 )
      {
        klass = i->klass;
        v10 = *(unsigned __int16 *)&i->klass->_2.rank;
        if ( *(_WORD *)&i->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v10;
            p_offset += 4;
            if ( !v10 )
              goto LABEL_13;
          }
          v12 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_13:
          v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v13 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(i, *(_QWORD *)(v12 + 8));
        if ( (v13 & 1) == 0 )
          break;
        if ( !v34 )
          sub_2213CDC(v13, v14);
        v15 = v34->klass;
        v16 = *(unsigned __int16 *)&v34->klass->_2.rank;
        if ( *(_WORD *)&v34->klass->_2.rank )
        {
          v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
          while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v16;
            v17 += 2;
            if ( !v16 )
              goto LABEL_21;
          }
          v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
        }
        else
        {
LABEL_21:
          v18 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v19 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                                v34,
                                                *(_QWORD *)(v18 + 8));
        v22 = v19;
        if ( v19 )
        {
          if ( v19->klass != UnityEngine_AnimationState_TypeInfo )
          {
            sub_221405C(v19, UnityEngine_AnimationState_TypeInfo, v21);
LABEL_54:
            sub_2213CDC(v19, v20);
          }
          mLastDirection = this->fields.mLastDirection;
          if ( mLastDirection == -1 )
          {
            UnityEngine_AnimationState__set_time(v19, 0.0, 0);
          }
          else if ( mLastDirection == 1 )
          {
            length = UnityEngine_AnimationState__get_length(v19, 0);
            UnityEngine_AnimationState__set_time(v22, length, 0);
          }
        }
        else
        {
          v25 = this->fields.mLastDirection;
          if ( v25 == -1 )
            goto LABEL_54;
          if ( v25 == 1 )
            sub_2213CDC(0, v20);
        }
      }
      v28 = sub_2213BB4(v34, System_IDisposable_TypeInfo);
      if ( v28 )
      {
        v29 = *(_QWORD *)v28;
        v30 = v28;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_46;
          }
          v33 = v29 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_46:
          v33 = sub_224BC3C(v28, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
      }
      v5 = this->fields.mAnim;
      if ( v5 )
      {
        UnityEngine_Animation__Sample(v5, 0);
        return;
      }
    }
LABEL_55:
    sub_2213CDC(v5, v4);
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v5 = (UnityEngine_Animation_o *)this->fields.mAnimator;
    if ( !v5 )
      goto LABEL_55;
    v27 = 0.0;
    if ( this->fields.mLastDirection == 1 )
      v27 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v5, this->fields.mClip, 0, v27, 0);
  }
}


void ActiveAnimation__Play(
        ActiveAnimation_o *this,
        System_String_o *clipName,
        int32_t playDirection,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Behaviour_o *v10; // x0
  bool IsNullOrEmpty; // w8
  UnityEngine_Object_o *mAnimator; // x22
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_IEnumerator_o *i; // x22
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_IEnumerator_c *v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  UnityEngine_AnimationState_c **v27; // x0
  __int64 v28; // x2
  UnityEngine_AnimationState_o *v29; // x22
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_String_o *name; // x0
  float v33; // s0
  float time; // s8
  float length; // s0
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x22
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_String_o **p_mClip; // x19
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  float v49; // s0
  System_Collections_IEnumerator_o *v50; // [xsp+28h] [xbp-58h]

  if ( (byte_59750A2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750A2 = 1;
  }
  if ( !playDirection )
  {
    if ( this->fields.mLastDirection == 1 )
      playDirection = -1;
    else
      playDirection = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, clipName);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    v10 = (UnityEngine_Behaviour_o *)this->fields.mAnim;
    if ( !v10 )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled(v10, 0, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(clipName, 0);
    v10 = (UnityEngine_Behaviour_o *)this->fields.mAnim;
    if ( IsNullOrEmpty )
    {
      if ( !v10 )
        goto LABEL_78;
      if ( !UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v10, 0) )
      {
        v10 = (UnityEngine_Behaviour_o *)this->fields.mAnim;
        if ( !v10 )
          goto LABEL_78;
        UnityEngine_Animation__Play((UnityEngine_Animation_o *)v10, 0);
      }
    }
    else
    {
      if ( !v10 )
        goto LABEL_78;
      if ( !UnityEngine_Animation__IsPlaying((UnityEngine_Animation_o *)v10, clipName, 0) )
      {
        v10 = (UnityEngine_Behaviour_o *)this->fields.mAnim;
        if ( !v10 )
          goto LABEL_78;
        UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v10, clipName, 0);
      }
    }
    v10 = (UnityEngine_Behaviour_o *)this->fields.mAnim;
    if ( !v10 )
LABEL_78:
      sub_2213CDC(v10, v9);
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v10, 0);
    v50 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, v15);
    for ( i = Enumerator; ; i = v50 )
    {
      klass = i->klass;
      v18 = *(unsigned __int16 *)&i->klass->_2.rank;
      if ( *(_WORD *)&i->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          p_offset += 4;
          if ( !v18 )
            goto LABEL_34;
        }
        v20 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_34:
        v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v21 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(i, *(_QWORD *)(v20 + 8));
      if ( (v21 & 1) == 0 )
      {
        v36 = sub_2213BB4(v50, System_IDisposable_TypeInfo);
        if ( v36 )
        {
          v37 = *(_QWORD *)v36;
          v38 = v36;
          v39 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
          {
            v40 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
            {
              --v39;
              v40 += 4;
              if ( !v39 )
                goto LABEL_64;
            }
            v41 = v37 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_64:
            v41 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
        }
        v10 = (UnityEngine_Behaviour_o *)this->fields.mAnim;
        this->fields.mLastDirection = playDirection;
        this->fields.mNotify = 1;
        if ( v10 )
        {
          UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0);
          return;
        }
        goto LABEL_78;
      }
      if ( !v50 )
        sub_2213CDC(v21, v22);
      v23 = v50->klass;
      v24 = *(unsigned __int16 *)&v50->klass->_2.rank;
      if ( *(_WORD *)&v50->klass->_2.rank )
      {
        v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
        while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v24;
          v25 += 2;
          if ( !v24 )
            goto LABEL_42;
        }
        v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1];
      }
      else
      {
LABEL_42:
        v26 = sub_224BC3C(v50, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v27 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                               v50,
                                               *(_QWORD *)(v26 + 8));
      v29 = (UnityEngine_AnimationState_o *)v27;
      if ( v27 && *v27 != UnityEngine_AnimationState_TypeInfo )
      {
        sub_221405C(v27, UnityEngine_AnimationState_TypeInfo, v28);
LABEL_76:
        sub_2213CDC(v30, v31);
      }
      v30 = System_String__IsNullOrEmpty(clipName, 0);
      if ( v30 )
        break;
      if ( !v29 )
        sub_2213CDC(v30, v31);
      name = UnityEngine_AnimationState__get_name(v29, 0);
      if ( System_String__op_Equality(name, clipName, 0) )
        goto LABEL_51;
LABEL_57:
      ;
    }
    if ( !v29 )
      goto LABEL_76;
LABEL_51:
    v33 = fabsf(UnityEngine_AnimationState__get_speed(v29, 0)) * (float)playDirection;
    UnityEngine_AnimationState__set_speed(v29, v33, 0);
    if ( playDirection == -1 )
    {
      if ( UnityEngine_AnimationState__get_time(v29, 0) == 0.0 )
      {
        length = UnityEngine_AnimationState__get_length(v29, 0);
        UnityEngine_AnimationState__set_time(v29, length, 0);
      }
    }
    else if ( playDirection == 1 )
    {
      time = UnityEngine_AnimationState__get_time(v29, 0);
      if ( time == UnityEngine_AnimationState__get_length(v29, 0) )
        UnityEngine_AnimationState__set_time(v29, 0.0, 0);
    }
    goto LABEL_57;
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
      && ActiveAnimation__get_isPlaying(this, v13)
      && System_String__op_Equality(this->fields.mClip, clipName, 0) )
    {
      this->fields.mLastDirection = playDirection;
      return;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    this->fields.mClip = clipName;
    p_mClip = &this->fields.mClip;
    *((_BYTE *)p_mClip - 16) = 1;
    *((_DWORD *)p_mClip - 6) = playDirection;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mClip, (int32_t)clipName, v43, v44, v45, v46, v47, v48);
    v10 = (UnityEngine_Behaviour_o *)*(p_mClip - 1);
    if ( !v10 )
      goto LABEL_78;
    v49 = 0.0;
    if ( playDirection != 1 )
      v49 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v10, *p_mClip, 0, v49, 0);
  }
}


ActiveAnimation_o *ActiveAnimation__Play_56313096(
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        int32_t enableBeforePlay,
        int32_t disableCondition,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x23
  UnityEngine_Animation_c *klass; // x24
  UnityEngine_Animation_o *v16; // x23
  __int64 v17; // x25
  __int64 v18; // x1
  char *Component_object; // x23
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Animation_o **v26; // x24
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  int32_t v29; // w2
  int v30; // w9
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x19
  UnityEngine_Object_o *v33; // x19

  v10 = (UnityEngine_Component_o *)anim;
  if ( (byte_59750A3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&NGUITools_TypeInfo);
    anim = (UnityEngine_Animation_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750A3 = 1;
  }
  if ( !v10 )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
  if ( !NGUITools__GetActive_56411004(gameObject, 0) )
  {
    if ( enableBeforePlay != 1 )
      return 0;
    v14 = UnityEngine_Component__get_gameObject(v10, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v13);
    NGUITools__SetActive(v14, 1, 0);
    anim = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_38;
    anim = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                        (UnityEngine_GameObject_o *)anim,
                                        (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    if ( !anim )
      goto LABEL_38;
    klass = anim[1].klass;
    v16 = anim;
    if ( (int)klass >= 1 )
    {
      v17 = 0;
      do
      {
        if ( (unsigned int)v17 >= LODWORD(v16[1].klass) )
          sub_2213CE4(anim);
        anim = (UnityEngine_Animation_o *)*((_QWORD *)&v16[1].monitor + v17);
        if ( !anim )
          goto LABEL_38;
        UIPanel__Refresh((UIPanel_o *)anim, 0);
      }
      while ( (_DWORD)klass != (_DWORD)++v17 );
    }
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               v10,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  anim = (UnityEngine_Animation_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)anim & 1) != 0 )
  {
    anim = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_38;
    anim = (UnityEngine_Animation_o *)UnityEngine_GameObject__AddComponent_object_(
                                        (UnityEngine_GameObject_o *)anim,
                                        (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    Component_object = (char *)anim;
  }
  if ( !Component_object
    || (*((_QWORD *)Component_object + 7) = v10,
        v26 = (UnityEngine_Animation_o **)(Component_object + 56),
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(Component_object + 56),
          (int32_t)v10,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        v28 = *((_QWORD *)Component_object + 4),
        *((_DWORD *)Component_object + 17) = disableCondition,
        !v28) )
  {
LABEL_38:
    sub_2213CDC(anim, clipName);
  }
  v29 = *(_DWORD *)(v28 + 24);
  v30 = *(_DWORD *)(v28 + 28) + 1;
  *(_DWORD *)(v28 + 24) = 0;
  *(_DWORD *)(v28 + 28) = v30;
  if ( v29 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v28 + 16), 0, v29, 0);
  ActiveAnimation__Play((ActiveAnimation_o *)Component_object, clipName, playDirection, v27);
  v32 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
  {
    anim = *v26;
    if ( !*v26 )
      goto LABEL_38;
    UnityEngine_Animation__Sample(anim, 0);
  }
  else
  {
    v33 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 10);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, clipName);
    if ( UnityEngine_Object__op_Inequality(v33, 0, 0) )
    {
      anim = (UnityEngine_Animation_o *)*((_QWORD *)Component_object + 10);
      if ( !anim )
        goto LABEL_38;
      UnityEngine_Animator__Update((UnityEngine_Animator_o *)anim, 0.0, 0);
    }
  }
  return (ActiveAnimation_o *)Component_object;
}


ActiveAnimation_o *ActiveAnimation__Play_56328608(
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ActiveAnimation__Play_56313096(anim, clipName, playDirection, 0, 0, v4);
}


ActiveAnimation_o *ActiveAnimation__Play_56328620(
        UnityEngine_Animation_o *anim,
        int32_t playDirection,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ActiveAnimation__Play_56313096(anim, 0, playDirection, 0, 0, v3);
}


ActiveAnimation_o *ActiveAnimation__Play_56328640(
        UnityEngine_Animator_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        int32_t enableBeforePlay,
        int32_t disableCondition,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  __int64 v13; // x1
  char *Component_object; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_Animator_o **v21; // x24
  const MethodInfo *v22; // x3
  __int64 v23; // x8
  int32_t v24; // w2
  int v25; // w9
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x19
  UnityEngine_Animator_o *v28; // x19
  __int64 v29; // x1
  UnityEngine_GameObject_o *v30; // x23
  UnityEngine_Animator_c *klass; // x24
  UnityEngine_Animator_o *v32; // x23
  __int64 v33; // x25

  v10 = (UnityEngine_Component_o *)anim;
  if ( (byte_59750A4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_2213A60(&NGUITools_TypeInfo);
    anim = (UnityEngine_Animator_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750A4 = 1;
  }
  if ( enableBeforePlay == 2 )
  {
LABEL_4:
    if ( !v10 )
      goto LABEL_42;
  }
  else
  {
    if ( !v10 )
      goto LABEL_42;
    gameObject = UnityEngine_Component__get_gameObject(v10, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v11);
    if ( !NGUITools__GetActive_56411004(gameObject, 0) )
    {
      if ( enableBeforePlay != 1 )
        return 0;
      v30 = UnityEngine_Component__get_gameObject(v10, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v29);
      NGUITools__SetActive(v30, 1, 0);
      anim = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject(v10, 0);
      if ( !anim
        || (anim = (UnityEngine_Animator_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                               (UnityEngine_GameObject_o *)anim,
                                               (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___)) == 0 )
      {
LABEL_42:
        sub_2213CDC(anim, clipName);
      }
      klass = anim[1].klass;
      v32 = anim;
      if ( (int)klass >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v33 >= LODWORD(v32[1].klass) )
            sub_2213CE4(anim);
          anim = (UnityEngine_Animator_o *)*((_QWORD *)&v32[1].monitor + v33);
          if ( !anim )
            goto LABEL_42;
          UIPanel__Refresh((UIPanel_o *)anim, 0);
          if ( (_DWORD)klass == (_DWORD)++v33 )
            goto LABEL_4;
        }
      }
    }
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               v10,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  anim = (UnityEngine_Animator_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)anim & 1) != 0 )
  {
    anim = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_42;
    anim = (UnityEngine_Animator_o *)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)anim,
                                       (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    Component_object = (char *)anim;
  }
  if ( !Component_object )
    goto LABEL_42;
  *((_QWORD *)Component_object + 10) = v10;
  v21 = (UnityEngine_Animator_o **)(Component_object + 80);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Component_object + 80), (int32_t)v10, v15, v16, v17, v18, v19, v20);
  v23 = *((_QWORD *)Component_object + 4);
  *((_DWORD *)Component_object + 17) = disableCondition;
  if ( !v23 )
    goto LABEL_42;
  v24 = *(_DWORD *)(v23 + 24);
  v25 = *(_DWORD *)(v23 + 28) + 1;
  *(_DWORD *)(v23 + 24) = 0;
  *(_DWORD *)(v23 + 28) = v25;
  if ( v24 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v23 + 16), 0, v24, 0);
  ActiveAnimation__Play((ActiveAnimation_o *)Component_object, clipName, playDirection, v22);
  v27 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    anim = (UnityEngine_Animator_o *)*((_QWORD *)Component_object + 7);
    if ( !anim )
      goto LABEL_42;
    UnityEngine_Animation__Sample((UnityEngine_Animation_o *)anim, 0);
  }
  else
  {
    v28 = *v21;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, clipName);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0, 0) )
    {
      anim = *v21;
      if ( !*v21 )
        goto LABEL_42;
      UnityEngine_Animator__Update(anim, 0.0, 0);
    }
  }
  return (ActiveAnimation_o *)Component_object;
}


void ActiveAnimation__Reset(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  __int64 v4; // x1
  UnityEngine_Animator_o *v5; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_IEnumerator_o *i; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_AnimationState_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_AnimationState_o *v22; // x20
  int32_t mLastDirection; // w8
  int32_t v24; // w8
  float length; // s0
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x21
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  UnityEngine_Object_o *mAnimator; // x20
  float v33; // s0
  System_Collections_IEnumerator_o *v34; // [xsp+28h] [xbp-48h]

  if ( (byte_597509F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597509F = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
      return;
    v5 = this->fields.mAnimator;
    if ( v5 )
    {
      v33 = 0.0;
      if ( this->fields.mLastDirection == -1 )
        v33 = 1.0;
      UnityEngine_Animator__Play(v5, this->fields.mClip, 0, v33, 0);
      return;
    }
LABEL_54:
    sub_2213CDC(v5, v4);
  }
  v5 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v5 )
    goto LABEL_54;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v5, 0);
  v34 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v7);
  for ( i = Enumerator; ; i = v34 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_13;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(i, *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v34 )
      sub_2213CDC(v13, v14);
    v15 = v34->klass;
    v16 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_21;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
    }
    else
    {
LABEL_21:
      v18 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v19 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                            v34,
                                            *(_QWORD *)(v18 + 8));
    v22 = v19;
    if ( v19 )
    {
      if ( v19->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_221405C(v19, UnityEngine_AnimationState_TypeInfo, v21);
LABEL_53:
        sub_2213CDC(v19, v20);
      }
      mLastDirection = this->fields.mLastDirection;
      if ( mLastDirection == -1 )
      {
        length = UnityEngine_AnimationState__get_length(v19, 0);
        UnityEngine_AnimationState__set_time(v22, length, 0);
      }
      else if ( mLastDirection == 1 )
      {
        UnityEngine_AnimationState__set_time(v19, 0.0, 0);
      }
    }
    else
    {
      v24 = this->fields.mLastDirection;
      if ( v24 == -1 )
        goto LABEL_53;
      if ( v24 == 1 )
        sub_2213CDC(0, v20);
    }
  }
  v26 = sub_2213BB4(v34, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_39;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_39:
      v31 = sub_224BC3C(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
}


void ActiveAnimation__Start(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventReceiver; // x21
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59750A0 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750A0 = 1;
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v4);
    if ( EventDelegate__IsValid_56312868(onFinished, v4) )
    {
      this->fields.eventReceiver = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v6, v7, v8, v9, v10, v11);
      this->fields.callWhenFinished = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callWhenFinished, 0, v12, v13, v14, v15, v16, v17);
    }
  }
}


void ActiveAnimation__Update(ActiveAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float deltaTime; // s0
  float v5; // s8
  UnityEngine_Object_o *mAnimator; // x20
  __int64 v7; // x1
  UnityEngine_Animator_o *v8; // x0
  float v9; // s0
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *mAnim; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v13; // x1
  System_Collections_IEnumerator_o *v14; // x20
  char v15; // w23
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_IEnumerator_c *v22; // x8
  __int64 v23; // x9
  System_Collections_IEnumerator_c **v24; // x10
  __int64 v25; // x0
  UnityEngine_AnimationState_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_AnimationState_o *v29; // x20
  UnityEngine_Animation_o *v30; // x21
  System_String_o *name; // x0
  float v32; // s9
  float v33; // s0
  float time; // s9
  float length; // s0
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x20
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_Object_c *v43; // x0
  UnityEngine_Object_o *current; // x20
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo *v51; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  __int64 v53; // x1
  UnityEngine_Object_o *eventReceiver; // x20
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t mDisableDirection; // w8
  __int64 v62; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  System_Collections_IEnumerator_o *v64; // [xsp+28h] [xbp-58h]

  if ( (byte_59750A1 & 1) == 0 )
  {
    sub_2213A60(&ActiveAnimation_TypeInfo);
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59750A1 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  if ( deltaTime == 0.0 )
    return;
  v5 = deltaTime;
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v8 = this->fields.mAnimator;
    if ( !v8 )
      goto LABEL_78;
    v9 = -v5;
    if ( this->fields.mLastDirection != -1 )
      v9 = v5;
    UnityEngine_Animator__Update(v8, v9, 0);
    if ( !ActiveAnimation__get_isPlaying(this, v10) )
    {
      v8 = this->fields.mAnimator;
      if ( v8 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0);
        goto LABEL_56;
      }
      goto LABEL_78;
    }
    return;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    return;
  }
  v8 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v8 )
    goto LABEL_78;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v8, 0);
  v64 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v13);
  v14 = Enumerator;
  v15 = 0;
  while ( 1 )
  {
    klass = v14->klass;
    v17 = *(unsigned __int16 *)&v14->klass->_2.rank;
    if ( *(_WORD *)&v14->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_24;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_24:
      v19 = sub_224BC3C(v14, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(v14, *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v64 )
      sub_2213CDC(v20, v21);
    v22 = v64->klass;
    v23 = *(unsigned __int16 *)&v64->klass->_2.rank;
    if ( *(_WORD *)&v64->klass->_2.rank )
    {
      v24 = (System_Collections_IEnumerator_c **)&v22->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 2;
        if ( !v23 )
          goto LABEL_32;
      }
      v25 = (__int64)&v22->vtable[*(_DWORD *)v24 + 1];
    }
    else
    {
LABEL_32:
      v25 = sub_224BC3C(v64, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v26 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v25)(
                                            v64,
                                            *(_QWORD *)(v25 + 8));
    v29 = v26;
    if ( !v26 )
      goto LABEL_75;
    if ( v26->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_221405C(v26, UnityEngine_AnimationState_TypeInfo, v28);
LABEL_75:
      sub_2213CDC(v26, v27);
    }
    v30 = this->fields.mAnim;
    name = UnityEngine_AnimationState__get_name(v26, 0);
    if ( !v30 )
      sub_2213CDC(name, name);
    if ( !UnityEngine_Animation__IsPlaying(v30, name, 0) )
      goto LABEL_43;
    v32 = v5 * UnityEngine_AnimationState__get_speed(v29, 0);
    v33 = v32 + UnityEngine_AnimationState__get_time(v29, 0);
    UnityEngine_AnimationState__set_time(v29, v33, 0);
    if ( v32 >= 0.0 )
    {
      time = UnityEngine_AnimationState__get_time(v29, 0);
      if ( time < UnityEngine_AnimationState__get_length(v29, 0) )
        goto LABEL_44;
      length = UnityEngine_AnimationState__get_length(v29, 0);
      UnityEngine_AnimationState__set_time(v29, length, 0);
LABEL_43:
      v14 = v64;
    }
    else
    {
      if ( UnityEngine_AnimationState__get_time(v29, 0) <= 0.0 )
      {
        UnityEngine_AnimationState__set_time(v29, 0.0, 0);
        goto LABEL_43;
      }
LABEL_44:
      v14 = v64;
      v15 = 1;
    }
  }
  v36 = sub_2213BB4(v64, System_IDisposable_TypeInfo);
  if ( v36 )
  {
    v37 = *(_QWORD *)v36;
    v38 = v36;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_51;
      }
      v41 = v37 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_51:
      v41 = sub_224BC3C(v36, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
  }
  v8 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v8 )
    goto LABEL_78;
  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v8, 0);
  if ( (v15 & 1) == 0 )
  {
LABEL_56:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    if ( this->fields.mNotify )
    {
      v43 = UnityEngine_Object_TypeInfo;
      this->fields.mNotify = 0;
      current = (UnityEngine_Object_o *)ActiveAnimation_TypeInfo->static_fields->current;
      if ( !*(&v43->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v43, v42);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) )
      {
        ActiveAnimation_TypeInfo->static_fields->current = this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)ActiveAnimation_TypeInfo->static_fields,
          (int32_t)this,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        onFinished = this->fields.onFinished;
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v51);
        EventDelegate__Execute_56285144(onFinished, v51);
        eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v53);
        if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
          && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
        {
          v8 = (UnityEngine_Animator_o *)this->fields.eventReceiver;
          if ( v8 )
          {
            UnityEngine_GameObject__SendMessage((UnityEngine_GameObject_o *)v8, this->fields.callWhenFinished, 1, 0);
            goto LABEL_68;
          }
LABEL_78:
          sub_2213CDC(v8, v7);
        }
LABEL_68:
        ActiveAnimation_TypeInfo->static_fields->current = 0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)ActiveAnimation_TypeInfo->static_fields,
          0,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60);
      }
      mDisableDirection = this->fields.mDisableDirection;
      if ( mDisableDirection && this->fields.mLastDirection == mDisableDirection )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v62);
        NGUITools__SetActive(gameObject, 0, 0);
      }
    }
  }
}


bool ActiveAnimation__get_isPlaying(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *mAnimator; // x20
  const MethodInfo *v6; // x1
  int32_t mLastDirection; // w20
  float playbackTime; // s0
  char v9; // w20
  UnityEngine_Animation_o *v10; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v12; // x1
  System_Collections_IEnumerator_o *i; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_AnimationState_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_AnimationState_o *v27; // x21
  UnityEngine_Animation_o *v28; // x22
  System_String_o *name; // x0
  int32_t v30; // w8
  float time; // s8
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_IEnumerator_o *v39; // [xsp+28h] [xbp-48h]

  if ( (byte_597509D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597509D = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mAnim, 0, 0) )
  {
    mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
    {
      mLastDirection = this->fields.mLastDirection;
      playbackTime = ActiveAnimation__get_playbackTime(this, v6);
      if ( mLastDirection == -1 )
      {
        if ( playbackTime != 0.0 )
          goto LABEL_11;
      }
      else if ( playbackTime != 1.0 )
      {
LABEL_11:
        v9 = 1;
        return v9 & 1;
      }
    }
    v9 = 0;
    return v9 & 1;
  }
  v10 = this->fields.mAnim;
  if ( !v10 )
    goto LABEL_57;
  Enumerator = UnityEngine_Animation__GetEnumerator(v10, 0);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v12);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v15 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_19;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_19:
      v17 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(i, *(_QWORD *)(v17 + 8));
    v9 = v18;
    if ( (v18 & 1) == 0 )
      break;
    if ( !v39 )
      sub_2213CDC(v18, v19);
    v20 = v39->klass;
    v21 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_27;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1];
    }
    else
    {
LABEL_27:
      v23 = sub_224BC3C(v39, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v24 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                            v39,
                                            *(_QWORD *)(v23 + 8));
    v27 = v24;
    if ( !v24 )
      sub_2213CDC(0, v25);
    if ( v24->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_221405C(v24, UnityEngine_AnimationState_TypeInfo, v26);
LABEL_57:
      sub_2213CDC(v10, v4);
    }
    v28 = this->fields.mAnim;
    name = UnityEngine_AnimationState__get_name(v24, 0);
    if ( !v28 )
      sub_2213CDC(name, name);
    if ( UnityEngine_Animation__IsPlaying(v28, name, 0) )
    {
      v30 = this->fields.mLastDirection;
      if ( v30 == -1 )
      {
        if ( UnityEngine_AnimationState__get_time(v27, 0) > 0.0 )
          goto LABEL_41;
      }
      else
      {
        if ( v30 != 1 )
          goto LABEL_41;
        time = UnityEngine_AnimationState__get_time(v27, 0);
        if ( time < UnityEngine_AnimationState__get_length(v27, 0) )
          goto LABEL_41;
      }
    }
  }
  v9 = 0;
LABEL_41:
  v32 = sub_2213BB4(v39, System_IDisposable_TypeInfo);
  if ( v32 )
  {
    v33 = *(_QWORD *)v32;
    v34 = v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_46;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_46:
      v37 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
  return v9 & 1;
}


float ActiveAnimation__get_playbackTime(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Animator_o *mAnimator; // x0
  float normalizedTime; // s0
  float v4; // s1
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_AnimatorStateInfo_o v7; // [xsp+30h] [xbp-40h] BYREF

  mAnimator = this->fields.mAnimator;
  memset(&v7, 0, sizeof(v7));
  if ( !mAnimator )
    sub_2213CDC(0, method);
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v6, mAnimator, 0, 0);
  v7 = v6;
  normalizedTime = UnityEngine_AnimatorStateInfo__get_normalizedTime(&v7, 0);
  v4 = 1.0;
  if ( normalizedTime <= 1.0 )
    v4 = normalizedTime;
  if ( normalizedTime >= 0.0 )
    return v4;
  else
    return 0.0;
}