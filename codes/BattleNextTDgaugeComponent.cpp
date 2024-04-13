void __fastcall BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 *v19; // x8
  __int64 v20; // x0

  v6 = this;
  if ( (byte_42E5080 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, index, type, method);
    sub_B5D5C4(&StringLiteral_19568/*"icon_count_01"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19570/*"icon_count_bg"*/, v10, v11, v12);
    this = (BattleNextTDgaugeComponent_o *)sub_B5D5C4(&StringLiteral_19569/*"icon_count_02"*/, v13, v14, v15);
    byte_42E5080 = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 2 )
      {
        if ( max_length > index )
        {
          Component_srcLineSprite = gaugeList->m_Items[index];
          if ( Component_srcLineSprite )
          {
            Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Component_srcLineSprite,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_srcLineSprite )
            {
              v19 = &StringLiteral_19569/*"icon_count_02"*/;
LABEL_17:
              UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, (System_String_o *)*v19, 0LL);
              return;
            }
          }
          goto LABEL_18;
        }
      }
      else if ( max_length > index )
      {
        Component_srcLineSprite = gaugeList->m_Items[index];
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_srcLineSprite )
          {
            if ( type == 1 )
              v19 = &StringLiteral_19568/*"icon_count_01"*/;
            else
              v19 = &StringLiteral_19570/*"icon_count_bg"*/;
            goto LABEL_17;
          }
        }
LABEL_18:
        sub_B5D69C(Component_srcLineSprite, *(_QWORD *)&index);
      }
      v20 = sub_B5D6C8(this);
      sub_B5D668(v20, 0LL);
    }
  }
}


void __fastcall BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0LL)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL )
  {
    sub_B5D69C(gaugeFrontRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v7; // x19
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
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  UnityEngine_Object_o *v23; // x21
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v25; // x8
  unsigned __int64 v26; // x27
  UnityEngine_Object_o *v27; // x25
  __int64 v28; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v30; // w26
  int32_t v31; // w22
  bool v32; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  int v35; // w27
  UnityEngine_GameObject_o *v36; // x25
  UnityEngine_GameObject_o *v37; // x25
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_42E507E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, now, max, isTDSeraled);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v14, v15, v16);
    this = (BattleNextTDgaugeComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E507E = 1;
  }
  gaugeList = v7->fields.gaugeList;
  if ( gaugeList )
  {
    v21 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      while ( v22 < (unsigned int)v21 )
      {
        v23 = (UnityEngine_Object_o *)gaugeList->m_Items[v22];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v23, 0LL);
        LODWORD(v21) = gaugeList->max_length;
        if ( (__int64)++v22 >= (int)v21 )
          goto LABEL_11;
      }
LABEL_48:
      v39 = sub_B5D6C8(this);
      sub_B5D668(v39, 0LL);
    }
  }
LABEL_11:
  gaugebackList = v7->fields.gaugebackList;
  if ( gaugebackList )
  {
    v25 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = 0LL;
      while ( v26 < (unsigned int)v25 )
      {
        v27 = (UnityEngine_Object_o *)gaugebackList->m_Items[v26];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v27, 0LL);
        LODWORD(v25) = gaugebackList->max_length;
        if ( (__int64)++v26 >= (int)v25 )
          goto LABEL_19;
      }
      goto LABEL_48;
    }
  }
LABEL_19:
  v7->fields.gaugeList = 0LL;
  sub_B5D560(&v7->fields.gaugeList);
  v7->fields.gaugebackList = 0LL;
  sub_B5D560(&v7->fields.gaugebackList);
  gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v30 = 0;
  else
    v30 = max;
  if ( isTDSeraled )
    v31 = 0;
  else
    v31 = now;
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  if ( v30 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    v32 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    v32 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v32, 0LL);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v30 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v7,
                                                    v7->fields.gaugeIcon,
                                                    v7->fields.gaugeFrontRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v36 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v41.fields.y = 0.0;
      v41.fields.z = 0.0;
      v41.fields.x = v7->fields.width * (float)v35;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v41, 0LL);
      if ( !v33 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v7,
                                                    v7->fields.gaugebackIcon,
                                                    v7->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v37 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v42.fields.y = 0.0;
      v42.fields.z = 0.0;
      v42.fields.x = v7->fields.width * (float)v35;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v42, 0LL);
      if ( !v34 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v34,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v35 >= v30 )
        goto LABEL_45;
    }
  }
  if ( !v33 )
    goto LABEL_47;
LABEL_45:
  v7->fields.gaugeList = (struct UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  sub_B5D560(&v7->fields.gaugeList);
  if ( !v34 )
LABEL_47:
    sub_B5D69C(gaugeFrontRoot, v28);
  v7->fields.gaugebackList = (struct UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  sub_B5D560(&v7->fields.gaugebackList);
  BattleNextTDgaugeComponent__setValue(v7, v31, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  int v14; // w21
  int v15; // w22
  int32_t v16; // w2
  BattleNextTDgaugeComponent_o *v17; // x0
  int32_t v18; // w1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v20; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  int v22; // w8
  bool v23; // w1
  UnityEngine_Behaviour_o *v24; // x0

  if ( (byte_42E507F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, nextVal, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E507F = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v13 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v13 )
    {
      if ( (int)v13 >= 1 )
      {
        v14 = 0;
        v15 = (_DWORD)v13 - nextVal;
        do
        {
          if ( v15 == (_DWORD)v13 )
          {
            v16 = 2;
          }
          else
          {
            if ( v15 <= v14 )
            {
              v17 = this;
              v18 = v14;
              v16 = 0;
              goto LABEL_13;
            }
            v16 = 1;
          }
          v17 = this;
          v18 = v14;
LABEL_13:
          BattleNextTDgaugeComponent__changeGauge(v17, v18, v16, v3);
          v13 = this->fields.gaugeList;
          if ( !v13 )
            goto LABEL_37;
          LODWORD(v13) = v13->max_length;
          ++v14;
        }
        while ( v14 < (int)v13 );
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_37;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_37;
      v20 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_WebViewObject,
                                                      0LL,
                                                      0LL);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( Component_WebViewObject )
            {
              v22 = 1060320051;
              goto LABEL_32;
            }
          }
          else if ( nextVal )
          {
            if ( v20 )
            {
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v20->klass[1]._1.castClass)(
                                                            v20,
                                                            v20->klass[1]._1.declaringType,
                                                            1.0);
              if ( Component_WebViewObject )
              {
                v24 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
                v23 = 0;
                goto LABEL_36;
              }
            }
          }
          else if ( Component_WebViewObject )
          {
            v22 = 1050253722;
LABEL_32:
            v23 = 1;
            LODWORD(Component_WebViewObject->fields.onStarted) = v22;
            v24 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
LABEL_36:
            UnityEngine_Behaviour__set_enabled(v24, v23, 0LL);
            return;
          }
LABEL_37:
          sub_B5D69C(gaugeFrontRoot, *(_QWORD *)&nextVal);
        }
      }
    }
  }
}