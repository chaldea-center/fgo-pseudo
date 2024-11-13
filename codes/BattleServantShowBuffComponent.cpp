void __fastcall BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19314 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B19314 = 1;
  }
  this->fields.maxLine = 2;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *Object; // x19
  const MethodInfo *v8; // x3
  BattleServantBuffIconComponent_o *Component_object; // x0
  __int64 v10; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8

  if ( (byte_4B1930F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v5, v6);
    byte_4B1930F = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0LL,
             0LL);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v8);
  if ( !Object )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  Component_object = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           Object,
                                                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( datalist->max_length <= index )
    sub_1BCAA44(Component_object, v10);
  if ( !Component_object
    || (BattleServantBuffIconComponent__setIcon_44753512(Component_object, datalist->m_Items[index], 0LL),
        (Component_object = (BattleServantBuffIconComponent_o *)this->fields.objList) == 0LL)
    || (v18 = *(_QWORD *)&Component_object->fields.m_CachedPtr,
        v19 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++HIDWORD(Component_object->fields.m_CancellationTokenSource),
        !v18) )
  {
LABEL_12:
    sub_1BCAA3C(Component_object, v10);
  }
  m_CancellationTokenSource_low = SLODWORD(Component_object->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)Object,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = v18 + 8 * m_CancellationTokenSource_low;
    LODWORD(Component_object->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v21 + 32) = Object;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)Object, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall BattleServantShowBuffComponent__HideBuffObject(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v9; // w20
  _DWORD *monitor; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v13; // w10
  unsigned int v14; // w11
  BattleBuffData_ShowBuffData_o *v15; // x12

  if ( (byte_4B19310 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    byte_4B19310 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_18;
  v9 = 0;
  while ( v9 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v9,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_18;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_18;
    monitor = objList[2].monitor;
    if ( monitor )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_18;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        v13 = monitor[9];
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= max_length )
            sub_1BCAA44(objList, method);
          v15 = datalist->m_Items[v14];
          if ( !v15 )
            break;
          if ( v13 == v15->fields.addOrder )
            goto LABEL_17;
          if ( (int)++v14 >= max_length )
            goto LABEL_16;
        }
LABEL_18:
        sub_1BCAA3C(objList, method);
      }
LABEL_16:
      BattleServantBuffIconComponent__setIcon_44753512((BattleServantBuffIconComponent_o *)objList, 0LL, 0LL);
    }
LABEL_17:
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v9;
    if ( !objList )
      goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v10; // w21
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  Il2CppObject *Item; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4B19312 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7, v8);
    byte_4B19312 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_10;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= objList->fields._size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, index, method);
      return;
    }
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v10,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_10;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_10;
    if ( !objList[2].monitor )
      break;
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v10;
    if ( !objList )
      goto LABEL_10;
  }
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_10;
  if ( datalist->max_length <= index )
    sub_1BCAA44(objList, *(_QWORD *)&index);
  BattleServantBuffIconComponent__setIcon_44753512(
    (BattleServantBuffIconComponent_o *)objList,
    datalist->m_Items[index],
    0LL);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_10:
    sub_1BCAA3C(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v10,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, index, v13);
}


