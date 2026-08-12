void BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  Il2CppObject *Component_object; // x0
  __int64 *v10; // x8

  v6 = this;
  if ( (byte_5973F90 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&StringLiteral_21149/*"icon_count_01"*/);
    sub_2213A60(&StringLiteral_21151/*"icon_count_bg"*/);
    this = (BattleNextTDgaugeComponent_o *)sub_2213A60(&StringLiteral_21150/*"icon_count_02"*/);
    byte_5973F90 = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 1 )
      {
        if ( max_length > index )
        {
          Component_object = (Il2CppObject *)gaugeList->m_Items[index];
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_21149/*"icon_count_01"*/;
              goto LABEL_20;
            }
          }
LABEL_21:
          sub_2213CDC(Component_object, *(_QWORD *)&index);
        }
      }
      else if ( type == 2 )
      {
        if ( max_length > index )
        {
          Component_object = (Il2CppObject *)gaugeList->m_Items[index];
          if ( Component_object )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Component_object,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_object )
            {
              v10 = &StringLiteral_21150/*"icon_count_02"*/;
LABEL_20:
              UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v10, 0);
              return;
            }
          }
          goto LABEL_21;
        }
      }
      else if ( max_length > index )
      {
        Component_object = (Il2CppObject *)gaugeList->m_Items[index];
        if ( Component_object )
        {
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)Component_object,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_object )
          {
            v10 = &StringLiteral_21151/*"icon_count_bg"*/;
            goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
      sub_2213CE4(this);
    }
  }
}


void BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0)) == 0 )
  {
    sub_2213CDC(gaugeFrontRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w20
  BattleNextTDgaugeComponent_o *v11; // x19
  struct UnityEngine_GameObject_array *gaugeList; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x23
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  il2cpp_array_size_t v17; // x8
  unsigned __int64 v18; // x27
  UnityEngine_Object_o *v19; // x25
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v28; // w27
  bool v29; // w1
  System_Collections_Generic_List_object__o *v30; // x25
  System_Collections_Generic_List_object__o *v31; // x24
  int v32; // w29
  UnityEngine_GameObject_o *v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  UnityEngine_GameObject_o *v44; // x26
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x0
  System_Object_array *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_Object_array *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  const MethodInfo *v69; // x2
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  v10 = now;
  v11 = this;
  if ( (byte_5973F8E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    this = (BattleNextTDgaugeComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F8E = 1;
  }
  gaugeList = v11->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      while ( v14 < (unsigned int)max_length )
      {
        v15 = (UnityEngine_Object_o *)gaugeList->m_Items[v14];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
        UnityEngine_Object__Destroy_83459800(v15, 0);
        LODWORD(max_length) = gaugeList->max_length;
        if ( (__int64)++v14 >= (int)max_length )
          goto LABEL_10;
      }
LABEL_55:
      sub_2213CE4(this);
    }
  }
LABEL_10:
  gaugebackList = v11->fields.gaugebackList;
  if ( gaugebackList )
  {
    v17 = gaugebackList->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0;
      while ( v18 < (unsigned int)v17 )
      {
        v19 = (UnityEngine_Object_o *)gaugebackList->m_Items[v18];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
        UnityEngine_Object__Destroy_83459800(v19, 0);
        LODWORD(v17) = gaugebackList->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_17;
      }
      goto LABEL_55;
    }
  }
LABEL_17:
  v11->fields.gaugeList = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.gaugeList,
    0,
    *(System_String_o **)&max,
    (System_String_o *)isTDSeraled,
    (int32_t)method,
    v5,
    v6,
    v7);
  v11->fields.gaugebackList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.gaugebackList, 0, v20, v21, v22, v23, v24, v25);
  gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v28 = 0;
  else
    v28 = max;
  if ( v28 < 1 )
  {
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0);
    gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    v29 = 0;
  }
  else
  {
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
    gaugeFrontRoot = (UnityEngine_Component_o *)v11->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0);
    if ( !gaugeFrontRoot )
      goto LABEL_54;
    v29 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v29, 0);
  v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v28 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v11,
                                                    v11->fields.gaugeIcon,
                                                    v11->fields.gaugeFrontRoot,
                                                    0,
                                                    0);
      if ( !gaugeFrontRoot )
        goto LABEL_54;
      v33 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v33, 0);
      if ( !gaugeFrontRoot )
        goto LABEL_54;
      v70.fields.y = 0.0;
      v70.fields.z = 0.0;
      v70.fields.x = v11->fields.width * (float)v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v70, 0);
      if ( !v30 )
        goto LABEL_54;
      items = v30->fields._items;
      v41 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v30->fields._version;
      if ( !items )
        goto LABEL_54;
      size = v30->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)v33,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v33;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v11,
                                                    v11->fields.gaugebackIcon,
                                                    v11->fields.gaugeBackRoot,
                                                    0,
                                                    0);
      if ( !gaugeFrontRoot )
        goto LABEL_54;
      v44 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v44, 0);
      if ( !gaugeFrontRoot )
        goto LABEL_54;
      v71.fields.y = 0.0;
      v71.fields.z = 0.0;
      v71.fields.x = v11->fields.width * (float)v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v71, 0);
      if ( !v31 )
        goto LABEL_54;
      v51 = v31->fields._items;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v31->fields._version;
      if ( !v51 )
        goto LABEL_54;
      v53 = v31->fields._size;
      if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)v44,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &v51->obj.klass + v53;
        v31->fields._size = v53 + 1;
        v54[4] = (Il2CppClass *)v44;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v54 + 4), (int32_t)v44, v45, v46, v47, v48, v49, v50);
      }
      if ( v28 == ++v32 )
        goto LABEL_50;
    }
  }
  if ( !v30 )
    goto LABEL_54;
LABEL_50:
  v55 = System_Collections_Generic_List_object___ToArray(
          v30,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugeList = (struct UnityEngine_GameObject_array *)v55;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->fields.gaugeList, (int32_t)v55, v56, v57, v58, v59, v60, v61);
  if ( !v31 )
LABEL_54:
    sub_2213CDC(gaugeFrontRoot, v26);
  if ( isTDSeraled )
    v10 = 0;
  v62 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v11->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v62;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v11->fields.gaugebackList,
    (int32_t)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  BattleNextTDgaugeComponent__setValue(v11, v10, v69);
}


// local variable allocation has failed, the output may be wrong!
void BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UnityEngine_GameObject_array *gaugeList; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w8
  int32_t v11; // w2
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  __int64 v16; // x1
  int v17; // s0
  bool v18; // w1

  if ( (byte_5973F8F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973F8F = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( max_length )
    {
      v8 = 0;
      v9 = max_length - nextVal;
      while ( 1 )
      {
        v10 = gaugeList->max_length;
        if ( v8 >= v10 )
          break;
        if ( v9 == v10 )
          v11 = 2;
        else
          v11 = v9 > v8;
        BattleNextTDgaugeComponent__changeGauge(this, v8, v11, v3);
        gaugeList = this->fields.gaugeList;
        ++v8;
        if ( !gaugeList )
          goto LABEL_11;
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_11;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_11;
      v13 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_object,
                                                      0,
                                                      0);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( Component_object )
            {
              v17 = 1060320051;
              goto LABEL_27;
            }
          }
          else if ( nextVal )
          {
            if ( v13 )
            {
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v13->klass[1]._1.element_class)(
                                                            v13,
                                                            v13->klass[1]._1.castClass,
                                                            1.0);
              if ( Component_object )
              {
                v18 = 0;
                goto LABEL_31;
              }
            }
          }
          else if ( Component_object )
          {
            v17 = 1050253722;
LABEL_27:
            LODWORD(Component_object[3].monitor) = v17;
            v18 = 1;
LABEL_31:
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, v18, 0);
            return;
          }
LABEL_11:
          sub_2213CDC(gaugeFrontRoot, *(_QWORD *)&nextVal);
        }
      }
    }
  }
}