void __fastcall BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v9; // w20

  if ( (byte_4B19313 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v6, v7);
    byte_4B19313 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_11:
    sub_1BCAA3C(objList, method);
  v9 = 0;
  while ( v9 < objList->fields._size )
  {
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v9,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( objList )
    {
      objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                               (UnityEngine_GameObject_o *)objList,
                                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( objList )
      {
        if ( objList[2].monitor )
          BattleServantBuffIconComponent__UpdateActiveBuff((BattleServantBuffIconComponent_o *)objList, 0LL);
        objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v9;
        if ( objList )
          continue;
      }
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *objList; // x0
  int32_t v10; // w21
  int32_t size; // w23
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x3

  v3 = index;
  if ( (byte_4B19311 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v7, v8);
    byte_4B19311 = 1;
  }
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
    goto LABEL_14;
  v10 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( v10 >= size )
      return v10 < size;
    objList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             objList,
                                                             v10,
                                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    if ( !objList )
      goto LABEL_14;
    objList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                             (UnityEngine_GameObject_o *)objList,
                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !objList )
      goto LABEL_14;
    monitor = objList[2].monitor;
    if ( monitor )
    {
      datalist = this->fields.datalist;
      if ( !datalist )
        goto LABEL_14;
      if ( datalist->max_length <= v3 )
        sub_1BCAA44(objList, *(_QWORD *)&index);
      *(_QWORD *)&index = datalist->m_Items[v3];
      if ( !*(_QWORD *)&index )
        goto LABEL_14;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == monitor[9] )
        break;
    }
    objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
    ++v10;
    if ( !objList )
      goto LABEL_14;
  }
  BattleServantBuffIconComponent__setIcon_44753512(
    (BattleServantBuffIconComponent_o *)objList,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0LL);
  objList = (System_Collections_Generic_List_object__o *)this->fields.objList;
  if ( !objList )
LABEL_14:
    sub_1BCAA3C(objList, *(_QWORD *)&index);
  Item = System_Collections_Generic_List_object___get_Item(
           objList,
           v10,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
  BattleServantShowBuffComponent__UpdatePosition(this, (UnityEngine_GameObject_o *)Item, v3, v15);
  return v10 < size;
}


void __fastcall BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxCount; // w21
  int maxLine; // w22
  BattleServantShowBuffComponent_o *v6; // x20
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount > maxLine )
    v8 = maxLine;
  v9.fields.y = v6->fields.addPos.fields.y * (float)v8;
  v9.fields.x = v6->fields.addPos.fields.x * (float)(index % maxCount);
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_object__o *updated; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v20; // w21
  __int64 v21; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v24; // w10
  int v25; // w23
  int32_t v26; // w22
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *v28; // x9
  BattleBuffData_ShowBuffData_o *v29; // x9

  if ( (byte_4B1930E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___, buffList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12, v13);
    byte_4B1930E = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.datalist,
    (int64_t)buffList,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v15);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_13;
  v20 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)&datalist->max_length;
    if ( v20 >= (int)v21 )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_13;
    size = objList->fields._size;
    v24 = this->fields.maxLine * this->fields.maxCount;
    if ( v24 <= v20 )
      break;
    if ( size <= v20 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v20, v18);
    }
    else
    {
      updated = (System_Collections_Generic_List_object__o *)BattleServantShowBuffComponent__UpdateBuff(this, v20, v18);
      if ( ((unsigned __int8)updated & 1) == 0 )
        BattleServantShowBuffComponent__NewBuff(this, v20, v18);
    }
    datalist = *p_datalist;
    ++v20;
    if ( !*p_datalist )
      goto LABEL_13;
  }
  v25 = size - v24;
  if ( size - v24 >= 1 && v20 < (int)v21 )
  {
    while ( 1 )
    {
      updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
      if ( !updated )
        break;
      v26 = 0;
      while ( v26 < updated->fields._size )
      {
        updated = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 updated,
                                                                 v26,
                                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !updated )
          goto LABEL_13;
        updated = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                 (UnityEngine_GameObject_o *)updated,
                                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_13;
        monitor = updated[2].monitor;
        if ( monitor )
        {
          v28 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_13;
          if ( v20 >= v28->max_length )
            sub_1BCAA44(updated, v17);
          v29 = v28->m_Items[v20];
          if ( !v29 )
            goto LABEL_13;
          if ( monitor[9] == v29->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_44753512((BattleServantBuffIconComponent_o *)updated, 0LL, 0LL);
            --v25;
            break;
          }
        }
        updated = (System_Collections_Generic_List_object__o *)this->fields.objList;
        ++v26;
        if ( !updated )
          goto LABEL_13;
      }
      if ( !*p_datalist )
        break;
      if ( v25 >= 1 && ++v20 < (signed int)(*p_datalist)->max_length )
        continue;
      return;
    }
LABEL_13:
    sub_1BCAA3C(updated, v17);
  }
}